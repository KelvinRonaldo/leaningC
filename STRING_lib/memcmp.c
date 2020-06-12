#include <stdio.h>
#include <string.h>

int main(void){
	
	/*
		MEMCMP* - COMPARA 2 BUFFERS, BYTE A BYTE POR SEU CÓDIGO ACSII, ATÉ ENCONTRAR UMA DIVERGENCIA OU
		ATÉ O BYTE ESPECIFICADO NO 3º PARÂMETRO
		
		----memcmp(buffer1, buffer2, nº de bytes à comparar);----
		(buffers não necessariamente não precisam ter o mesmo tamanho)
		
		-se todos os bytes em ambos buffers forem iguais, retorna 0
		buffer1 - ABCDE
		buffer2 - ABCDE
		retorno = 0;
		
		-quando encontra uma divergencia, retorna a diferença do seu código ASCII do primeiro buffer com o byte
		equivalente do segundo buffer
		-se o código ASCII do byte do primeiro buffer for menor 
		que o do segundo buffer, o retorno é negativo(buffer1<<<):	
		bytes	-	1 2	3 4 5 6
					↓ ↓ ↓ ↓ ↓ ↓
		buffer1	-	A B C D E F
		buffer2	-	A B C D G F
		(byte divergente = 5 (E e G))
		cod. ASCII de E = 69
		cod. ASCII de G = 71
		retorno = -2;
		
		-se o código ASCII do byte do primeiro buffer for maior 
		que o do segundo buffer, o retorno é positivo(buffer1>>>):	
		bytes	-	1 2	3 4 5 6
					↓ ↓ ↓ ↓ ↓ ↓
		buffer1	-	A B O D E F
		buffer2	-	A B C D E F
		(byte divergente = 3 (O e C))
		cod. ASCII de O = 79
		cod. ASCII de C = 67
		retorno = 12;
		
		*STRNCMP funciona praticamente da mesma forma, mas comprar string e não blocos de memoria(buffers)	
	*/
	
	char buffer1[20];
	char buffer2[20];	
	int resposta;
	
	memset(buffer1, 0, sizeof(buffer1));
	memset(buffer2, 0, sizeof(buffer2));
	printf("Digite o valor do buffer1: ");
	scanf("%s", &buffer1);
	printf("Digite o valor do buffer2: ");
	scanf("%s", &buffer2);	

	resposta = memcmp(buffer1, buffer2, sizeof(buffer2));
	
	if(resposta == 0){
		printf("buffer1: '%s' e buffer2: '%s' são iguais. \nRetorno(%d)", buffer1, buffer2, resposta);
	}else if(resposta < 0){
		printf("buffer1: '%s' é menor que buffer2: '%s'. \nRetorno(%d)", buffer1, buffer2, resposta);
	}else if(resposta > 0){
		printf("buffer1: '%s' é maior que buffer2: '%s'. \nRetorno(%d)", buffer1, buffer2, resposta);
	}
	return 0;
}