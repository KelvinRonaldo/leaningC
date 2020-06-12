#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int maximo(int *num, int indice){
	int maior;
	
	if(indice < 0){
		return indice;
	}else if(num[indice] > num[maximo(num, indice-1)]){
		maior = num[indice];
	}
	
	// int maior = num[0];
	// for(int i = 0; i < 3; i++){
		// if(num[i] > maior){
			// maior = num[i];
		// }
	// }
	return maior;
}

int main(void){
	
	int num[3];
	int retorno;
	
	srand(time(NULL));
	
	for(int i = 0; i < 3; i++){
		num[i] = rand() % 20;
	}
	
	for(int i = 0; i < 3; i++){
		printf("%d\n", num[i]);
	}
	
	retorno = maximo(num, num[2]);
	printf("\nMaior: %d", retorno);
	
	return 0;
}