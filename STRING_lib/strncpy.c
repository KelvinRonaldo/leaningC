#include <stdio.h>
#include <string.h>

int main(void){
	
	/*
		STRNCPY - COPIA OS CARACTERES DE UMA STRING(OU VARIAVEL STRING) EM OUTRA
		-----diferente do strcpy que copia a STRING-----
		
		caso feito  copia de uma string em uma variavel populada
		o seu valor original é substituido pelo novo valor
	*/
	char str[] = "Olá, como vai?";
	char str2[20];
	
	printf("\nANTES DE COPIAR O str NO str2: \nstr: %s \nstr2: %s\n", str, str2);	
	
	strncpy(str2, str, sizeof(str2));
	
	printf("\nDEPOIS DE COPIAR O str NO str2: \nstr = %s \nstr2 = %s\n", str, str2);
	
	strncpy(str, "Muito bem.", sizeof(str));	
	
	printf("\nDEPOIS DE COPIAR OUTRA STRING EM str: \nstr = %s\n", str);
	
	return 0;
}