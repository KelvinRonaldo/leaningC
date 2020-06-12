#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int concatBuffer(char *buffer1, int lenBuffer1,
char *buffer2, int lenBuffer2,
char *bufferOut, int *lenBufferOut)
{
	memcpy(bufferOut, buffer1, lenBuffer1);
	strncat(bufferOut, buffer2, lenBuffer2);
	*lenBufferOut = strlen(bufferOut);
}

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