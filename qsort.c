#include <stdio.h> 
#include <stdlib.h>

/*
QSORT - ORGANIZA OS ELEMENTOS DE UM VETOR, FAZENDO A COMPARAÇÃO DE TAMANHO ENTRE OS ELEMENTOS UM POR UM
Parâmetros
1º - vetor
2º - nº de elementos no vetor
3º - tamanho do tipo dos elementos do vetor
4º - função que faz a comparação entre os elemento
→ qsort(1º, 2º, 3º, 4º)
- se o vetor for de numeros(int), organiza pelo próprio valor o número
// se for uma array de char(string), organiza pelo código ASCII de cada char;// ← OU TALVEZ NÃO
*/

// VETOR
int nums[] = {50, 20, 89, 54, 32, 54, 8, 2};

// FUNÇÃO QUE FAZ A COMPARAÇÃO ENTRE OS ELEMENTO
int comparaInt (const void * a, const void * b){
  return ( *(int*)a - *(int*)b );
}
int main (){
  qsort (nums, 8, sizeof(int), comparaInt);
  
  for (int i = 0; i < 6; i++){
	  if(i != 7){
		printf ("%d\t",nums[i]);
	  }else{
		printf ("%d\n",nums[i]);
	  }
  }
  return 0;
}