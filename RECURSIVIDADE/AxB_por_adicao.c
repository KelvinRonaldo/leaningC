#include <stdio.h>
#include <stdlib.h>

int multiplicacao(int a, int b, int aux){
	
	if(b <= 1){
		return a;
	}else{
		a += aux;
		multiplicacao(a, b-1, aux);
	}	
}

int main(void){
	
	int a;
	int b;
	
	printf("Digite o valor do 1º fator: ");
	scanf("%d", &a);
	
	printf("Digite o valor do 2º fator: ");
	scanf("%d", &b);
	
	int aux = a;
	
	int resultado = multiplicacao(a, b, aux);
	
	
	printf(" \t %d\n X\t %d\n______________\n = \t %d", a, b, resultado);
	return 0;
}