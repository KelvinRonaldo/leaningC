#include <stdio.h>

/*
OBJETIVO
Popular um vetor, depois ler um número. Se esta número estiver presente no vetor,
printa a sua posição no vetor na tela, se não, mostra um mensagem de erro.
*/

int main(void){
	
	int numeros[15], num, posicao;
	
	//Loop para popular o vetor
	for(int i = 0; i < 5; i++){
		printf("Insira o %dº valor do vetor: ", i+1);
		scanf("%d", &numeros[i]);
	}
	
	//Lendo valor a ser encontrado no vetor
	printf("Digite um número inteiro a ser encontrado no vetor: ");
	scanf("%d", &num);
	
	for(int i = 0; i < 5; i++){
		if(num == numeros[i]){
			posicao = i;
			/*
			num → pode ser qualquer numero digitado pelo usuário
			numeros == [1, 2, 3, 4, 5];
			
			--- i == 0 ---
			num(3) == numeros[0](1)
			--- i == 1 ---
			num(3) == numeros[1](2)
			--- i == 2 ---
			num(3) == numeros[2](3)
			posicao = i == 2
			posicao == 2;
			--- i == 3 ---
			num(3) == numeros[3](4)
			--- i == 4 ---
			num(3) == numeros[4](5)
			*/
		}
	}
	
	if(posicao != 0){	
		printf("Numero %d esta na posição %d do vetor.", num, posicao);
	}else{
		printf("Não encontrado!");
	}
	
	return 0;
}