#include <stdio.h>
#include <string.h>

int main(void){
	
	/*STRNCAT - CONCATENA CARACTERES DE STRINGS(VARIAVEIS STRING TAMBEM) COM
	LIMITE DETERMINADO NO 3º PARÂMETRO
	NA VIRÁVEL SETADA
	
	-----diferente de strcat que concatena a STRING inteira-----
	*/
	
	char str[8];
	memset(str, 0, sizeof(str));
	strncpy(str, "string ", sizeof(str));
	//INICIO DA VARIÁVEL - 'string '
	
	char str2[7];
	memset(str2, 0, sizeof(str2));
	strncpy(str2, "comum.", sizeof(str2));
	// str2 == "comum"
	strncat(str, str2, 2);
	/*		↑	  ↑	   ↑ numero maximo de caracteres que serão concatenados no destino
			↑	  ↑string que ira concatenar no destino
			↑string que recebe a concatenação (destino)
	*/
	printf("%s", str);
	//SAÍDA - str + str2 == 'string co'
	
	
	return 0;
}