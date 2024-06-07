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
	while(1==1){
		limpa_mao(mao);
		//definicao da fase e vida
		int vidaplayer=5, vidacpu=5, fase=1;
		//Menu
		if(!telaInicio(config))
			return 0;
		//Jogo
		escolhe_loja(mao, vidaplayer);//primeiro turno
		faznome(&nomeeqp, &cpunome);
		batalha(mao, nomeeqp, cpunome, &vidaplayer, &vidacpu, config, fase);
		
		while(vidaplayer > 0 && vidacpu > 0){//outros turnos
		fase+=1;
		escolhe_loja(mao, vidaplayer);
		batalha(mao, nomeeqp, cpunome, &vidaplayer, &vidacpu, config, fase);
		}
		
		if(vidaplayer <= 0)
			fim_de_jogo(0);
			
		if(vidacpu <= 0)
			fim_de_jogo(1);
	}	
}
