# Llista de compra · Dummy-Robot v164

Preus de referència consultats el 13 de novembre de 2026. Confirma el preu final, l’IVA, l’estoc i el transport segons el país d’entrega. Les files sense preu publicat queden pendents d’oferta.

Tria l’**opció A** si vols seguir el muntatge original, o l’**opció B** si vols adaptar-lo als components d’AliExpress. Compta el material comú una sola vegada.

## Material comú · Amazon i AliExpress

Imports en EUR per planificar la compra. Els rangs són estimacions, i els enllaços de cerca permeten comparar venedors. IVA i transport segons la cistella i l’adreça d’entrega. Els motors i la transmissió només s’han de demanar després de comprovar les cotes.

| Peça | Quantitat | €/unitat o lot | Subtotal | On buscar | Abans de comprar |
| --- | ---: | ---: | ---: | --- | --- |
| Cargoleria M2/M3 | 1 | 12–25 € | 12–25 € | [Amazon.es](https://www.amazon.es/s?k=surtido+tornillos+M2+M3+DIN+912) · [AliExpress](https://www.aliexpress.com/wholesale?SearchText=M2+M3+socket+head+screw+assortment) | ☐ Un lot pressupostat per als 82 cargols. Revisa el cap i totes les llargades, especialment 14, 15 i 18 mm. |
| PETG 1,75 mm · 1 kg | 1 | 15–22 € | 15–22 € | [SUNLU a Amazon.es](https://www.amazon.es/dp/B0D9NFF2T8) | ☐ Comprova el diàmetre i el preu del color seleccionat. |
| Politges · 4 × 16T i 2 × 20T | 6 | 2–5 € | 12–30 € | [AliExpress MXL](https://www.aliexpress.com/wholesale?SearchText=MXL+16T+20T+pulley+4mm) · [Amazon.es 2GT](https://www.amazon.es/s?k=GT2+polea+16T+20T) | ☐ Confirma MXL o 2GT, amplada, diàmetre del forat i fixació. Compra corretges del mateix perfil. |
| Corretges · reserva per a 3 transmissions | 3 | 2–5 € | 6–15 € | [AliExpress MXL](https://www.aliexpress.com/wholesale?SearchText=MXL+timing+belt+3mm) · [Amazon.es 2GT](https://www.amazon.es/s?k=correa+cerrada+GT2) | ☐ Quantitat pressupostària. Mesura centres, amplada i dents abans de comprar. |
| Placa acrílica · retall | 1 | 5–12 € | 5–12 € | [Amazon.es](https://www.amazon.es/s?k=placa+metacrilato+6+mm) | ☐ La placa del CAD fa 50 × 50 × 5,8 mm. Comprova el gruix abans de tallar. |
| Passadors, separadors i fixacions · reserva | 1 | 8–20 € | 8–20 € | [AliExpress](https://www.aliexpress.com/wholesale?SearchText=steel+dowel+pins+metric+assortment) | ☐ Cal inventariar mides i quantitats. Els rodaments específics queden pendents. |

**Subtotal del material comú: 58–124 €.** Els motors es compten dins de cada configuració.

## Opció A · Configuració original del v164

| Eix o peça | Quantitat | Referència i preu | Abans de comprar |
| --- | ---: | --- | --- |
| J1 · Base | 1 | Oriental Motor **PK543AW-H50S**, motor de cinc fases amb reductor 50:1 del conjunt CRK543AP-H50. **Preu pendent.** [Catàleg ElektroMotoren](https://elektromotoren.de/5-Phasen-Schrittmotoren_s4) | ☐ Confirmar estoc, encaix i driver de cinc fases. |
| J2/J3 · Motor estàndard | 1 | **17HS16-2004D**. **9,13 USD** de base, amb suplement de **2,97 USD** si se selecciona Alemanya segons la fitxa consultada. [StepperOnline](https://www.omc-stepperonline.com/dual-shaft-nema-17-bipolar-45ncm-63-74oz-in-2a-42x42x40mm-4-wires-17hs16-2004d) | ☐ Candidat. Comprovar cos de 40 mm, eix davanter Ø5 × 24 mm, eix posterior i estoc del magatzem alemany. |
| J2/J3 · Motor curt | 1 | NEMA 17 curt. **Referència i preu pendents.** [STEP del muntatge](../4.Model/Dummy%20v164.step) | ☐ Mesurar llargada del cos i dels eixos, i verificar el parell i l’encaix. |
| J2/J3 · Reductor | 2 | **CSF-8-30-1U**. **Demanar oferta.** [Fitxa](https://www.harmonicdrive.net/products/gear-units/miniature-gear-units/csf-1u/csf-8-30-1u) · [Harmonic Drive França](https://harmonicdrive.de/fr/contact) | ☐ Confirmar referència completa, disponibilitat, brida i acoblament. |
| J4/J5 · Motor | 2 | **Referència i preu pendents.** [STEP del muntatge](../4.Model/Dummy%20v164.step) | ☐ El CAD etiqueta el volum com a PK513PA-H50S, un conjunt comercial amb reducció 50:1. Confirmar el motor real abans de combinar-lo amb els CSF-5 i les corretges. |
| J4/J5 · Reductor | 2 | **CSF-5-30-1U**. **Demanar oferta.** [Fitxa](https://www.harmonicdrive.net/products/gear-units/miniature-gear-units/csf-1u/csf-5-30-1u) · [Harmonic Drive França](https://harmonicdrive.de/fr/contact) | ☐ Confirmar brida i acoblament. J4 té una reducció efectiva de 24:1 al firmware, mentre que el reductor és 30:1. |
| J6 · Canell | 1 | **PK513PA-H50S**, cinc fases, 50:1. **798 € sense IVA** (949,62 € amb l’IVA alemany de la fitxa), termini anunciat d’unes cinc setmanes a Alemanya. [ElektroMotoren](https://elektromotoren.de/pk513pa-h50s-5phase-stepping-motor-crk-series-pk513pa-h50s-58602) | ☐ Confirmar driver, estoc i preu lliurat. |

**Subtotal conegut amb J6 i material comú: 1.007,62–1.073,62 €.** Falten els altres motors, els quatre reductors i la fabricació de les peces estructurals.

## Opció B · Configuració econòmica amb adaptació del CAD

Preus històrics indexats, consultats el 13/11/2026. La variant, l’estoc i el preu final s’han de confirmar a AliExpress. Conversió orientativa i arrodonida amb el [canvi BCE del 12/11/2026, 1 € = 1,1081 USD](https://www.ecb.europa.eu/stats/policy_and_exchange_rates/euro_reference_exchange_rates/html/eurofxref-graph-usd.fi.html).

| Eix | Producte | Preu de referència | Abans de comprar |
| --- | --- | --- | --- |
| J1 | [Motor NEMA 17 amb planetari, anunci amb opció 50:1](https://www.aliexpress.com/item/1005003676945137.html) | 24,94 USD (~23 €), variant més barata indexada. [Històric](https://www.pricearchive.org/aliexpress.com/item/1005003676945137) | ☐ Confirmar el preu del 50:1 i que inclou el motor. Validar brida, eix, joc i rodament de la base. |
| J2/J3 | 2 × [reductor harmònic genèric 30:1 per a NEMA 17](https://www.aliexpress.com/item/1005008587977858.html) | 52,60 USD (~47 €) per unitat, ~94 € el parell. [Històric](https://ro.pricearchive.org/aliexpress.com/item/1005008587977858) | ☐ Comparar plànol, parell i rodament de sortida amb els CSF-8 i adaptar brida i acoblament. |
| J4/J5 | 2 × [reductor harmònic genèric 30:1 per a NEMA 17](https://www.aliexpress.com/item/1005008587977858.html) | ~94 € el parell. [Històric](https://ro.pricearchive.org/aliexpress.com/item/1005008587977858) | ☐ No s’ha verificat un equivalent compacte al CSF-5. Comprovar si el genèric cap i si el pes és acceptable. Recalcular la relació efectiva de J4 si canvia la transmissió. |
| J6 | [Reductor ito SHD05 de 28 mm, 50:1](https://www.aliexpress.com/item/1005013004725978.html) | 147,48 USD (~133 €). [Històric](https://ms.pricearchive.org/aliexpress.com/item/1005013004725978) | ☐ Confirmar brida, eix, rodament i què inclou el lot. Es pressuposta el motor a part. |

### Total orientatiu amb les alternatives

| Partida | Import |
| --- | ---: |
| Material comú | 58–124 € |
| Dos motors candidats J2/J3 | 24–44 € |
| J1 · Preu base indexat de l’anunci | ~23 € |
| J2–J5 · Quatre reductors genèrics | ~188 € |
| J6 · Reductor SHD05 | ~133 € |
| Reserva per als motors J4, J5 i J6, estimada a 12–25 € cadascun | 36–75 € |
| **Total estimat de les peces pressupostades** | **462–587 €** |

Aquest escenari requereix redisseny. El total conserva la reserva de politges i corretges, i deixa pendents els adaptadors, la fabricació estructural, els rodaments específics, l’electrònica, la pinça, els impostos i l’enviament. El preu de J1 pot pujar en seleccionar 50:1. La compatibilitat mecànica dels candidats queda pendent de validar abans de comprar.

### Motors candidats per a J2 i J3

| Peça | Quantitat | €/unitat | Subtotal | On buscar | Abans de comprar |
| --- | ---: | ---: | ---: | --- | --- |
| NEMA 17 estàndard · 17HS16-2004D | 1 | 12–22 € | 12–22 € | [Amazon.es](https://www.amazon.es/s?k=17HS16-2004D) · [AliExpress](https://www.aliexpress.com/wholesale?SearchText=17HS16-2004D) | ☐ Confirma cos de 40 mm, doble eix i corrent. Compara amb StepperOnline si Amazon surt més car. |
| NEMA 17 curt · 17HS08-1004S | 1 | 12–22 € | 12–22 € | [Amazon.es](https://www.amazon.es/s?k=17HS08-1004S) · [AliExpress](https://www.aliexpress.com/wholesale?SearchText=17HS08-1004S) | ☐ Candidat d’eix simple. Confirma si cal doble eix, parell i llargada. |

## Detall del material comú i partides pendents

| Peça | Quantitat | Preu i compra | Abans de comprar |
| --- | --- | --- | --- |
| Cargols M2 | **46** · 13 × M2×5, 23 × M2×6, 7 × M2×8, 3 × M2×20 | **Total pendent segons cap i lot.** [Catàleg Vis Express](https://www.vis-express.fr/4624-vis-metaux-chc-btr-filetage-total-classe-129-hexagonal-creux-din-912-din-912-iso-4762) · [Exemple M2×6 a partir de 2,22 € amb IVA per lot](https://www.vis-express.fr/vis-metaux-chc-btr-filetage-total-inox-a2-din-912-iso-4762/36711-vis-metaux-inox-a2-chc-btr-cle-de-15-hc15-filetage-total-m2x6.html) | ☐ Confirmar cap, material, rosca i unitats de cada lot. |
| Cargols M3 | **36** · 4 × M3×8, 8 × M3×10, 8 × M3×12, 2 × M3×14, 4 × M3×15, 4 × M3×16, 6 × M3×18 | **Total pendent segons cap i lot.** [Catàleg Vis Express](https://www.vis-express.fr/4624-vis-metaux-chc-btr-filetage-total-classe-129-hexagonal-creux-din-912-din-912-iso-4762) | ☐ Confirmar el cap i la disponibilitat de les llargades exactes. |
| Filament per a tapes i cobertes | 1 bobina | Prusament PETG Prusa Pro Green 1 kg. **26,39 € amb IVA** en la fitxa en euros configurada per a Suècia. [Prusa](https://www.prusa3d.com/product/prusament-petg-prusa-pro-green-1kg/?country=SE&currency=eur) | ☐ Comprovar diàmetre del filament i preu per al país d’entrega. |
| Baules, suports i base | 1 conjunt | **Demanar oferta de mecanització** si es volen fabricar en metall. [STEP v164](../4.Model/Dummy%20v164.step) | ☐ Definir material, acabat i toleràncies. La placa acrílica del CAD fa 50 × 50 × 5,8 mm. |
| Rodaments, eixos i passadors | Pendent | **Referències i preu pendents.** | ☐ Comptar les peces i confirmar els rodaments inclosos en cada reductor. |
| Pinça motoritzada | Opcional | **Referència i preu pendents.** [Maquinari de la pinça original](../1.Hardware/HandModule) | ☐ Definir l’eina final, l’actuador i el cablejat. |

L’electrònica es farà a mida. La font, els drivers, els codificadors i el cablejat s’especificaran quan estiguin fixats els motors. El brushless 2204 només correspon al [prototip cicloïdal opcional](Reductor-cicloidal.md).

Les quantitats de cargoleria i les referències mecàniques provenen del [muntatge v164](../4.Model/Dummy%20v164.step). Les relacions efectives són al [firmware](../2.Firmware/Core-STM32F4-fw/Robot/instances/dummy_robot.cpp#L22-L30).
