#include <stdio.h>
#include <stdlib.h>
/*
OBJETIVO
Criar popular um vetor,  e motrar quais numeros são par
e quis numeros são ímpar
*/
int main(void){
	
	int numeros[6];
	
	for(int i = 0; i < 6; i++){
		printf("Insira o %dº do vetor: ", i+1);
		scanf("%d", &numeros[i]);
	}
	
	for(int i = 0; i < 6; i++){
		if(numeros[i] % 2 == 0){
			//TODO NÚMERO CUJO O RESTO DA DIVISÃO COM 2 É 0, É UM NÚMERO PAR
			printf("%d é par.\n", numeros[i]);
		}else{
			//TODO NÚMERO CUJO O RESTO DA DIVISÃO COM 2 NÃO É 0, É UM NÚMERO ÍMPAR
			printf("%d é ímpar.\n", numeros[i]);
		}
	}
	return 0;
}