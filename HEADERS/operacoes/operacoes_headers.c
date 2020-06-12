#include <stdio.h>
#include <stdio.h>
#include "headers\somar.h"
#include "headers\subtrair.h"
#include "headers\multiplicar.h"
#include "headers\dividir.h"

int main(void){
	
	int a;
	int b;
	int soma;
	int subtracao;
	int multiplicacao;
	int divisao;
	
	printf("A: ");
	scanf("%d", &a);
	printf("B: ");
	scanf("%d", &b);
	
	soma = somar(&a, &b);	
	printf("%d + %d = %d", a, b, soma);
	
	subtracao = subtrair(&a, &b);	
	printf("\n%d - %d = %d", a, b, subtracao);

	multiplicacao = multiplicar(&a, &b);	
	printf("\n%d x %d = %d", a, b, multiplicacao);

	divisao = dividir(&a, &b);	
	printf("\n%d ÷ %d = %d", a, b, divisao);
	
	return 0;
}