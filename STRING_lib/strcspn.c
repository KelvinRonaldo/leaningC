#include <stdio.h>
#include <string.h>

int main(void){	
	
	/*
		STRCSPN - PROCURA O PRIMEIRO CARACTÉR COINCIDENTE ENTRA UM char1[] CHAVE EM UM char2[](STRING);
		strcspn(char, char2);
	*/
	
	char str[20];
	char busca[4];
	int i;
	
	memset(str, 0, sizeof(str));
	strcpy(str, "Procure aqui");
	
	memset(busca, 0, sizeof(busca));
	strcpy(busca, "abc");
	
	i = strcspn(str, busca);
	
	printf ("Um item da busca('%s') esta na posição [%d] de str('%s').\n", busca, i, str);
	
	return 0;
}