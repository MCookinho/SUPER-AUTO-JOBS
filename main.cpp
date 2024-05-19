#include "animain.h"
#include "randname.h"
#include "animao.h"
#include "anibatalha.h"

int main(){
	//Criacao das variaveis dos nomes
	tp_nome_equipe nomeeqp, cpunome;
	//definiÃ§Ã£o da mÃ£o
	tp_compra mao[5];
	limpa_mao(mao);
	//definicao da fase e vida
	int vidaplayer=5, vidacpu=5;
	//Menu
	if(!telaInicio()){
		return 0;
	}
	//funcoes
	escolhe_loja(mao, vidaplayer);
	faznome(&nomeeqp, &cpunome);
	batalha(mao, nomeeqp, cpunome, &vidaplayer, &vidacpu);
	escolhe_loja(mao, vidaplayer);
}
