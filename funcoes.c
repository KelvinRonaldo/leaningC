#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	
	/*
		http://www.cplusplus.com/reference/
	 *	MEMSET = DEFINE O CONTEÚDO DA VARIÁVEL SEGUNDO O TAMANHO ESPECIFICADO
	 
	 *	MEMCOPY = COPIA UM BLOCO DE MEMÓRIA(BUFFER) EM OUTRO
	 *	MEMCOPY(BUFFER DESTINO, CONTEUDO, NUMERO MAXIMO DE CARACTERES)
	 
	 *	MEMCMP = FAZ UMA COMPARAÇÃO ENTRE 2 STRING (CHAR[])	 
	 *
	 *	ATOI = CONVERTE UMA STRING EM UM INT QUANDO VÁLIDO
	 *
	 *	STRNCPY == MEMCPY, PORÉM ADICIONA \0 NO FINAL DA VARIÁVEL
	 *	STRNCAT = CONCATENA VARIÁVEIS
	 *
	/
	
	/*************************************************************/	
	
	//CONCATENAR VARIAVEIS, COPIAR VALOR PARA OUTRA VARIÁVEL
	//E MOSTRAR O TAMANHO
	/*
	char hello[6];
	memset(hello, 0, sizeof(hello));	
	memcpy(hello, "helLo", 5);
	
	char world[6];
	memset(world, 0, sizeof(world));	
	memcpy(world, "hello", 5);
	
	char resultado[11];
	memset(resultado, 0, sizeof(resultado));
	
	strncat(hello, world, 10);

	memcpy(resultado, hello, 10);

	printf("resultado = %s \ntamanho %d", resultado, strlen(resultado));
	*/
	
	/*************************************************************/
	
	//COMPARAR VALORES DE 2 VARIÁVEIS
	/*
	char stringUm[6];
	memset(stringUm, 0, sizeof(stringUm));	
	memcpy(stringUm, "helLo", 5);
	
	char stringDois[6];
	memset(stringDois, 0, sizeof(stringDois));	
	memcpy(stringDois, "hello", 5);
	int num = memcmp(stringUm, stringDois, sizeof(stringDois));
	
	if(num == 0){
		printf("%s e %s são iguais (%d)", stringUm, stringDois, num);
	}else if(num < 0){
		printf("%s é maior que %s (%d)", stringUm, stringDois, num);
	}else if(num > 0){
		printf("%s é menor que %s (%d)", stringUm, stringDois, num);
	}
	*/
	
	/*************************************************************/
	
	//CONVERTER STRING EM INTEGER
	/*
	char numString[4];
	memset(numString, 0, sizeof(numString));
	
	printf("Digite um numero: \n");
	scanf("%s", &numString);
	
	int num = atoi (numString);
	
	if(num != 0){
		printf("%d convertido em int", num);
	}else{
		printf("Caractér digitado é inválido para conversão em int");
	}
	*/
	
	/*************************************************************/
	
	char hello[19];
	memset(hello, 0, sizeof(hello));
	strncpy(hello, "Uma string simples", 18);
	char * letraS;

	letraS = strchr(hello, 'm');
	// printf("%d", strchr(hello, 's'));
	printf("\nletraS --> %d \n%d", letraS, *letraS);
	
	while(letraS != NULL){
		printf("\nEncontrado m na posicao %d", letraS);	
		letraS = strchr(letraS+1, 'm');
	}
	

	return 0;
}