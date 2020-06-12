#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int matrizA[2][2]; //MA
	int matrizB[2][2]; //MB
	int matrizSoma[2][2]; //MS
	
	//INCREMENTANDO VALORES A MATRIZ MA
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			printf("Digite o %dº valor da linha %dª da matriz A: ", j+1, i+1);
			scanf("%d", &matrizA[i][j]);
		}
		printf("\n");
	}
	
	//INCREMENTANDO VALORES A MATRIZ MB
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			printf("Digite o %dº valor da linha %dª da matriz B: ", j+1, i+1);
			scanf("%d", &matrizB[i][j]);
		}
		printf("\n");
	}
	
	
	//INCREMENTANDO VALORES A MATRIZ MS
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			matrizSoma[i][j] = matrizA[i][j] + matrizB[i][j];
			/*
			____________LINHA 1___________________________LINHA 2______________	[...]	
			---i == 0, j == 0---			|	---i == 1, j == 0---
			MS 0x0|6| = MA 0x0|1|+MB 0x0|5|	|	MS 1x0|10| = MA 1x0|3|+MB 1x0|7|
			
			---i == 0, j == 1---			|	---i == 1, j == 1---
			MS 0x1|8| = MA 0x1|2|+MB 0x1|6|	|	MS 1x1|12| = MA 1x1|4|+MB 1x1|8|
			___________________________________________________________________
			
			MA		|	MB		|	MS		
			x0	x1	|	x0	x1	|	x0	x1	
		x0	1	2	|x0	5	6	|x0	6	8	
		x1	3	4	|x1	7	8	|x1	10	12	
			*/
		}
	}
	printf("\nMATRIZ A\n");
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			if(j != 1){
				printf("%d\t", matrizA[i][j]);
			}else{
				printf("%d\n", matrizA[i][j]);
			}
		}
	}
	
	printf("\nMATRIZ B\n");
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			if(j != 1){
				printf("%d\t", matrizB[i][j]);
			}else{
				printf("%d\n", matrizB[i][j]);
			}
		}
	}
	
	printf("\nMATRIZES SOMADAS\n");
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			if(j != 1){
				printf("%d\t", matrizSoma[i][j]);
			}else{
				printf("%d\n", matrizSoma[i][j]);
			}
		}
	}
	return 0;
}