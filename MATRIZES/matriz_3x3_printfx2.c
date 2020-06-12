#include <stdio.h>
#include <stdlib.h>

/*
OBJETIVO
Criar matriz de 3x3 e exibi-la com todos seus números
multiplicados por 2
*/
int main(void){
	
	int matriz[3][3];
	int nums;
	
	for(int i = 0; i < 3; i++){//LOOP DE LINHAS
		for(int j = 0; j < 3; j++){//LOOP DE COLUNAS
			printf("Digite o %dº número da %dª linha da matriz: ", j+1, i+1);
			scanf("%d", &nums);
			matriz[i][j] = nums;
			/*
			EXEMPLO:
			nums → pode ser qualquer numero inteiro colocado pelo usuario
			
			MATRIZ M
				x0	x1	x2 ←LINHAS
			x0	.	.	.	
			x1	.	.	.
			x2	.	.	.
			↑ COLUNAS
			
			______LINHA 1_______ ________LINHA 2________ ________LINHA 3________
			--i == 0, j == 0--	|	--i == 1, j == 0--	|	--i == 2, j == 0--	| COLUNA 1
			M 0x0 = nums(1)		|	M 1x0 = nums(4)		|	M 2x0 = nums(7)		|	
			
			--i == 0, j == 1--	|	--i == 1, j == 1--	|	--i == 2, j == 1--	| COLUNA 2
			M 0x1 = nums(2)		|	M 1x1 = nums(5)		|	M 2x1 = nums(8)		|	
			
			--i == 0, j == 2--	|	--i == 1, j == 2--	|	--i == 2, j == 2--	| COLUNA 3
			M 0x2 = nums(3)		|	M 1x2 = nums(6)		|	M 2x2 = nums(9)		|	
			____________________|_______________________|_______________________|
			
			MATRIZ M
				x0	x1	x2 ←LINHAS
			x0	1	2	3	
			x1	4	5	6
			x2	7	8	9
			↑ COLUNAS
			*/
		}
		printf("\n");
	}
	
	printf("\n");
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			if(j < 2){//ENQUANTO NÃO MOSTROU A ULTIMA COLUNA IMPRIME OS VALORES LADO A LADO
				printf("%d \t", matriz[i][j]*2);
			}else{//AO CHEGAR NA ULTIMA COLUNA (indice 2) MOSTRA O VALOR, E DEPOIS QUEBRA LINHA
				printf("%d \n", matriz[i][j]*2);
			}
			/*
				x0		x1		x2
			x0	1\t		2\t		3\n
			x1	4\t		5\t		6\n
			x2	7\t		8\t		9\n
			*/
		}
	}
	
	return 0;
}