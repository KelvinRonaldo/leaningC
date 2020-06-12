#include <stdio.h>
#include <stdlib.h>

// int fatorial(int n) {
	// int i, fat = 1;

	// for (i=n; i>=1; i--) {
		// fat *= i;
	// }
	// return fat;
// }
int fatorial(int number) {
	if (number <= 1){
		return 1;
	}else{
		return number * fatorial(number - 1);
    }
}

int main(void)
{
	int number;
    int result;

	printf("Informe um numero: \n");
	scanf("%d", &number);

	result = fatorial(number);
	printf("Fatorial de %d é %d \n", number, result);
	
	return 0;
}