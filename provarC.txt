-------PROVA C-------

QUESTÃO 1
R: d. Quarto elemento

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

QUESTÃO 3
R: 8 e 10

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

QUESTÃO 5
R: 
int main(void){
	
	char buffer1[6], buffer2[5], bufferOut[20];
	int lenBuffer1, lenBuffer2, lenBufferOut;
	
	memset(buffer1, 0, sizeof(buffer1));
	memset(buffer2, 0, sizeof(buffer2));
	memset(bufferOut, 0, sizeof(bufferOut));
	
	memcpy(buffer1, "12345", sizeof(buffer1));
	memcpy(buffer2, "6789", sizeof(buffer2));
	
	lenBuffer1 = strlen(buffer1);
	lenBuffer2 = strlen(buffer2);
		
	concatBuffer(buffer1, lenBuffer1, buffer2, lenBuffer2, bufferOut, &lenBufferOut);
	
	printf("Buffer1: %s Tamanho: %d \n", buffer1, lenBuffer1);
	printf("Buffer2: %s Tamanho: %d \n", buffer2, lenBuffer2);
	printf("BufferOut: %s Tamanho: %d", bufferOut, lenBufferOut);
	
}

QUESTÃO 6
R: e. pti é igual a 10

QUESTÃO 7
