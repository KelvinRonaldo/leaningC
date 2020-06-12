#include <stdio.h>
#include <string.h>

/*
OBJETIVO
MOSTRAR O ENDEREÇOS DAS POSIÇÕES DE UM ARRAY
& - caractér coringa que aponta para o endereço de memomória de uma variável
*/

int main(void){
	
	int numeros[5];
	
	for(int i = 0; i < 5; i++){
		printf("Endereco da posicao %d do vetor: %d\n", i, &numeros[i]);
	}
	
	return 0;
	
}