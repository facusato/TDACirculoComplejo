#ifndef POSICION_H_INCLUDED

typedef struct{
 int posX;
 int posY;
}Posicion;
#define POSICION_H_INCLUDED

/**PRE: La instancia tda posicion no debe estar creada.
   POST: Se crea una instancia de posicion con los sgtes valores:
    posX=0 y posY=0*/
void construirPosicion(Posicion &posicion);
/**PRE: La instancia tda posicion debe estar creada.
   POST: Se crea una instancia de posicion con los valores asignados:*/
void construirPosicion(Posicion &posicion,int posX,int posY);
/**PRE: La instancia tda posicion debe estar creada.
   POST: Se elimina la instancia tda posicion:*/
void destruirPosicion(Posicion &posicion);
/**PRE: La instancia tda posicion debe estar creada.
   POST: se carga en el campo posicion.posX con el dato enviado*/
void setPosX(Posicion &posicion,int posX);
/**PRE: La instancia tda posicion debe estar creada.
   POST: se obtiene el valor del campo posicion.posX*/
int getPosX(Posicion &posicion);
/**PRE: La instancia tda posicion debe estar creada.
   POST: se carga en el campo posicion.posy con el dato enviado*/
void setPosY(Posicion &posicion,int posY);
/**PRE: La instancia tda posicion debe estar creada.
   POST: se obtiene el valor del campo posicion.posY*/
int getPosY(Posicion &posicion);





#endif // POSICION_H_INCLUDED
