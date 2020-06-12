#include <stdio.h>
#include <math.h>//necessário para funções matemáticas(cos)

#define PI 3.14159265

/*
COS - CALCULA O COSSENO É UM NÚMERO EM GRAUS
*/

int main (void){
	
  double num;
  double resultado;
  
  num = 60;
  
  resultado = cos ( num * PI / 180.0 );
  
  printf ("The cosine of %.3f degrees is %.3f.\n", num, resultado);
  
  return 0;
}