#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int N;
	int *pV;
	
	do{
		printf("Digite um número positivo: ");
		scanf("%d", &N);
	}while(N < 0);
	
	pV = (int*) malloc(N);
	
	for(int i = 0; i < N; i++){
		pV[i] = i;
	}
	
	for(int i = 0; i < N; i++){
		printf("%d\n", pV[i]);
	}	
	
	return 0;
}