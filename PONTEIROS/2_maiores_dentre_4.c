#include <stdio.h>
#include <stdlib.h>

/*
OBJETIVO
ENCONTRAR OS DOIS MAIORES NUMEROS EM UM VETOR DE 4 POSIÇÕES UTILIZANDO PONTEIROS

 */

/*FUNCAO QUE PROCURA OS MAIORES VALORES DO VETOR, RECEBENDO OS ENDEREÇOS DAS VARIÁVEIS EM PONTEIROS
QUE APONTAM PARA OS ENDEREÇOS ENVIADOS NA CHAMADA DA FUNÇAO*/
int localizarMaiores(int numeros[4], int * pMaior, int * pSegundoMaior){
	*pMaior = numeros[0];
	*pSegundoMaior = 0;
	
	printf("maior %d \n segundo maior %d \n", *pMaior, *pSegundoMaior);
	
	for(int i = 0; i < 4; i++){
		if(numeros[i] > *pMaior){
			*pMaior = numeros[i];
		}
		for(int i = 0; i < 4; i++){
			if(numeros[i] >= *pSegundoMaior && numeros[i] < *pMaior){
				*pSegundoMaior = numeros[i];
			}
		}
	}	
}

int main(void){
	

	int maior; //VARIAVEL QUE GUARDARÁ MAIOR VALOR
	int segundoMaior; //VARIAVEL QUE GUARDARÁ O SEGUNDO MAIOR VALOR
	int numeros[4]; //VETOR
	
	for(int i = 0; i < 4; i++){
		//POPULANDO VETOR COM VALORES DIGITADOS PELO USUÁRIO
		printf("Digite um %dº valor: ", i+1);
		scanf("%d", &numeros[i]);
	}

	/*
	CHAMANDO FUNCAO QUE ENCONTRAR OS VALORES DESEJADOS, ENVIANDO OS ENDEREÇOS DE
	MEMORIA DAS VARIÁVEIS, (vetores não precisam do caracter '&', é enviado seu endereço nativamente)
	*/
	localizarMaiores(numeros, &maior, &segundoMaior);	
	printf("O maior do vetor é %d. \nO segundo maior é %d.", maior, segundoMaior);
	return 0;
}
