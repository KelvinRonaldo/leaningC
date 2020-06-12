#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	
	int colunas, linhas;
	int **matriz;
	
	linhas = 3;
	colunas = 5;

	srand(time NULL);
	
	matriz = (int**) calloc(linhas, sizeof(int*));
	for(int i = 0; i < linhas; i++){
		matriz[i] = (int*) calloc(colunas, sizeof(int));
		for(int j = 0; j < colunas; j++){
			matriz[i][j] = rand() % 16;
		}
	}
	
	for(int i = 0; i < linhas; i++){
		for(int j = 0; j < colunas; j++){
			if(j < colunas-1){
				printf("%d\t", matriz[i][j]);
			}else{
				printf("%d\n", matriz[i][j]);
			}
		}
	}
	
	return 0;
}