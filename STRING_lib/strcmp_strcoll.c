#include <stdio.h>
#include <string.h>

int main(void){
	/*
		STRCMP* - COMPARA 2 STRINGS(VARIAVEIS STRING TAMBEM), 
		BYTE A BYTE POR SEU CÓDIGO ACSII, ATÉ ENCONTRAR UMA DIVERGENCIA OU
		ATÉ O CARÁCTER NULO("\0") DO FINAL DE UMA string C		
		----strcmp(string1, string2);----
		
		-se todos os bytes em ambas string forem iguais, retorna 0
		string1 - ABCDE
		string2 - ABCDE
		retorno = 0;
		
		-quando encontra uma divergencia, retorna a diferença do seu código ASCII do primeiro string com o byte
		equivalente do segundo string
		-se o código ASCII do byte do primeiro string for menor 
		que o do segundo string, o retorno é negativo(string1<<<):	
		bytes	-	1 2	3 4 5 6
					↓ ↓ ↓ ↓ ↓ ↓
		string1	-	A B C D E F
		string2	-	A B C D G F
		(byte divergente = 5 (E e G))
		cod. ASCII de E = 69
		cod. ASCII de G = 71
		retorno = -2;
		
		-se o código ASCII do byte do primeiro string for maior 
		que o do segundo string, o retorno é positivo(string1>>>):	
		bytes	-	1 2	3 4 5 6
					↓ ↓ ↓ ↓ ↓ ↓
		string1	-	A B O D E F
		string2	-	A B C D E F
		(byte divergente = 3 (O e C))
		cod. ASCII de O = 79
		cod. ASCII de C = 67
		retorno = 12;
		
		-caso as string tenham tamanhos diferente, o byte nulo de uma string sera 
		comparado com o byte equivalente da outra string
		(string1>>>)
		bytes	-	1 2	3 4 5 6
					↓ ↓ ↓ ↓ ↓ ↓
		string1	-	A B C D E F
		string2	-	A B C D E 
		(byte divergente = 6 (F e 0))
		cod. ASCII de F = 51
		retorno = 0;
		
		(string1<<<)
		bytes	-	1 2	3 4 5 6
					↓ ↓ ↓ ↓ ↓ ↓
		string1	-	A B C D E 
		string2	-	A B C D E F
		(byte divergente = 6 (0 e F))
		cod. ASCII de F = -51
		retorno = 0;
		
		*SRTCOLL funciona praticamente da mesma forma
		
	*/
	char string1[20];
	char string2[20];	
	int resposta;
	
	memset(string1, 0, sizeof(string1));
	memset(string2, 0, sizeof(string2));
	printf("Digite o valor da string1: ");
	scanf("%s", &string1);
	printf("Digite o valor da string2: ");
	scanf("%s", &string2);	

	resposta = strcmp(string1, string2);
	
	if(resposta == 0){
		printf("string1: '%s' e string2: '%s' são iguais. \nRetorno: (%d)", string1, string2, resposta);
	}else if(resposta < 0){
		printf("string1: '%s' é menor que string2: '%s'. \nRetorno: (%d)", string1, string2, resposta);
	}else if(resposta > 0){
		printf("string1: '%s' é maior que string2: '%s'. \nRetorno: (%d)", string1, string2, resposta);
	}
	return 0;
	
	return 0;
}