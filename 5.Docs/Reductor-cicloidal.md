# Reductor cicloïdal CycloidAcuratorNano

Traducció de la documentació de [Zhihui Peng](https://github.com/peng-zhihui/CycloidAcuratorNano).

[Vídeo del muntatge](https://www.bilibili.com/video/BV1iU4y1T7fv) · [Model STEP v21](https://github.com/peng-zhihui/CycloidAcuratorNano/tree/main/1.Mechanic) · [Imatge del projecte](https://github.com/peng-zhihui/CycloidAcuratorNano/tree/main/2.Docs)

## Disseny triat per al Dummy-Robot

He triat el reductor cicloïdal v21 de Zhihui Peng amb motor brushless 2204 per fer un conjunt compacte. El disseny integra el motor dins del reductor i evita la longitud addicional de la brida i del motor extern del prototip NEMA 17. Fer el reductor a partir del model original em permet provar la fabricació i el muntatge abans de decidir si pot substituir un reductor harmònic en una articulació del braç. L’electrònica de control es farà a mida.

- [Muntatge de SolidWorks](../4.Model/Cycloidal/cyloidal%20v21.SLDASM)
- [STEP v21 original per importar a SolidWorks](../4.Model/Cycloidal/Cycloid%20v21%20original.step)

El STEP és la còpia del model original de Zhihui Peng. Si SolidWorks demana referències externes en obrir el SLDASM, es pot obrir el STEP directament. El fabricant i el model exactes del 2204 original encara s’han de confirmar. També queda pendent validar l’encaix del motor candidat, el joc, la reducció efectiva i el parell abans d’assignar el conjunt a un eix.

## Components del disseny original

| Component | Quantitat |
| --- | --- |
| Motor brushless 2204 | 1 |
| Rodament 6705 | 2 |
| Rodament MR106 | 2 |
| Rodament MR74 | 14 |

## Motor brushless 2204

L’autor només especifica la mida 2204. El STEP v21 integra l’estator dins la carcassa i mostra quatre punts de fixació en un quadrat d’11 × 11 mm. La referència comercial exacta encara està pendent d’identificar.

El [SunnySky X2204 de 1480 KV](https://sunnyskyusa.com/products/sunnysky-x2204-brushless-motors) té una base amb orelles de muntatge. Per utilitzar-lo caldria comprovar les cotes del conjunt desmuntat o dissenyar una adaptació. La referència queda descartada com a compra directa per reproduir el STEP v21.

## Variant NEMA 17

El prototip de banc adapta el STEP v21 al StepperOnline 17HS16-2004D. La brida del motor i el portaexcèntrica són les dues peces modificades. La variant conserva els dos discs i l’excèntrica original d’1 mm. Prova primer l’encaix i el gir manual abans de provar amb el motor alimentat.
