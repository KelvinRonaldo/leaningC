#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct MSG_TESTE{
	int codProcessamento;
	char valor[12];
	char data[10];
	char nsu[6];
	char modoEntrada[3];
	char codEstabelecimento[15];
	char codResposta[2];
	char msgHost[18];
} MSG_TESTE;

int preenchimento(char *msg, MSG_TESTE teste){
	
	int ioffset;
	char codProcessamento[6];

	ioffset = 0;
	
	memcpy (codProcessamento, &msg[ioffset], 6);
	teste.codProcessamento = atoi(codProcessamento);	
	ioffset += 6;	// 6
	
	memcpy (teste.valor, &msg[ioffset], 12);	
	ioffset += 12;	// 18
	
	memcpy (teste.data, &msg[ioffset], 10);	
	ioffset += 10;	// 28
	
	memcpy (teste.nsu, &msg[ioffset], 6);	
	ioffset += 6;	// 34
	
	memcpy (teste.modoEntrada, &msg[ioffset], 3);	
	ioffset += 3;	// 37
	
	memcpy (teste.codEstabelecimento, &msg[ioffset], 15);	
	ioffset += 15;	// 52
	
	memcpy (teste.codResposta, &msg[ioffset], 2);	
	ioffset += 2;	// 54
	
	memcpy (teste.msgHost, &msg[ioffset], 18);
	
	return 0;
}

int main(void){
	
	char msg[] = "002300000000031256051409453306452202207660076300013500TRANSACAO APROVADA";
	
	MSG_TESTE teste;
	
	preenchimento(msg, teste);
	
	return 0;
}