// 002300 000000031256 0514094533 064522 022 076600763000135 00 TRANSACAO APROVADA
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct MSG_TESTE{
	int codProcessamento;
	/*
	char valor[12];
	char data[10];
	char nsu[6];
	char modoEntrada[3];
	char codEstabelecimento[15];
	char codResposta[2];
	char msgHost[18];*/
	char valor[13];
	char data[11];
	char nsu[7];
	char modoEntrada[4];
	char codEstabelecimento[16];
	char codResposta[3];
	char msgHost[19];
} MSG_TESTE;

MSG_TESTE preenchimento(char *msg, MSG_TESTE teste){
	
	int ioffset;
	char codProcessamento[6];

	ioffset = 0;
	memcpy (codProcessamento, &msg[ioffset], 6);
	teste.codProcessamento = atoi(codProcessamento);
	
	ioffset += 6;	// 6
	memcpy (teste.valor, &msg[ioffset], sizeof(teste.valor));
	
	ioffset += 12;	// 18
	memcpy (teste.data, &msg[ioffset], sizeof(teste.data));
	
	ioffset += 10;	// 28
	memcpy (teste.nsu, &msg[ioffset], sizeof(teste.nsu));
	
	ioffset += 6;	// 34
	memcpy (teste.modoEntrada, &msg[ioffset], sizeof(teste.modoEntrada));
	
	ioffset += 3;	// 37
	memcpy (teste.codEstabelecimento, &msg[ioffset], sizeof(teste.codEstabelecimento));
	
	ioffset += 15;	// 52
	memcpy (teste.codResposta, &msg[ioffset], sizeof(teste.codResposta));
	
	ioffset += 2;	// 54
	memcpy (teste.msgHost, &msg[ioffset], sizeof(teste.msgHost));
	
	/*
	ioffset += 6;	// 6
	memcpy (teste.valor, &msg[ioffset], sizeof(teste.valor));
	
	ioffset += 12;	// 18
	memcpy (teste.data, &msg[ioffset], sizeof(teste.data));
	
	ioffset += 10;	// 28
	memcpy (teste.nsu, &msg[ioffset], sizeof(teste.nsu));
	
	ioffset += 6;	// 34
	memcpy (teste.modoEntrada, &msg[ioffset], sizeof(teste.modoEntrada));
	
	ioffset += 3;	// 37
	memcpy (teste.codEstabelecimento, &msg[ioffset], sizeof(teste.codEstabelecimento));
	
	ioffset += 15;	// 52
	memcpy (teste.codResposta, &msg[ioffset], sizeof(teste.codResposta));
	
	ioffset += 2;	// 54
	memcpy (teste.msgHost, &msg[ioffset], sizeof(teste.msgHost));*/
	
	return teste;
}

int main(void){
	
	char msg[] = "111111222222222222333333333344444455566666666666666677TRANSACAO APROVADA";
	
	MSG_TESTE teste;
	
	teste = preenchimento(msg, teste);
	
	printf("COD. PROCESS.: %d\n", teste.codProcessamento);
	printf("VALOR: %s\n", teste.valor);
	printf("DATA: %s\n", teste.data);
	printf("NSU: %s\n", teste.nsu);
	printf("MODO ENTRADA: %s\n", teste.modoEntrada);
	printf("COD. ESTAB.: %s\n", teste.codEstabelecimento);
	printf("COD. RESP.: %s\n", teste.codResposta);
	printf("MSG. HOST: %s\n", teste.msgHost);
	
	return 0;
}