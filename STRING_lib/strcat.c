#include <stdio.h>
#include <string.h>

int main(void){
	
	/*	STRCAT - CONCATENA STRINGS(VARIAVEIS STRING TAMBEM) INCORPORANDO-AS
		NA VARIAVEL DESTINO
		
	-----diferente de strncat que concatena CARACTERES de uma string-----
	*/
	char str[50];
	memset(str, 0, sizeof(str));
	strncpy(str, "estas ", sizeof(str));
	//INICIO DA VARIÁVEL - 'estas '
	
	strcat(str, "strings ");
	strcat(str, "estão ");
	strcat(str, "concatenadas.");
	/*		↑		↑ string(ou variavel string) que sera concatenada no destino	
			↑string que recebe a concatenação (destino)
	*/
	
	printf("%s", str);
	//SAÍDA = 'estas strings estão concatenadas.'
	
	
}