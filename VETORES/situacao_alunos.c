#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*
OBJETIVO
Ler os nomes e as notas de 2 alunos e mostrar a média e situação dos 2 alunos;
*/

// Estrutura de aluno
struct aluno{
	char nome[30];
	float nota1;
	float nota2;
	int media;
	char situacao[14];
};

int main(void){
	
	//variável do tipo aluno
	struct aluno alunos[2];
	
	for(int i = 0; i < 2; i++){
		memset(alunos[i].nome, 0, sizeof(alunos[i].nome));
		memset(alunos[i].situacao, 0, sizeof(alunos[i].situacao));
		
		printf("Primeiro nome do %d° aluno: ", i+1);
		scanf("%s", &alunos[i].nome);
		printf("Qual a 1º nota do aluno: ");
		scanf("%f", &alunos[i].nota1);
		printf("Qual a 2º nota do aluno: ");
		scanf("%f", &alunos[i].nota2);
	}
	for(int i = 0; i < 2; i++){
		//CALCULO DA MÉDIA
		alunos[i].media = (alunos[i].nota1 + alunos[i].nota2)/2;
		if(alunos[i].media > 7){
			//SE NOTA MAIR QUE 7, SITUAÇÃO DO ALUNO RECEBE APROVADO
			memcpy(alunos[i].situacao, "Aprovado", 9);
		}else{
			//SE NOTA MENOR QUE 7, SITUAÇÃO DO ALUNO RECEBE NÃO APROVADO
			memcpy(alunos[i].situacao, "Não Aprovado", 13);
		}
	}
	
	for(int i = 0; i < 2; i++){
		printf("\nAluno: %s\n", alunos[i].nome);
		printf("1ª nota: %.1f\n", alunos[i].nota1);
		printf("2ª nota: %.1f\n", alunos[i].nota2);
		printf("Média: %d\n", alunos[i].media);
		printf("Situação: %s\n", alunos[i].situacao);
	}
	
	return 0;
}