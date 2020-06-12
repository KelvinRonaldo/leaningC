#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int aleatorio(){
	
	int num = rand() % 20;	
	return num;
}

struct ponto{
	int x;
	int y;
};

int main(void){
	
	struct ponto pA, pB;
	double result;
	
	pA.x = aleatorio();
	pA.y = aleatorio();
	
	printf("Informe o valor da coordenada X do ponto: ");
	scanf("%d", &pB.x);
	printf("Informe o valor da coordenada Y do ponto: ");
	scanf("%d", &pB.y);
	
	result = sqrt(pow(pB.x - pA.x, 2) + pow(pB.y - pA.y, 2));
	
	printf("%f", result);
	
	return 0;
}

