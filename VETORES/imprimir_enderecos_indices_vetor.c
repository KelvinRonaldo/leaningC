#include <stdio.h>
#include <string.h>
/*
OBJETIVO
Mostrar o endereço de memória de cada posição de um array
*/
int main(void){
	
	int numeros[5];
	
	for(int i = 0; i < 5; i++){
		printf("Endereco da posicao %d do vetor: %d\n", i, &numeros[i]);
		// & - CARACTÉR QUE APONTA PARA O ENDEREÇO DE MEMÓRIADE UMA VARIÁVEL
	}
	
	return 0;
	
}