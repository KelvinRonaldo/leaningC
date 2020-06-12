#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

typedef struct produto{
	int cod;
	char nome[30];
	float preco;
} Produto;

typedef struct nomes{
	char nome[30];
} Nomes;

int main(void) {
	
	srand(time(NULL));
	
	Nomes nomes[1][6];
	
	strcpy(nomes[0][0].nome, "Coxinha");
	strcpy(nomes[0][1].nome, "Kibe");
	strcpy(nomes[0][2].nome, "Risoli");
	strcpy(nomes[0][3].nome, "Beirute");
	strcpy(nomes[0][4].nome, "Torta");
	strcpy(nomes[0][5].nome, "Salada");	
	
	
	int numProdutos = 6;
	int colunas = 3;
	int num;
	int qtd;
	float preco;
	char pedido[30];
	float total;
	int indice[6];
	
	Produto produto[6];
	
	// POPULA  O ARRAY
	for(int i = 0; i < 6; i++){
		indice[i] = rand() % 6;
	}
	
	// VERIFICA SE O VALOR DE ALGUMA POSÇÃO DO ARRAY SE REPETE
	for(int i = 1; i < 6; i++){//COMEÇA PELA 2ª POSIÇÃO DO ARRAY
		for(int j = 0; j < i; j++){//COMEÇA DA 1ª POSIÇÃO E VAI ATÉ A DE i FAZENDO UMA VERIFICAÇÃO COM TODOS OS NÚMEROS ANTERIORES A i
			if(indice[j] == indice[i]){//SE ALGUMA DAS POSIÇÕES ANTERIORES(j) FOR IGUAL A i,
				indice[i] = rand() % 6;// O VALOR DE i É REALOCADO 
				i--;//E O LOOP RETORNA 1 POSIÇÃO PRA QUE ESSE NÚMERO NOVO SEJA VERIFICADO NOVAMENTE
			}
		}
	}
	
	for(int i = 0; i < numProdutos; i++){
		produto[i].cod = i+1;		
		
		preco = 1;
		while(preco < 1.99 && preco >=1){
			preco = rand() % 20;
			produto[i].preco = preco;
		}			
		strcpy(produto[i].nome, nomes[0][indice[i]].nome);
	}
	
	printf("\n\n");
	
	printf("%s\t", "Número");
	printf("%s\t\t", "Nome");
	printf("%s\n", "Preço");
	
	for(int i = 0; i < numProdutos; i++){
		printf("%d\t", produto[i].cod);
		printf("%s\t\t", produto[i].nome);
		printf("R$%.2f\n", produto[i].preco);
	}
	
	printf("\n\n");
	printf("Escolha um produto a partir de seu número: ");
	scanf("%d", &num);
	
	printf("Quantos?: ");
	scanf("%d", &qtd);
	
	
	for(int i = 0; i < numProdutos; i++){
		if(num == produto[i].cod){
			total = (produto[i].preco)*qtd;
			strcpy(pedido, produto[i].nome);
		}
	}
	
	printf("\n");
	
	printf("Seu Pedido:\n%d %s(s)\n", qtd, pedido);
	printf("Valor Total R$%.2f", total);
	

}