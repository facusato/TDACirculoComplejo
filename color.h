#ifndef COLOR_H_INCLUDED

typedef struct{
  int rojo;
  int verde;
  int azul;


}Color;

#define COLOR_H_INCLUDED
//Constructor de instancias de Color

/**PRE: Ingresar solo la referencia del color.
   POST: Se crea una instancia de Color con los sgtes valores:
    Rojo = 255, Verde = 255, Azul = 255*/
void construirColor(Color &color);
/**PRE: Ingresar solo la referencia del color.
   POST: Se crea una instancia de Color con los valores ingresados*/
void construirColor(Color &color,int rojo,int verde,int azul);
/**PRE: Ingresar la referencia a la instancia Color que se quiere destruir.
   POST: Se elimina la instancia Color*/
void destruirColor(Color &color);
/**PRE: La instancia tda color debe estar creada.
   POST: se carga en el campo color.rojo con el dato enviado*/
void setColorRojo(Color &color,int rojo);
/**PRE: La instancia tda color debe estar creada.
   POST: se obtiene el valor del campo color.rojo*/
int getColorRojo(Color &color);
/**PRE: La instancia tda color debe estar creada.
   POST: se carga en el campo color.verde con el dato enviado*/
void setColorVerde(Color &color,int verde);
/**PRE: La instancia tda color debe estar creada.
   POST: se obtiene el valor del campo color.rojo*/
int getColorVerde(Color &color);
/**PRE: La instancia tda color debe estar creada.
   POST: se carga en el campo color.azul con el dato enviado*/
void setColorAzul(Color &color,int azul);
/**PRE: La instancia tda color debe estar creada.
   POST: se obtiene el valor del campo color.azul*/
int getColorAzul(Color &color);






#endif // COLOR_H_INCLUDED
