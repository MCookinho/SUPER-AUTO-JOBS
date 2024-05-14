#include "animain.h"
#include "randname.h"
#include "animao.h"
#include <string.h>

int main(){
	//Criação das variaveis dos nomes
	tp_nome_equipe nomeeqp, cpunome;
	//definição da mão
	tp_compra preloja[3];
	tp_animal mao[5];
	limpa_mao(mao);
	//definição da fase e vida
	int fase, vida;
	//funções de apresentação pra entrega da AV1
	if(!telaInicio()){
		return 0;
	}
	
	faznome(&nomeeqp, &cpunome);
	faz_loja(preloja);
	escolhe_loja(preloja, mao);
	printanome(nomeeqp);
	printf("\n");
	printanome(cpunome);
	printf("\n");
}
