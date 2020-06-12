#include <stdio.h>
#include <stdlib.h>

/*
OBJETIVO
SOMAR E SUBTRAIR 2 NUMEROS E MOSTRAR RESULTADOS POR PONTEIROS
*/

int efetuarCalculos(int num1, int num2, int *pSoma, int *pSubtracao){
	*pSoma = num1 + num2; //ATRIBUI À VARIÁVEL QUE O PONTEIRO APONTA A SOMA DOS 2 VALORES
	*pSubtracao = num1 - num2; //ATRIBUI À VARIÁVEL QUE O PONTEIRO APONTA A DIFERENÇA DOS 2 VALORES
}

int main(void){

	int num1, num2;
	int soma, subtracao;
	
	printf("Digite um 1º valor: ");
	scanf("%d", &num1);
	
	printf("Digite um 2º valor: ");
	scanf("%d", &num2);
	
	/*
	CHAMANDO FUNÇÃO QUE EFETUARÁ OS CALCULOS ENVIANDO OS NUMEROS A SEREM CALCULADOR QUE OS
	ENDEREÇOS DAS VARIÁVEIS QUE RECEBERAM OS RESULTADOS DOS CÁLCULOS*/
	efetuarCalculos(num1, num2, &soma, &subtracao);
	
	printf("Soma entre %d e %d: %d \n", num1, num2, soma);
	printf("Subtração entre %d e %d: %d \n", num1, num2, subtracao);
	

	return 0;
}