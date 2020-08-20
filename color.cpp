#include "color.h"

void construirColor(Color &color){
  setColorRojo(color, 255);
  setColorVerde(color, 255);
  setColorAzul(color, 255);
}

void construirColor(Color &color,int rojo,int verde,int azul){
  setColorRojo(color, rojo);
  setColorVerde(color, verde);
  setColorAzul(color, azul);

}

void destruirColor(Color &color){
}

void setColorRojo(Color &color,int rojo){
  color.rojo=rojo;
}

int getColorRojo(Color &color){
  return color.rojo;
}

void setColorVerde(Color &color,int verde){
  color.verde=verde;
}

int getColorVerde(Color &color){
  return color.verde;
}

void setColorAzul(Color &color,int azul){
  color.azul=azul;
}

int getColorAzul(Color &color){
  return color.azul;
}
