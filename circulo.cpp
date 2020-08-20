#include "circulo.h"
#include "posicion.h"
#include "color.h"
#include <iostream>

using namespace std;

void construirCirculo(Circulo &circulo){
  setRadio(circulo,1);
  construirColor(circulo.color);
  construirPosicion(circulo.posicion);

}


void construirCirculo(Circulo &circulo, float radio, int rojo, int verde, int azul, int posX, int posY){
  setRadio(circulo,radio);
  construirColor(circulo.color,rojo,verde,azul);
  construirPosicion(circulo.posicion,posX,posY);
}



void destruirCirculo(Circulo &circulo){
  destruirColor(circulo.color);
  destruirPosicion(circulo.posicion);
}

void setRadio(Circulo &circulo, float radio){
   if(radio>0){
    circulo.radio=radio;
   }
   else{
    cout<<"Dato incorrecto vuelva a ingresarlo"<<endl;
   }
}

float getRadio(Circulo &circulo){
  return circulo.radio;
}

void setPosX(Circulo &circulo, int posX){
  setPosX(circulo.posicion,posX);
}

int getPosX(Circulo &circulo){
  return getPosX(circulo.posicion);
}

void setPosY(Circulo &circulo, int posY){
  setPosY(circulo.posicion,posY);
}

int getPosY(Circulo &circulo){
  return getPosY(circulo.posicion);
}

void setRojo (Circulo &circulo, int rojo){
  setColorRojo(circulo.color,rojo);
}

int getColorRojo(Circulo &circulo){
  return getColorRojo(circulo.color);
}

void setVerde (Circulo &circulo, int verde){
  setColorVerde(circulo.color,verde);
}
int getColorVerde(Circulo &circulo){
  return getColorVerde(circulo.color);
}

void setAzul (Circulo &circulo, int azul){
  setColorAzul(circulo.color,azul);
}

int getColorAzul(Circulo &circulo){
  return getColorAzul(circulo.color);
}


