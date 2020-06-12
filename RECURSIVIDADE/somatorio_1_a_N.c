#include <stdio.h>
#include <stdlib.h>

int somatorio(int n, int ini){
	
	if(n <= 1){
		return ini;
	}else{
		n += somatorio(n-1, ini);
	}
	
	return n;

}

int main(void){
	
	int n = 12;
	
	int result = somatorio(n, 1);
	
	printf("%d", result);
	
	return 0;
}