#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int tamanho[5];
	
	tamanho[0] = sizeof(int);
	tamanho[1] = sizeof(double);
	tamanho[2] = sizeof(float);
	tamanho[3] = sizeof(char);
	
	for(int i = 0; i < 4; i++){
		printf("%d\n", tamanho[i]);		
	}
}