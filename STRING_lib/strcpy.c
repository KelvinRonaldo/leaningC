#include <stdio.h>
#include <string.h>

int main(void){
	
	/*
		STRCPY - COPIA UMA STRING(OU VARIAVEL STRING) EM OUTRA
		-----diferente do strncpy que copia os CARACTERES de uma string-----
		
		caso feito  copia de uma string em uma variavel populada
		o seu valor original é substituido pelo novo valor
	*/
	
	char str[] = "Olá, tudo bem?";
	char str2[20];
	
	printf("\nANTES DE COPIAR O str NO str2: \nstr: %s \nstr2: %s\n", str, str2);	
	
	strcpy (str2, str);
	
	printf("\nDEPOIS DE COPIAR O str NO str2: \nstr = %s \nstr2 = %s\n", str, str2);
	
	strcpy (str, "Tudo Ótimo");	
	
	printf("\nDEPOIS DE COPIAR OUTRA STRING EM str: \nstr = %s\n", str);
	
	return 0;
}