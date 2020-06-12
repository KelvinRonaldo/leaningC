#include <stdio.h>
#include <stdlib.h>

/*
OBJETIVOS:
Fazer as linhas de uma matriz se tornarem as colunas de outra matriz 
*/

int main(void){
	int matrizC[2][3]; //MATRIZ DE 2x3
	int matrizCt[3][2]; //MATRIZ REVERSA DE 3x2
	
	// INCREMENTA VALORES À PRIMEIRA MATRIZ(2X3)
	for(int i = 0; i < 2; i++){//LOOP PARA LINHAS
		for(int j = 0; j < 3; j++){ // LOOP PARA COLUNAS
			printf("Digite o %dº valor da linha %dª da matriz: ", j+1, i+1);
			scanf("%d", &matrizC[i][j]);
		}
		printf("\n");
	}
	
	//PASSA OS VALORES DE MATRIZ 2X3 PARA A MATRIZ(3X2)
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 3; j++){
			matrizCt[j][i] = matrizC[i][j];
			/*			
				M1			|	M2
				x0	x1	x2	|	x0	x1
			x0	1	2	3	|x0	.	.
			x1	4	5	6	|x1	.	.
							|x2	.	.
						
			________LINHA 1__________________LINHA 2_________		
			---i == 0, j == 0---	|	---i == 1, j == 0---
			M2 0x0 = M1 0x0|1|		|	M2 0x1 = M1 1x0|4|
			
			---i == 0, j == 1---	|	---i == 1, j == 1---
			M2 1x0 = M1 0x1|2|		|	M2 1x1 = M1 1x1|5|
			
			---i == 0, j == 2---	|	---i == 1, j == 2---
			M2 2x0 = M1 0x2|3|		|	M2 2x1 = M1 1x2|6|
			_________________________________________________
			
			M1			|	M2
			x0	x1	x2	|	x0	x1
		x0	1	2	3	|x0	1	4
		x1	4	5	6	|x1	2	5
						|x2	3	6
			*/
		}
	}
	
	//EXIBE MATRIZ 1
	printf("\nMATRIZ C\n");
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 3; j++){
			if(j != 2){
				printf("%d\t", matrizC[i][j]);
			}else{
				printf("%d\n", matrizC[i][j]);
			}
		}
	}
	
	//EXIBE MATRIZ 2
	printf("\nMATRIZ CT\n");
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 2; j++){
			if(j != 1){
				printf("%d\t", matrizCt[i][j]);
			}else{
				printf("%d\n", matrizCt[i][j]);
			}
		}
	}
}