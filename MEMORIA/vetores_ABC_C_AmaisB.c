#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	
	int *A, *B, *C, N;
	
	N = 5;
	
	srand(time NULL);
	
	A = calloc(N, sizeof(int));
	B = calloc(N, sizeof(int));
	C = calloc(N, sizeof(int));
	
	for(int i = 0; i < N; i++){
		A[i] = rand() % 20;
		B[i] = rand() % 60;
		C[i] = A[i] + B[i];
	}
	
	for(int i = 0; i < N; i++){
		printf("A: %d \tB: %d \tC: %d\n", A[i], B[i], C[i]);
	}
	
	
	return 0;
}