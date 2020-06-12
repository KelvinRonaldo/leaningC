#include <stdio.h>
#include <stdlib.h>

/*
FUNCIONA COMO UMA OBJETO DE CLASSE NO JAVA
um tipo de dado que possui diversos(ou um) atributos de varios tipos

E SE USA COMO UM JSON EM JS
struct pessoa possui os atributos nome e cod
então para atribuição de valores usa-se o nome da variavel criada daquel tipo '.' o atributo
Ex:
**criaçao
struct pessoa{
	int cod;
	char nome[30];
};
**uso
struct pessoa p ← CRIANDO VARIÁVEL p DO TIPO PESSOA
p.cod = 548 ← ATRIBUINDO 548 COMO CÓDIGO DE p
stcpy(p.nome, "Kelvin") ← ATRIBUINDO 'Kelvin' AO NOME DE p

*/
struct pessoa {
	char nome[30];
	int idade;
	char endereco[50];
};
void main()
{
struct pessoa p;
	printf("Informe o nome: \n");
	scanf("%s", &p.nome);
	
	printf("Informe a idade: \n");
	scanf("%d", &p.idade);
	
	printf("Informe o endereco:\n");
	scanf("%s", &p.endereco);
	
	//imprimindo dados
	printf("Nome: %s \n", p.nome);
	printf("Idade: %d \n", p.idade);
	printf("Endereco: %s \n", p.endereco);
}