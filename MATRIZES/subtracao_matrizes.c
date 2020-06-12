#include <stdio.h>
#include <stdlib.h>
/*
OBJETIVO
Criar 2 matrizes e subtraí-las
*/
int main(void){
	int matrizA[3][3]; //MA
	int matrizB[3][3]; //MB
	int matrizSubtracaoMaior[3][3]; //MSM
	int matrizSubtracao[3][3]; //MS
	
	//INCREMENTANDO VALORES A MATRIZ MA
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			printf("Digite o %dº valor da linha %dª da matriz A: ", j+1, i+1);
			scanf("%d", &matrizA[i][j]);
		}
		printf("\n");
	}

	//INCREMENTANDO VALORES A MATRIZ MB
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			printf("Digite o %dº valor da linha %dª da matriz B: ", j+1, i+1);
			scanf("%d", &matrizB[i][j]);
		}
		printf("\n");
	}
	
	/*INCREMENTANDO VALORES A MATRIZ MSM QUE RECEBE APENAS VALORES POSITIVOS
	SUBTRAI APENAS DO MAIOR PRO MENOR*/
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			if(matrizA[i][j] > matrizB[i][j]){
				matrizSubtracaoMaior[i][j] = matrizA[i][j] - matrizB[i][j];
			}else{
				matrizSubtracaoMaior[i][j] = matrizB[i][j] - matrizA[i][j];
			}
		}
	}
	
	/*INCREMENTANDO VALORES A MATRIZ MS QUE RECEBE A SUBTRAÇÃO DE MA E MB*/
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			matrizSubtracao[i][j] = matrizA[i][j] - matrizB[i][j];
		}
	}
	printf("\nMATRIZ A\n");
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			if(j != 2){
				printf("%d\t", matrizA[i][j]);
			}else{
				printf("%d\n", matrizA[i][j]);
			}
		}
	}
	
	printf("\nMATRIZ B\n");
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			if(j != 2){
				printf("%d\t", matrizB[i][j]);
			}else{
				printf("%d\n", matrizB[i][j]);
			}
		}
	}
	
	printf("\nMATRIZES SUBTRAÍDAS DO MAIOR NÚMERO\n");
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			if(j != 2){
				printf("%d\t", matrizSubtracaoMaior[i][j]);
			}else{
				printf("%d\n", matrizSubtracaoMaior[i][j]);
			}
		}
	}
	
	printf("\nMATRIZES SUBTRAÍDAS\n");
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			if(j != 2){
				printf("%d\t", matrizSubtracao[i][j]);
			}else{
				printf("%d\n", matrizSubtracao[i][j]);
			}
		}
	}
}
	