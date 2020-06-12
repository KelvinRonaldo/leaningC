#include <stdio.h>
#include <string.h>

int main(void){
	
	/* MEMMOVE = MOVE OS BYTES DE UM BUFFER AO OUTRO
		move o conteudo de uma string(ou variavel string) para outra
		sobrepondo o numero de bytes selecionado
	*/
	
	char xpto[6];
	char otpx[6];
	memset(xpto, 0, sizeof(xpto));
	memset(otpx, 0, sizeof(otpx));
	strncpy(xpto, "paulo", sizeof(xpto));//INICIO DA VARIÁVEL xpto - 'paulo'
	strncpy(otpx, "silva", sizeof(otpx));//INICIO DA VARIÁVEL otpx - 'silva'
	
	printf("Print antes de memmove(): \nXPTO = %s \nOTPX = %s", xpto, otpx);
	memmove(xpto, otpx, 3);
	/*		↑		↑	↑numero de bytes que serão levados para sobrescrever o mesmo numero de bytes no destino
			↑		↑variavel que tera o conteudo levado ao destino
			↑string que recebe a string(destino)
	*/
	printf("\n\nPrint antes de memmove(): \nXPTO = %s \nOTPX = %s", xpto, otpx);
	/*SAÍDA DA VARIÁVEL xpto(com o numero de bytes especificado sobrescrevendo
	com o conteudo da trazido da variavel otpx) - 'sillo'
	
	string xpto =	p	a	u	l	o
	string otpx =	s	i	l	v	a
	bytes		=	1	2	3	4	5
	
	bytes da	=	s	i	l	l	o
	string xpto
	sobrescrita 
	pelos bytes
	trazidos da
	string otpx 
	
	*/
	
	
	return 0;
}