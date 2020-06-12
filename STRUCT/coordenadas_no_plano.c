#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct ponto{
	int x;
	int y;
};

int main(void){
	
	struct ponto p;
	
	double result;
	
	printf("Escreva a coordenada do ponto X: ");
	scanf("%d", &p.x);
	printf("Escreva a coordenada do ponto Y: ");
	scanf("%d", &p.y);
	
	result = sqrt(pow(p.x - 0, 2) + pow(p.y - 0, 2));
	
	// puts("%f\n", result);
	printf("result: %f \npow x: %f \npow y: %f \nx: %d \ny: %d", result, pow(p.x - 0, 2), pow(p.y - 0, 2), p.x, p.y);
	
	return 0;	
}