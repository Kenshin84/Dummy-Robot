# Dummy-Robot · Braç robòtic intel·ligent ultracompacte

Projecte original de [Zhihui Peng](https://github.com/peng-zhihui/Dummy-Robot). [README original en xinès](README.zh.md).

> [Presentació a Bilibili](https://www.bilibili.com/video/BV12341117rG) · [Vídeo a YouTube](https://www.youtube.com/watch?v=F29vrvUwqS4)

![Braç Dummy](5.Docs/1.Images/dummy1.jpg)
![Maleta](5.Docs/1.Images/case.png)

## Fitxers disponibles

L’actualització del 9 de febrer de 2022 inclou els models 3D del braç i la maleta, els dissenys electrònics de la pinça, l’anell LED i el controlador de posicionament sense fil, els projectes de maquinari REF i dels controladors de motor de 20 i 42 mm, els firmwares REF i Ctrl-Step, l’aplicació DummyStudio, l’eina de diagnòstic reftool (basada en odrivetool) i el comandament d’ensenyament Peak com a submòdul.

## Disseny mecànic

El prototip del vídeo combina peces d’alumini mecanitzades per CNC, motors pas a pas i reductors harmònics. L’autor va pagar uns 600 iuans per cada reductor de segona mà. La versió econòmica que descriu el projecte preveu peces impreses en 3D i un [reductor cicloïdal propi](https://github.com/peng-zhihui/CycloidAcuratorNano), fabricat combinant impressió 3D i planxes tallades de policarbonat o acrílic. L’autor preveia una precisió inferior i volia conservar les funcions i el firmware, afegir aplicacions per a ordinador i mòbil amb configuració guiada, substituir el cablejat soldat per connectors de quatre pins per a alimentació i CAN, mantenir el cost total per sota de 2.000 iuans i publicar un tutorial en vídeo.

![Reductor cicloïdal](5.Docs/1.Images/cycliod-nano.jpg)

## Compra de motors i reductors

| Eix o mida | Referència | Proveïdor o fitxa |
| --- | --- | --- |
| J1 | Oriental Motor CRK543AP-H50, conjunt de catàleg amb reducció 50:1 | [Fitxa d’Oriental Motor](https://www.orientalmotor.co.jp/ja/products/detail?hinmei=CRK543AP-H50) |
| J2 i J3 | Harmonic Drive CSF-8-30-1U, dues unitats | [Fitxa del fabricant](https://www.harmonicdrive.net/products/gear-units/miniature-gear-units/csf-1u/csf-8-30-1u) · [Demanar oferta a Harmonic Drive Europa](https://harmonicdrive.de/en/products/gears-with-output-bearing/csf-mini) |
| J4 i J5 | Harmonic Drive CSF-5-30-1U, dues unitats | [Fitxa i consulta a Electromate](https://www.electromate.com/csf-5-30-1u/) · [Demanar disponibilitat a Harmonic Drive Europa](https://harmonicdrive.de/en/products/gears-with-output-bearing/csf-mini) |
| J6 | Oriental Motor PK513PA-H50S, cinc fases i reducció 50:1 integrada | [Botiga alemanya ElektroMotoren](https://elektromotoren.de/pk513pa-h50s-5phase-stepping-motor-crk-series-pk513pa-h50s-58602) |
| 42 mm | NEMA 17 bipolar 17HS16-2004D, candidat per al redisseny | [Compra i fitxa a StepperOnline](https://www.omc-stepperonline.com/de/doppelwelle-nema-17-bipolar-45ncm-63-74oz-in-2a-42x42x40mm-4-draehte-17hs16-2004d) |
| 20 mm | NEMA 8 bipolar 8HS15-0604D, candidat per al redisseny | [Catàleg de compra StepperOnline](https://www.stepperonline.nl/nema-8-stappenmotor) |

Les referències J1–J6 provenen del [muntatge STEP](4.Model/Dummy%20v164.step). A J4, el reductor del CAD és de 30:1 i la relació efectiva al firmware és de 24:1. Cal confirmar les politges i la corretja. Per als motors candidats, comprova brida, eix, parell i corrent abans de comprar. Les fitxes de catàleg serveixen per demanar oferta i confirmar disponibilitat de la referència exacta.

L’electrònica d’aquesta versió es dissenyarà a mida. La llista de compra se centra en la mecànica i els actuadors.

## Electrònica i controladors

El sistema de moviment consta de la placa nucli REF, la placa base REF, els controladors dels motors i el comandament d’ensenyament Peak. Ctrl-Step parteix del projecte [XDrive](https://github.com/unlir/XDrive), un controlador en llaç tancat basat en STM32. XDrive té una versió tancada amb MOSFET discrets i una versió oberta amb ADC i un xip controlador de corrent per commutació, sense CAN. El Dummy incorpora CAN i fa servir les plaques per a motors de 20 i 42 mm. Els fitxers de 57 mm són per a possibles ampliacions.

El firmware dels controladors està disponible en codi font i en binari. Combina C++11 i C, desacobla el maquinari, incorpora interfícies CAN i UART i desa paràmetres en EEPROM emulada. Permet definir el zero en qualsevol posició i retornar-hi en mitja volta com a màxim en qualsevol sentit. És compatible amb STM32 HAL i STM32CubeMX. El codi d’aplicació es troba a `UserApp`.

![Binari del firmware](5.Docs/1.Images/fw2.png)

A la primera engegada, el motor calibra el seu codificador. Després d’una calibració correcta, el botó 1 permet activar el llaç tancat en tornar a engegar. Les ordres CAN i UART es descriuen a `interface_can.cpp` i `interface_uart.cpp`.

![Controlador Ctrl-Step](5.Docs/1.Images/fw3.png)

| Acció | Funció |
| --- | --- |
| Engegar mantenint premuts els dos botons | Recalibrar el codificador |
| Pulsació curta del botó 1 | Activar o desactivar el llaç tancat |
| Pulsació llarga del botó 1 | Reiniciar la placa |
| Pulsació curta del botó 2 | Esborrar la protecció per bloqueig |
| Pulsació llarga del botó 2 | Posar la consigna a zero |

El zero de referència, els paràmetres PID, l’identificador CAN i els paràmetres de moviment es configuren per codi o protocol. El bus CAN permet encadenar els motors amb quatre fils, dos d’alimentació i dos de senyal. Admet modes de parell, velocitat, posició i trajectòria. L’autor també descriu la possibilitat d’adaptar controladors GRBL amb senyal `step/dir`, que requereixen línies individuals a cada articulació i ofereixen control de posició i trajectòria. El firmware de Peak deriva de X-Track i es documenta al submòdul corresponent.

## Firmware del controlador REF

El firmware inclou els controladors de placa (OLED, IMU, LED, brunzidor i memòria no volàtil), U8G2 i Fibre, STM32 HAL, ARM CMSIS, FreeRTOS, la biblioteca `Robot` i les aplicacions de `UserApp`. Per a l’OLED, el projecte adapta U8G2 i fa servir I²C per programari. L’autor hi va mesurar una freqüència d’actualització més alta que amb l’I²C de maquinari.

`DummyRobot` defineix el robot. En inicialitzar-lo es configuren els identificadors CAN, el sentit de gir, les relacions de reducció, els límits de moviment i els paràmetres de Denavit–Hartenberg (DH).

![Inicialització del robot](5.Docs/1.Images/fw1.jpg)
![Paràmetres DH](5.Docs/1.Images/fw2.jpg)

La solució analítica de cinemàtica inversa emprada al projecte es basa en el criteri de Pieper. Tres eixos d’articulació consecutius han de ser concurrents o paral·lels. Si es canvia la geometria, cal actualitzar els paràmetres DH i comprovar que el criteri encara es compleix.

El codificador absolut del motor distingeix posicions dins d’una sola volta. En l’arrencada, el disseny original fa un moviment dirigit de baix parell fins al topall mecànic per establir un zero aproximat. A continuació el refina amb la lectura del codificador. Amb una reducció de 30:1, una volta del motor equival a 12° a la sortida. El document original també comenta les opcions de doble codificador o de codificador de baix consum amb bateria.

## Aplicacions d’ordinador

La demostració fa servir RoboDK amb un controlador adaptat del transport TCP al port sèrie i al protocol de Dummy. DummyStudio és l’aplicació pròpia, feta amb Unity3D i publicada al repositori. En l’actualització original, l’autor preveia distribuir-la gratuïtament i encara no tenia previst publicar-ne el codi font.

## Algorismes de control

La cinemàtica directa obté la posició i l’orientació de la pinça a partir dels angles. La cinemàtica inversa pot donar diverses solucions, habitualment vuit. El controlador tria la que minimitza el desplaçament angular màxim entre les sis articulacions.

`MoveJ` calcula la diferència angular de cada articulació. A partir de la diferència més gran i de `JointSpeed`, fixa la durada del moviment i calcula perfils trapezoïdals sincronitzats per als altres motors. Cada controlador escolta el seu identificador CAN i l’identificador de difusió 0. Desa les consignes i arrenca quan rep el missatge de sincronització. El control dinàmic encara estava en desenvolupament quan es va redactar el document original.

## Modes d’ordres

Les ordres es poden rebre per USB, sèrie o CAN.

| Mode | Freqüència | Execució | Interrupció | Pausa entre ordres | Ús |
| --- | --- | --- | --- | --- | --- |
| SEQ, seqüencial | Irregular, inferior a 5 Hz | Cua FIFO | No | Sí | Passar per punts clau, per exemple en presa amb visió o paletització |
| INT, temps real | Irregular, sense límit especificat | La nova ordre substitueix l’activa | Sí | No | Sincronització de moviments |
| TRJ, seguiment de trajectòria (pendent) | Fixa, 200 Hz | Interpolació periòdica | No | No | Trajectòries precises, com dibuix, gravat o impressió 3D |

## Crèdits

[XDrive](https://github.com/unlir/XDrive), [ODrive](https://github.com/odriverobotics/ODrive), [U8g2](https://github.com/olikraus/u8g2) i [Fibre](https://github.com/samuelsadok/fibre).
