#include <stdio.h>
#include <stdlib.h>

/*
OBJETIVO
ATRIBUIR UM MESMO VALOR AO TODAS AS 5 POSIÇÕES DE UM VETOR QUE ANTERIOMENTE ESTAVA 'VAZIO'
*/

int atualizaVetor(int num, int * numeros){
	int * pNum; //POTEIRO QUE APONTARÁ PARA AS POSIÇÕES DO VETOR
	
	for(int i = 0; i < 5; i++){
		pNum = &numeros[i]; //POTEIRO APOTA PARA A POSIÇÃO ATUALO DO VETOR
		*pNum = num; //ATRIBUI AO ENDEREÇO QUE O PONTEIRO ESTÁ APONTANDO, O VALOR DIGITADO PELO USUÁRIO
	}	
}

int main(void){
	
	int num, numeros[5];
	
	printf("Digite qualquer valor inteiro: ");
	scanf("%d", &num);
	
	for(int i = 0; i < 5; i++){
		printf("(INICIAL) Posição [%d] do vetor = %d\n", i, numeros[i]);
	}
	printf("\n");
	atualizaVetor(num, numeros);//CHAMADA DA FUNÇÃO QUE ATUALIZARÁ O VETOR CO O NUMERO DIGITADO PELO USUARIO
	
	for(int i = 0; i < 5; i++){
		printf("(FINAL) Posição [%d] do vetor = %d\n", i, numeros[i]);
	}
	return 0;
}
