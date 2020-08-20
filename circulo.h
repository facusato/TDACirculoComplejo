#include "posicion.h"
#include "color.h"

#ifndef CIRCULO_H_INCLUDED
typedef struct{
 float radio;
 Posicion posicion;
 Color color;
}Circulo;
#define CIRCULO_H_INCLUDED



/**PRE: Ingresar solo la referencia del circulo.
   POST: Se crea una instancia de Circulo con los siguientes valores:
  Radio = 1, colores = 255, pos(0,0)*/
void construirCirculo(Circulo &circulo);

/**PRE: Ingresar el valor del radio, una instancia de color y una instancia con la posicion
   POST: Se crea una instancia de Circulo.*/
void construirCirculo(Circulo &circulo, float radio, int rojo, int verde, int azul, int posX, int posY);


/**PRE: Ingresar la referencia a la instancia Circulo que se quiere destruir.
   POST: Se elimina la instancia Circulo*/
void destruirCirculo(Circulo &circulo);

/**PRE: Ingresar el valor del nuevo radio y la instancia del Circulo elegida
   POST: Reemplaza el radio por el nuevo valor*/
void setRadio(Circulo &circulo, float radio);

/**PRE: Ingresar la instancia del circulo elegido
   POST: Se devuelve el valor del radio.*/
float getRadio(Circulo &circulo);

/**PRE: Ingresar la instancia del circulo elegido
  POST: Se reemplaza el valor de la posicion en eje X*/
void setPosX(Circulo &circulo, int posX);

/**PRE: Ingresar la instancia del circulo elegido
   POST: Se devuelve el valor de la posicion en eje X*/
int getPosX(Circulo &circulo);

/**PRE: Ingresar la instancia del circulo elegido
   POST: Se reemplaza el valor de la posicion en eje Y*/
void setPosY(Circulo &circulo, int posY);

/**PRE: Ingresar la instancia del circulo elegido
//POS: Se devuelve el valor de la posicion en eje Y*/
int getPosY(Circulo &circulo);

/**PRE: Ingresar el valor del nuevo rojo y la instancia del Circulo elegida
   POST: Reemplaza el rojo por el nuevo valor*/
void setRojo (Circulo &circulo, int nvRojo);

/**PRE: Ingresar la instancia del circulo elegido
  POST: Se devuelve el valor del color rojo*/
int getColorRojo(Circulo &circulo);

/**PRE: Ingresar el valor del nuevo verde y la instancia del Circulo elegida
   POST: Reemplaza el verde por el nuevo valor*/
void setVerde (Circulo &circulo, int nvVerde);

/**PRE: Ingresar la instancia del circulo elegido
  POST: Se devuelve el valor del color verde*/
int getColorVerde(Circulo &circulo);

/**PRE: Ingresar el valor del nuevo azul y la instancia del Circulo elegida
   POST: Reemplaza el azul por el nuevo valor*/
void setAzul (Circulo &circulo, int nvAzul);

/**PRE: Ingresar la instancia del circulo elegido
  POST: Se devuelve el valor del color azul*/
int getColorAzul(Circulo &circulo);





#endif // CIRCULO_H_INCLUDED
