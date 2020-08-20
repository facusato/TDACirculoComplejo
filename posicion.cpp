#include "posicion.h"


void construirPosicion(Posicion &posicion){
  setPosX(posicion,0);
  setPosY(posicion,0);
}

void construirPosicion(Posicion &posicion,int posX,int posY){
  setPosX(posicion,posX);
  setPosY(posicion,posY);
}

void destruirPosicion(Posicion &posicion){
}

void setPosX(Posicion &posicion,int posX){
  posicion.posX=posX;
}

int getPosX(Posicion &posicion){
  return posicion.posX;
}

void setPosY(Posicion &posicion,int posY){
  posicion.posY=posY;
}

int getPosY(Posicion &posicion){
  return posicion.posY;
}
