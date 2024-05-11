#include "animain.h"
#include "randname.h"
#include "animão.h"
#include <string.h>

int main(){
	//Criação das variaveis dos nomes
	tp_nome_equipe nomeeqp, cpunome;
	
	//Variavel do dinheiro da loja
	int dinhero;
	
	//definição da mão
	tp_animal m1, m2, m3;
	
	//funções de apresentação pra entrega da AV1
	if(!telaInicio()){
		return 0;
	}
	
	faznome(&nomeeqp, &cpunome);
	faz_loja(&m1, &m2, &m3);
	printf("\n\n");
	printanome(nomeeqp);
	printf("\n");
	printanome(cpunome);
	printf("\n");
	printf("%s %s %s", m1.nome, m2.nome, m3.nome);
}
