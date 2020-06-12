#include <stdio.h>
#include <math.h>

/*
FUNÇÕES DE POTENCIAÇÃO
POW - calcula a potencia de uma base e seu expoente
→ pow(base, expoente)
Ex.: 2³ → pow(2, 3) resultado é == 8

SQRT - calcula a raíz quadrada de um número
→ sqrt(numero)
Ex.: raiz² de 81 → sqrt(81) resultado é == 9

CBRT - calcula a raíz cúbica de um número
→ cbrt(numero)
Ex.: raiz³ de 27 → cbrt(27) resultado é == 3

HYPOT - calcula a hipotenusa de um triagulo somando o quadrado dos cateto que foram passados
→ hypot(cateto A, cateto B)
Ex.: catA = 10, catB = 15
hypot(catA, catB) resultado é == 18.027756
*/
float calculoPotencia(float * base, float * expoente){
	
	float resultado;
	
	printf("\n____________________\nCálculo de Potência:\n");
	printf("Qual a base? ");
	scanf("%f", &*base);
	printf("E o expoente? ");
	scanf("%f", &*expoente);
	
	resultado = pow(*base, *expoente);
	
	return resultado;
}
float calculoRaizQuadrada(float * numQuadrado){
	
	float resultado;
	
	printf("\n_________________________\nCálculo de Raíz Quadrada:\n");
	printf("Informe o número? ");
	scanf("%f", &*numQuadrado);
	
	resultado = sqrt(*numQuadrado);
	
	return resultado;
}
float calculoRaizCubica(float * numCubico){
	
	float resultado;
	
	printf("\n_______________________\nCálculo de Raíz Cúbica:\n");
	printf("Informe o número? ");
	scanf("%f", &*numCubico);
	
	resultado = cbrt(*numCubico);
	
	return resultado;
}
float calculoHipotenusa(float * catA, float * catB){
	
	float resultado;
	
	printf("\n____________________\nCálculo de Hipotenusa:\n");
	printf("Valor do cateto A: ");
	scanf("%f", &*catA);
	printf("Valor do cateto B: ");
	scanf("%f", &*catB);
	
	resultado = hypot(*catA, *catB);
	
	return resultado;
}
int main(void){
	
	float resultPow;	
	float base;
	float expoente;
	
	float resultSqrt;	
	float numQuadrado;
	
	float resultCbrt;	
	float numCubico;
	
	float resultHypot;	
	float catA;
	float catB;
	
	resultPow = calculoPotencia(&base, &expoente);
	printf("%.2f^%.2f = %.2f\n", base, expoente, resultPow);
	
	resultSqrt = calculoRaizQuadrada(&numQuadrado);
	printf("Raíz Quadrada de %.2f = %.2f\n", numQuadrado, resultSqrt);
	
	resultCbrt = calculoRaizCubica(&numCubico);
	printf("Raíz Cúbica de %.2f = %.2f\n", numCubico, resultCbrt);
	
	resultHypot = calculoHipotenusa(&catA, &catB);
	printf("%.2f² = %.2f² + %.2f²\n", resultHypot, catA, catB);
		
	return 0;
}