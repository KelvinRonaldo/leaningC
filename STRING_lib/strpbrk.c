#include <stdio.h>
#include <string.h>

int main(void){
	
	/*
		STRPBRK - RETORNA A PRIMEIRA OCORRENCIA DE UM CARACTER DO char2[](busca) EM char1[](str)
		strpbrk(char1, char2);
	*/
	
	char str[30];
	char busca[7];
	char * encontrado;
	memset(str, 0, sizeof(str));
	memset(busca, 0, sizeof(busca));
	
	strcpy(str, "Texto de Exemplo para busca");
	strcpy(busca, "aeiou");
	
	encontrado = strpbrk(str, busca);
	
	printf("%s\n", str);
	while(encontrado != NULL){
		printf("%c ", *encontrado);
		encontrado = strpbrk(encontrado+1, busca);
	}
	
	
	return 0;
}