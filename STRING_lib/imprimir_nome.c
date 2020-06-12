#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	
	char nome[10];
	/*
	EM TODA VARIAVEL STRING(char[]) É NECESSÁRIO LIMPAR O SEU ESPAÇO DE MEMORIA(BUFFER)
	ANTES DE ATRIBUIR VALORES A ELAS
	*/
	memset(nome, 0, sizeof(nome));
	
	printf("Escreva apenas seu primeiro nome: ");
	scanf("%s", &nome);
	
	printf("\nNOME: %s", nome);
	
	return 0;
}