#include "animain.h"
#include "randname.h"
#include "animao.h"
#include "anibatalha.h"

int main(){
	//Criação das variaveis dos nomes
	tp_nome_equipe nomeeqp, cpunome;
	//definição da mão
	tp_compra preloja[3], mao[5];
	limpa_mao(mao);
	//definição da fase e vida
	int vidaplayer=5, vidacpu=5;
	//Menu
	if(!telaInicio()){
		return 0;
	}
	//funcoes
	faznome(&nomeeqp, &cpunome);
	faz_loja(preloja);
	escolhe_loja(preloja, mao, vidaplayer);
	batalha(mao, nomeeqp, cpunome, &vidaplayer, &vidacpu);
	escolhe_loja(preloja, mao, vidaplayer);
}
