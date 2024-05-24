#include "animain.h"
#include "randname.h"
#include "animao.h"
#include "anibatalha.h"

int main(){
	//Criacao das variaveis dos nomes
	tp_nome_equipe nomeeqp, cpunome;
	int config[3];
	restaura_config(config);
	//definicao da mao
	tp_compra mao[5];
	limpa_mao(mao);
	//definicao da fase e vida
	int vidaplayer=5, vidacpu=5;
	//Menu
	if(!telaInicio(config)){
		return 0;
	}
	//funcoes
	escolhe_loja(mao, vidaplayer);
	faznome(&nomeeqp, &cpunome);
	batalha(mao, nomeeqp, cpunome, &vidaplayer, &vidacpu, config);
	escolhe_loja(mao, vidaplayer);
}
