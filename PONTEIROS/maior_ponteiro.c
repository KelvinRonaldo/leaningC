#include <stdio.h>
#include <string.h>

/*
OBJETIVO
VERIFICAR QUAL ENDEREÇO ENTRE PONTEIROS TEM O MAIOR VALOR	
 */

int main(void){

	int num1, num2, *pNum1, *pNum2;
	char enderecoMaior[6], enderecoMenor[6];
	memset(enderecoMaior, 6, sizeof(enderecoMaior));
	memset(enderecoMenor, 6, sizeof(enderecoMenor));
	
	num1 = 10;
	num2 = 20;
	pNum1 = &num1;
	pNum2 = &num2;
	
	if(pNum1 > pNum2){
		strncpy(enderecoMaior, "pNum1", 6);
		strncpy(enderecoMenor, "pNum2", 6);
		printf("\nEndereco de %s que é %d é o maior. \nEndereco de %s é %d", enderecoMaior, pNum1, enderecoMenor, pNum2);
	}else{
		strncpy(enderecoMaior, "pNum2", 6);
		strncpy(enderecoMenor, "pNum1", 6);
		printf("\nEndereco de %s que é %d é o maior. \nEndereco de %s é %d", enderecoMaior, pNum2, enderecoMenor, pNum1);
	}
	
	return 0;
}