# TPFINALGRUPO1
En el presente repositorio se encuentra el trabajo practico final realizado por el grupo 1 del cuatrimestre 2 de 2020, para ser presentado en febrero. El proyecto es un juego basado en los niveles bajo el agua del famoso Super Mario Bros. Nuestro programa lleva de nombre Super Matias Bros.

## Compilacion
El repositorio incluye un archivo bash, Compile.sh, con el cual se puede compilar el codigo para la raspberry o para la pc. Al ejecutarlo preguntara por la plataforma en uso.

## Documentacion 
La documentacion se encuentra [aqui](https://github.com/damiansergi/TPFINALGRUPO1/tree/main/Documentacion), y se incluye como .PDF generado con doxygen. Una mejor alternativa para visualizarla es [TPFINAL_DOCUMENTACION](http://tpfinal.ddns.net:45565) ( [LINK_ALTERNATIVO](http://200.81.179.68:45565) , en caso de no funcionar no-ip).

## Edicion de niveles
Los niveles estan guardados dentro de la carpeta ./data. Se cargan de forma dinamica y deben respetar el nombre: "level[Numero del nivel].txt". Son archivos .csv (coma separated value, en nuestro caso se debe utilizar como separador el ';') convertidos a texto plano, y pueden ser modificados por una planilla de calculo o directamente desde un editor de texto. Para que funcionen correctamente los niveles deben tener un formato similar a este:
```
B;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;1;B
B;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;1;B
B;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;1;B
B;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;3;0;3;0;3;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;1;B
B;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;1;B
B;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;4;0;4;0;4;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;1;B
B;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;1;B
B;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;5;0;5;0;5;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;1;B
B;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;1;B
B;0;0;0;0;0;0;0;0;0;0;1;1;1;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;1;B
B;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;1;B
B;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;1;B
B;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;1;B
B;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;1;B
B;0;0;0;0;0;J;0;0;0;0;H;0;2;0;0;M;M;M;M;M;M;M;M;M;M;M;M;M;M;M;M;M;M;M;M;M;M;M;M;M;M;M;M;M;M;M;M;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;T;t;t;1;B
B;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;B
```
Como veran la primera y ultima columna estan contruidas con caracteres 'B', que reprentan los bordes del nivel. Ademas los niveles deben tener 16 filas. Todos los demas caracteres tienen su respectivo significado siguiendo la siguiente clave:
```
JUGADOR = 'J'
BORDE = 'B'
NADA = '0'
LADRILLO = '1'
ALGA = '2'
FASTCHEEPCHEEP = '3'
SLOWCHEEPCHEEP = '4'
PULPITO = '5'
MONEDA = 'M'
TOPPIPE = 'T'       (Tubo de entrada al siguiente nivel para el jugador, solo existe textura en posicion horizontal)
MIDDLEPIPE = 't'    (Cuerpo del tubo por si se quiere alargar)
MUSHROOM = 'H'
```
En el repositorio se encuentra un archivo de excel, Nivel.xmls, que tiene programadas reglas de formato para colorear las celdas en funcion del caracter colocado. Esto ayuda mucho en el diseño de los niveles. A continuacion una imagen del nivel mostrado anteriormente:
![alt text](https://i.imgur.com/hw2QFqo.png)

Notar que las tuberias no se distinguen entre si. Esto se debe a que excel no distingue entre mayusculas y minusculas.

## Integrantes del grupo
Gonzalo Linares

Damian Sergi

Alvaro Christiansen

Agustin Gullino


## Creditos
Modulo de audio (audio.c, audio.h). Creador original: https://github.com/jakebesworth/Simple-SDL2-Audio
