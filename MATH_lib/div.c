#include <stdio.h>
#include <stdlib.h>

/*
DIV - EFETUA A DIVISÃO ENTRE 2 NUMEROS INTEIROS E RETORNA UMA ESTRUTURA div_t COM O QUOCIENTE (quot) E O RESTO(rem)
→ div(dividendo, divisor) 
Ex.: 
div_t divisao; ← variavel do tipo da estrutura da divisão
divisao = div(10, 3);
divisao.quot == 3, divisao.rem == 1
*/

int main(void){
	
	div_t divisao;
	int quociente;
	int resto;
	int dividendo;
	int divisor;
	
	printf("Você quer dividir(dividendo): ");
	scanf("%d", &dividendo);
	
	printf("Por(divisor): ");
	scanf("%d", &divisor);
	
	divisao = div(dividendo, divisor);
	quociente = divisao.quot;
	resto = divisao.rem;
	
	
	printf("%d ÷ %d\n", dividendo, divisor);
	printf("Resultado: %d\nResto: %d", quociente, resto);
	
	return 0;
}