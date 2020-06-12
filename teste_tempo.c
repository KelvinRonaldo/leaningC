#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void){
	
	int minutos = 1600;
	int divisor = 60;
	int horas = minutos % 60;
	
	printf("%f", horas);
	
	return 0;
}