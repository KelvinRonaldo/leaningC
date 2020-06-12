#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int concatenacao(char *pStr1, int tamanhoStr1, char *pStr2, int tamanhoStr2, char *pResultado, int tamanhoResultado) {
	
	if(tamanhoStr1 + tamanhoStr2 <= tamanhoResultado){
		memcpy(pResultado, pStr1, tamanhoStr1);
		strncat(pResultado, pStr2, tamanhoStr2);
		// strncpy(&pResultado[tamanhaoStr1], pStr2, tamanhaoStr2);
		return 0;
	}else {
		return -1;
	}
}

int main(){
	
	char resultado[89];
	char str1[36];
	char str2[36];
	int tamanhaoStr1;
	int tamanhaoStr2;
	int tamanhoResultado;
	int validacao;
	
	memset(str1, 0, sizeof(str1));
	memset(str2, 0, sizeof(str2));
	memset(resultado, 0, sizeof(resultado));
	
	strcpy(str1, "12345");
	strcpy(str2, "6789");
	
	tamanhaoStr1 = strlen(str1);
	tamanhaoStr2 = strlen(str2);
	tamanhoResultado = sizeof(resultado);
	
	
	validacao = concatenacao(str1, tamanhaoStr1, str2, tamanhaoStr2, resultado, tamanhoResultado);
	
	if(validacao == 0){
		printf("Retorno: %d\nRESULTADO: %s", validacao, resultado);
	}else if(validacao == -1){
		printf("\nRetorno: %d", validacao);
	}
	
}






