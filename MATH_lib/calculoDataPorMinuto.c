#include <stdio.h>
#include <stdlib.h>
#include <math.h> //necessário para funções matemáticas(floor, fmod, ceil...)

/*
OBJETIVO
LER UM VALOR EM MINUTOS, E RETORNAR O NUMERO DE DIAS, HORAS E MINUTOS DESSE VALOR
POR EXEMPLO:
Entra com o valor 2569
retorno → 1 dia 18 horas e 49 minutos
*/

int main(void){
	
	float horas;
    float dias;
    float minutos;
    int teste;
	
    teste = 18.81666;
    printf("%f", fmod(teste, ceil(teste)));

    return 0;

	// leitura do valor
	printf("Insira um valor inteiro de minutos: ");
	scanf("%f", &minutos);
	
	//↓minutos para dias
	dias = (minutos / 60) / 24;
	/*
	minutos == 2569
	dias = (2569 / 60 == 42,81666...) / 24 == 1.7840277...
	dias == 1.7840277...
	*/
	
	/*dias para horas↓↓↓
	↓	pega o restante da divisão de dias por sua parte inteira ou apenas por 1 e multiplica por 24 para converter em horas
	↓	
	↓	ex: dias == 1.7840277...
	↓	horas = (1.7840277... % 1 == 0.7840277...) * 24 == 18.81666...
	↓	horas == 18.81666...
	↓	--converter dias para horas: DIAS * 24--	*/
	horas = (fmod(dias, ceil(dias))) * 24;
			// ↑, fmod() retorna o resto da divisão de 2 números de ponto flutuante → (<math.h>)
			
	/*horas para minutos
	↓	pega o restante da divisão de horas por sua parte inteira ou apenas por 1 e multiplica por 60 para converter em minutos
	↓	
	↓	ex: horas == 18.81666...
	↓	minutos = (18.81666... % 1 == 0.81666...) * 60 == 49,00000000000032‬
	↓	minutos == 49,00000000000032‬
	↓	--converter horas para minutos: HORAS * 60--		*/
    minutos = (fmod(horas, ceil(horas))) * 60;
	
	/*PARA OBTER OS SEGUNDOS TBM, É SÓ SEGUIR O PROCESSO DE PEGAR O RESTO E CONVERTER*/
	
	printf("%.0f dia(s) %.0f hora(s) %.0f minuto(s)", floor(dias), floor(horas), ceil(minutos));
	/*
	floor → (<math.h>) = arrendonda um numero para baixo: 
	floor(1.7840277...) == 1
	floor(18.81666...) == 18
	
	ceil → (<math.h>) = arrendonda um numero para cima: 
	ceil(49,00000000000032‬) == 49
	--no ultimo componente desejado(minutos no caso) arredonda-se para cima pois seu resto
	não irá gerar mais nenhum outro componente, então seu valor deve ser cheio--
	--caso fosse necessário utilizar os segundos, no resultado, minutos seria arredondado 
	para baixo, e segundos para cima--
	*/

	
}