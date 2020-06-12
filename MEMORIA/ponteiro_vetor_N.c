#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int N;
	int *pV;
	
	
	printf("Digite um número positivo: ");
	scanf("%d", &N);
	
	pV = (int*) calloc(N, sizeof(int));
	
	if(N > 0){
		for(int i = 0; i < N; i++){
			pV[i] = i;
		}
		
		for(int i = 0; i < N; i++){
			printf("%d\n", pV[i]);
		}
	}else{
		pV = NULL;
		printf("%d\n", pV);
	}
		
	return 0;
}