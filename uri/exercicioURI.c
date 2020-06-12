#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct produto{
	int cod;
	char nome[30];
	float preco;
} Produto;

int main(void) {
	
	int linhas = 5;
	int colunas = 3;
	int num;
	int qtd;
	float preco;
	float total;
	
	Produto produto[linhas][colunas];
	
	for(int i = 0; i < linhas; i++){
		for(int j = 0; j < 1; j++){
			produto[i][j].cod = i+1;
		}
	}
	
	strcpy(produto[0][0].nome, "Cachorro Quente");
	strcpy(produto[1][0].nome, "X-Salada");
	strcpy(produto[2][0].nome, "X-Bacon ");
	strcpy(produto[3][0].nome, "Torrada Simples");
	strcpy(produto[4][0].nome, "Refrigerante");
	
	produto[0][0].preco = 4.00;
	produto[1][0].preco = 4.50;
	produto[2][0].preco = 5.00;
	produto[3][0].preco = 2.00;
	produto[4][0].preco = 1.00;
	
	printf("R$%.2f\n", produto[0][2].preco);
	
	printf("\n\n");
	
	printf("%s\t", "Número");
	printf("%s\t\t\t\t", "Nome");
	printf("%s\n", "Preço");
	
	for(int i = 0; i < linhas; i++){
		for(int j = 0; j < 1; j++){
			printf("%d\t", produto[i][j].cod);
			printf("%s\t\t\t", produto[i][j].nome);
			printf("R$%.2f\n", produto[i][j].preco);
		}
	}
	
	scanf("%d", &num);
	scanf("%d", &qtd);
	
	for(int i = 0; i < linhas; i++){
		for(int j = 0; j < 1; j++){
			if(num == produto[i][j].cod){
				total = (produto[i][j].preco)*qtd;
			}
		}
	}
	
	printf("Total R$%.2f", total);
}