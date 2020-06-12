#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
FUNCIONA COMO UMA OBJETO DE CLASSE NO JAVA
um tipo de dado que possui diversos(ou um) atributos de varios tipos

E SE USA COMO UM JSON EM JS
ex struct pessoa possui os atributos nome e cod
então para atribuição de valores usa-se o nome da variavel criada daquel tipo '.' o atributo
Ex:
**criaçao
struct pessoa{
	int cod;
	char nome[30];
};
**uso
struct pessoa pessoa1 ← CRIANDO VARIÁVEL pessoa1 DO TIPO PESSOA
pessoa1.cod = 548 ← ATRIBUINDO 548 COMO CÓDIGO DE pessoa1
stcpy(pessoa1.nome, "Kelvin") ← ATRIBUINDO 'Kelvin' AO NOME DE pessoa1

*/

typedef struct estado {
	char nomeEstado[61];
	char uf[4];	
} Estado;

typedef struct cidade {
	char nomeCidade[61];
	
	Estado estado;	// atributo estado da struct cidade é do tipo Estado, que tbm é um struct	
	
} Cidade;

typedef struct endereco {
	char logradouro[61];
	char numero[11];
	char bairro[61];
	
	Cidade cidade;// atributo cidade da struct endereco é do tipo Cidade, que tbm é um struct	
	
} Endereco;

struct pessoas {
	char nome[61];
	
	int idade;
	
	Endereco endereco;// atributo endereco da struct pessoas é do tipo Endereco, que tbm é um struct	
	
};

void main(){
		
	struct pessoas pessoa;// criando variavel do tipo pessoas
	
	memset(pessoa.nome, 0, sizeof(pessoa.nome));
	
	memset(pessoa.endereco.logradouro, 0, sizeof(pessoa.endereco.logradouro));
	memset(pessoa.endereco.numero, 0, sizeof(pessoa.endereco.numero));
	memset(pessoa.endereco.bairro, 0, sizeof(pessoa.endereco.bairro));
	
	memset(pessoa.endereco.cidade.nomeCidade, 0, sizeof(pessoa.endereco.cidade.nomeCidade));

	memset(pessoa.endereco.cidade.estado.nomeEstado, 0, sizeof(pessoa.endereco.cidade.estado.nomeEstado));
	memset(pessoa.endereco.cidade.estado.uf, 0, sizeof(pessoa.endereco.cidade.estado.uf));

	strcpy(pessoa.nome, "Kelvin Ronaldo");	
	
	pessoa.idade = 19;
	
	strcpy(pessoa.endereco.logradouro,"Rua Teste de Oliveira");
	
	strcpy(pessoa.endereco.numero, "168A");
	
	strcpy(pessoa.endereco.bairro, "Jd. Teste Mendes de Carvalho");
	
	strcpy(pessoa.endereco.cidade.nomeCidade, "Testepicuíba");
	
	strcpy(pessoa.endereco.cidade.estado.nomeEstado, "Teste Paulo");
	
	strcpy(pessoa.endereco.cidade.estado.uf, "TP");
	
	printf("\nNome: %s \nIdade: %d", pessoa.nome, pessoa.idade);
	// printf("\nNome: %s", pessoa.nome);
	printf("\nLogradouro: %s \nNumero: %s \nBairro: %s", pessoa.endereco.logradouro, pessoa.endereco.numero, pessoa.endereco.bairro);
	printf("\nCidade: %s \nEstado: %s \nUF: %s", pessoa.endereco.cidade.nomeCidade, pessoa.endereco.cidade.estado.nomeEstado, pessoa.endereco.cidade.estado.uf);
}
















