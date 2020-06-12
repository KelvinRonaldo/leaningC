#include <stdio.h>
#include <stdlib.h>

/*
ATOI - CONVERTE UMA STRING EM UM INT SE VÁLIDO
atof(string)
string == "ola" → atof("ola") == 0
string == "57" → atof("57") == 57

***TAMBÉM HÁ
atol

*/

float toFloat(){
	
}

int main(void){
	
	char strNum[21];
	int num;
	
	printf("Digite um número: ");
	scanf("%s",  strNum);
	
	printf("String: '%s', String + 10: '%s'", strNum, strNum+10);//IMPRIME $■ - NÃO É POSSIVEL SOMAR POIS AINDA É UMA STRING
	
	num = atoi(strNum);
	printf("\nNúmero: %d, Número + 10: %d", num, num+10);
	
	return 0;
}