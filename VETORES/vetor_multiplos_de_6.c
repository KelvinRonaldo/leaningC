#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
OBJETIVO
Popular vetor e depois mostrar todos seus números que são divisíveis pór 6
DIVISÍVEL POR 6 == número cujo resultado da divisão com 6 é um número exato
*/
int main(void){
	
	int numeros[8];
	
	for(int i = 0; i < 8; i++){
		printf("Insira o %dº valor do vetor: ", i+1);
		scanf("%d", &numeros[i]);
	}
	
	for(int i = 0; i < 8; i++){
		printf("\nÍndice [%d]: %d", i, numeros[i]);
	}
	
	printf("\nMúltiplos de 6:\n");
	for(int i = 0; i < 8; i++){
		if(numeros[i] % 6 == 0){
			/* SE O RESTO DA DIVISÃO DO NÚMERO DO VETOR COM 6 FOR 0, O RESULTADO É EXATO, ENTÃO
			É MÚLTIPLO DE 6*/
			printf("Índice [%d]: %d\n", i, numeros[i]);
		}
	}
	
	
	
	return 0;
}