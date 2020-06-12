#include <stdio.h>
#include <stdlib.h>

/*
ATOF - CONVERTE UMA STRING EM UM DOUBLE SE VÁLIDO
atof(string)
string == "ola" → atof("ola") == 0.00
string == "148" → atof("148") == 148.00
*/

float toFloat(){
	
}

int main(void){
	
	char strNum[21];
	double num;
	
	printf("Digite um número: ");
	scanf("%s",  strNum);
	
	printf("String: '%s', String + 10: '%s'", strNum, strNum+10);;//IMPRIME $■ - NÃO É POSSIVEL SOMAR POIS AINDA É UMA STRING
	
	num = atof(strNum);
	printf("\nNúmero: %.2f, Número + 10: %.2f", num, num+10);
	
	return 0;
}