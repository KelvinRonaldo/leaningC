#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
OBEJTIVO
Converte graus Celsius(°C) em graus Fahrenheit(°F) e Kelvin(K)
*/

int main(void){
	
	int celsius;
    int fahrenheit;
    int kelvin;
	
	printf("Digite um valor de temperatura em graus Celsius(°C): ");
	scanf("%d", &celsius);
	
	fahrenheit = ((9 * celsius) + 160) / 5;
	kelvin = celsius + 273;
	
	printf("Graus Celsius: %dºC\nGraus Fahrenheit: %dºF\nGrau Kelvin: %d", celsius, fahrenheit, kelvin);
	
	
	
	return 0;
}