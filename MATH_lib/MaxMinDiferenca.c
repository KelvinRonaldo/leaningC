#include <stdio.h>
#include <math.h>

/*
FDIM - RETORNA A DIFERENCA ENTRE 2 NUMEROS SE O PRIMEIRO FOR MAIOR QUE O SEGUNDO (x > y), 
SENÃO (x < y), RETORNA 0
Ex.:
→ fdim(x, y) 
Ex.: x == 3, y == 1 → fdim(x|3|, y|1|) → |3-1| == 2 então x > y
retorno é == 2

x == 2, y == 5 - fdim(x|2|, y|5|) → |2-5| == -3 então x < y
retorno é == 0

FMAX - RETORNA O MAIOR DENTRE 2 VALORES
→ fmax(x, y)
Ex.: x == 5, y == 6 - fmax(x|5|, y|6|) retorno é == 6

FMIN - RETORNA O MAIOR DENTRE 2 VALORES
→ fmin(x, y)
Ex.: x == 4, y == 37 - fmax(x|4|, y|37|) retorno é == 37
*/

float diferenca(float * x, float * y){
	
	float resultado;
	
	printf("\n______________________\nDIFERENÇA ENTRE X E Y:\n");
	printf("X: ");
	scanf("%f", &*x);
	printf("Y: ");
	scanf("%f", &*y);
	
	resultado = fdim(*x, *y);
	
	return resultado;
}
float maior(float * x, float * y){
	
	float resultado;
	
	printf("\n__________________\nMAIOR ENTRE X E Y:\n");
	printf("X: ");
	scanf("%f", &*x);
	printf("Y: ");
	scanf("%f", &*y);
	
	resultado = fmax(*x, *y);
	
	return resultado;
}
float menor(float * x, float * y){
	
	float resultado;
	
	printf("\n__________________\nMENOR ENTRE X E Y:\n");
	printf("X: ");
	scanf("%f", &*x);
	printf("Y: ");
	scanf("%f", &*y);
	
	resultado = fmin(*x, *y);
	
	return resultado;
}

int main(void){
	
	float x;
	float y;
	float diferencaXY;
	float maxXY;
	float minXY;
	
	diferencaXY = diferenca(&x, &y);	
	printf("X = %.2f \nY = %.2f\nX - Y = %.2f\n", x, y, diferencaXY);
	
	maxXY = maior(&x, &y);	
	printf("X = %.2f \nY = %.2f\nMaior é %.2f\n", x, y, maxXY);
	
	minXY = menor(&x, &y);	
	printf("X = %.2f \nY = %.2f\nMenor é %.2f\n", x, y, minXY);
	
	return 0;
}