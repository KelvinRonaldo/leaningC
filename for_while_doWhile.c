#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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