-------PROVA C-------

QUESTÃO 1
R: d. Quarto elemento
------------------------------------------------

QUESTÃO 2
R:
int main(void){
	
	char string[12];
	int cont = 0;
	memset(string, 0, sizeof(string));
	memcpy(string, "Linguagem C", sizeof(string));
	
	printf("\n----FOR----\n");
	for(int i = 0; i < 10; i++){
		printf("%d - %s\n", i+1, string);		
	}
	
	printf("\n----WHILE----\n");
	
	while(cont < 10){
		printf("%d - %s\n", cont+1, string);	
		cont++;
	}
	cont = 0;
	printf("\n----DO WHILE----\n");
	
	do{
		printf("%d - %s\n", cont+1, string);
		cont++;
	}while(cont < 10);
	
	return 0;
}
------------------------------------------------

QUESTÃO 3
R: iNumero = 8 e iNumero = 10
------------------------------------------------

QUESTÃO 4
R:
int concatBuffer(char *buffer1, int lenBuffer1,
char *buffer2, int lenBuffer2,
char *bufferOut, int *lenBufferOut)
{
	memcpy(bufferOut, buffer1, lenBuffer1);
	strncat(bufferOut, buffer2, lenBuffer2);
	*lenBufferOut = strlen(bufferOut);
}
------------------------------------------------

QUESTÃO 5
R: 
int main(void){
	
	char buffer1[6], buffer2[5], bufferOut[20];
	int lenBuffer1, lenBuffer2, lenBufferOut;
	
	
	//LIMPANDO BUFFERS
	memset(buffer1, 0, sizeof(buffer1));
	memset(buffer2, 0, sizeof(buffer2));
	memset(bufferOut, 0, sizeof(bufferOut));

	//TRIBUINDO VALORES A ELES
	memcpy(buffer1, "12345", sizeof(buffer1));
	memcpy(buffer2, "6789", sizeof(buffer2));
	
	//COLOCANDO SEUS TAMANHOS EM VARIÁVEIS
	lenBuffer1 = strlen(buffer1);
	lenBuffer2 = strlen(buffer2);
		
	//CHAMADA DA FUNÇÃO QUE ONCATENA OS BUFFERS
	concatBuffer(buffer1, lenBuffer1, buffer2, lenBuffer2, bufferOut, &lenBufferOut);
	
	printf("Buffer1: %s Tamanho: %d \n", buffer1, lenBuffer1);
	printf("Buffer2: %s Tamanho: %d \n", buffer2, lenBuffer2);
	
	//RESULTADO DA CONCATENAÇÃO DOS BUFFERS
	printf("BufferOut: %s Tamanho: %d", bufferOut, lenBufferOut);	
}
------------------------------------------------

QUESTÃO 6
R: e. pti é igual a 10
------------------------------------------------

QUESTÃO 7
R:
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
