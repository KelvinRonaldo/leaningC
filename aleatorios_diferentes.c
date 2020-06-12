#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>


/*
	GERAR NUMEROS ALEATORIOS ÚNICOS(QUE NÃO IRÃO SE REPETIR)
*/
int size = 10;

int generateRandomNumbers(int *output){
    
    if(size > 10) size = 10;

	int indice[size];
	srand(time(NULL));
	
	for(int i = 0; i < size; i++){
		indice[i] = rand() % size;
	}
	
	for(int i = 1; i < size; i++){
		for(int j = 0; j < i; j++){
			if(indice[j] == indice[i]){
				indice[i] = rand() % size;
				i--;
			}
		}
	}

	for(int i = 0; i < size; i++){
        output[i] = indice[i];
    }

}


int main(void){
	
    int arr[10];

    generateRandomNumbers(arr);
	
	for(int i = 0; i < size; i++){
		printf("%d ", arr[i]);
	}
	
	return 0;
}