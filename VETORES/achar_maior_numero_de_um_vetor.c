#include <stdio.h>
/*
OBJETIVO
criar e popular veros, depois achar seu maior valor
*/
int main(void){
	
	int numeros[3], maior = 0;
	
	for(int i = 0; i < 3; i++){
		printf("Insira o %dº valor do vetor: ", i+1);
		scanf("%d", &numeros[i]);
	}
	
	maior = numeros[0];
	
	for(int i = 0; i < 3; i++){
		if(numeros[i] > maior){
			maior = numeros[i];
		}
		/*
		Ex:
		numeros = {2, 1, 3}
		maior = numeros[0] == 2
		maior == 2;
		
		---i == 0 --- 
		numeros[0](2) É MAIOR QUE maior(2) ? NÃO
		---i == 1 ---
		numeros[1](1) É MAIOR QUE maior(2) ? NÃO
		---i == 2 ---
		numeros[2](3) É MAIOR QUE maior(2) ? SIM
		maior = numeros[2] == 3
		maior = 3
		
		*/
	}
	
	printf("O maior número do vetor é: %d", maior);
	
	return 0;
}