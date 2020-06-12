#include <stdio.h>
#include <stdlib.h>

// FUNÇÃO QUE RETORNA UM ANGULO CONVERTIDO PARA RADIANO
float conversao(int ang){
	const float PI = 3.14;
	float rad = (ang * PI)/180;
	return rad;
}

int main(void){
	float rad  = 0;
	int ang;
	
	ang = 60;
	
	
	rad = conversao(ang);
	printf("%f", rad);
}