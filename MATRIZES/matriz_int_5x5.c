#include <stdio.h>
#include <stdlib.h>

/*
OBJETIVO
Criar uma matriz de 5x5

*/
int main(void){
	
	int matriz[5][5];
	
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			printf("Digite o %dº da %dª linha da matriz: ", j+1, i+1);
			scanf("%d", &matriz[i][j]);
			/*EXEMPLO:
			nums → pode ser qualquer numero inteiro colocado pelo usuario
			
			MATRIZ M
				x0	x1	x2	x3	x4 ←LINHAS|i|
			x0	.	.	.	.	.
			x1	.	.	.	.	.
			x2	.	.	.	.	.
			x3	.	.	.	.	.
			x4	.	.	.	.	.
			↑ COLUNAS|j|
			
			______LINHA 1_______ ________LINHA 2________ ________LINHA 3________ _________LINHA 4_______ ________LINHA 5________ 
			--i == 0, j == 0--	|	--i == 1, j == 0--	|	--i == 2, j == 0--	|	--i == 3, j == 0--	|	--i == 4, j == 0--	| COLUNA 1
			M 0x0 = nums|1|		|	M 1x0 = nums|6|		|	M 2x0 = nums|11|	|	M 0x0 = nums|16|	|	M 1x0 = nums|21|	|	
			
			--i == 0, j == 1--	|	--i == 1, j == 1--	|	--i == 2, j == 1--	|	--i == 3, j == 1--	|	--i == 4, j == 1--	| COLUNA 2
			M 0x1 = nums|2|		|	M 1x1 = nums|7|		|	M 2x1 = nums|12|	|	M 0x1 = nums|17|	|	M 1x1 = nums|22|	|	
	        
			--i == 0, j == 2--	|	--i == 1, j == 2--	|	--i == 2, j == 2--	|	--i == 3, j == 2--	|	--i == 4, j == 2--	| COLUNA 3
			M 0x2 = nums|3|		|	M 1x2 = nums|8|		|	M 2x2 = nums|13|	|	M 0x2 = nums(18|	|	M 1x2 = nums|23|	|	
			
			--i == 0, j == 3--	|	--i == 1, j == 3--	|	--i == 2, j == 3--	|	--i == 3, j == 3--	|	--i == 4, j == 3--	| COLUNA 4
			M 0x3 = nums|4|		|	M 1x3 = nums|9|		|	M 2x3 = nums|14|	|	M 0x3 = nums|19|	|	M 1x3 = nums|24|	|	
			
			--i == 0, j == 4--	|	--i == 1, j == 4--	|	--i == 2, j == 4--	|	--i == 3, j == 4--	|	--i == 4, j == 4--	| COLUNA 5
			M 0x4 = nums|5|		|	M 1x4 = nums|10|	|	M 2x4 = nums|15|	|	M 0x4 = nums|20|	|	M 1x4 = nums|25|	|	
			____________________|_______________________|_______________________|_______________________|_______________________|
			
			MATRIZ M
				x0	x1	x2 	x3	x4 ←LINHAS|i|
			x0	1	2	3	4	5
			x1	6	7	8	9	10
			x2	11	12	13	14	15	
			x3	16	17	18	19	20
			x4	21	22	23	24	25
			↑ COLUNAS|j|
			*/
		}
		printf("\n");
	}
	
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			if(j < 4){//ENQUANTO NÃO MOSTROU A ULTIMA COLUNA IMPRIME OS VALORES LADO A LADO
				printf("%d \t", matriz[i][j]);
			}else{//AO CHEGAR NA ULTIMA COLUNA (indice 4) MOSTRA O VALOR, E DEPOIS QUEBRA LINHA
				printf("%d \n", matriz[i][j]);
			}
			/*
				 x0		 x1		 x2		 x4		 x5 ←LINHAS|i|
			x0	 1\t	 2\t	 3\t	 4\t   	 5\n
			x1	 6\t	 7\t	 8\t     9\t   	10\n
			x2	11\t	12\t	13\t    14\t   	15\n
			x3	16\t	17\t	18\t    19\t   	20\n
			x4	21\t	22\t	23\t	24\t	25\n
			↑ COLUNAS|j|
			*/
		}
	}
	
	return 0;
}