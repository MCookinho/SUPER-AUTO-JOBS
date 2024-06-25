#include "animain.h"
#include "randname.h"
#include "animao.h"
#include "anibatalha.h"
#include "anifases.h"

int singleplayer(tp_nome_equipe nomeeqp, tp_nome_equipe cpunome, int config[3], tp_compra mao[5], int vidaplayer, int vidacpu, int fase){
	
	escolhe_loja(mao, vidaplayer);//primeiro turno
	faznome(&nomeeqp, &cpunome);
	grava_historico_SP(mao, 0, nomeeqp, cpunome);
	SP_batalha(mao, nomeeqp, cpunome, &vidaplayer, &vidacpu, config, fase);
	
	while(vidaplayer > 0 && vidacpu > 0){//outros turnos
	fase+=1;
	escolhe_loja(mao, vidaplayer);
	SP_batalha(mao, nomeeqp, cpunome, &vidaplayer, &vidacpu, config, fase);
	}
	
			
	if(contCPU>contPlayer){
	grava_historico_SP(mao, 3, nomeeqp, cpunome);
	fim_de_jogo(0);
		}
	if(contCPU<contPlayer){
	grava_historico_SP(mao, 2, nomeeqp, cpunome);
	fim_de_jogo(1);
	}
	if(vidaplayer>0&&vidacpu>0){
		grava_historico_SP(mao, 1, nomeeqp, cpunome);
	}
}
 
int multiplayer(tp_nome_equipe nome_P1, tp_nome_equipe nome_P2, int config[3], tp_compra mao_P1[5], int vida_P1, int vida_P2){
	
	tp_nome_equipe nome_vazio;
	tp_compra mao_P2[5];
	limpa_mao(mao_P2);
	
	printa_jogador_mp(1);//primeiro turno
	escolhe_loja(mao_P1, vida_P1);
	faznome(&nome_P1, &nome_vazio);
	printa_jogador_mp(2);
	escolhe_loja(mao_P2, vida_P2);
	faznome(&nome_P2, &nome_vazio);
	grava_historico_MP(mao_P1, mao_P2, 0, nome_P1, nome_P2);
	MP_batalha(mao_P1, mao_P2, nome_P1, nome_P2, &vida_P1, &vida_P2, config);
	
	while(vida_P1 > 0 && vida_P2 > 0){//outros turnos
		printa_jogador_mp(1);//primeiro turno
		escolhe_loja(mao_P1, vida_P1);
		printa_jogador_mp(2);
		escolhe_loja(mao_P2, vida_P2);
		grava_historico_MP(mao_P1, mao_P2, 1, nome_P1, nome_P2);
		MP_batalha(mao_P1, mao_P2, nome_P1, nome_P2, &vida_P1, &vida_P2, config);
		}
		
		if(vida_P1 <= 0){
			grava_historico_MP(mao_P1, mao_P2, 2, nome_P1, nome_P2);
			fim_de_jogo(2);}
			
		if(vida_P2 <= 0){
			grava_historico_MP(mao_P1, mao_P2, 3, nome_P1, nome_P2);
			fim_de_jogo(3);}
			
}
	
	
	
	




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
		switch(telaInicio(config)){
			case 0:
				limpa_historico("HistorySAJ.txt");
				return 0;//caso escolha encerrar o jogo
				break;
			case 1:
				singleplayer(nomeeqp, cpunome, config, mao, vidaplayer, vidacpu, fase);//caso escolha jogar contra a cpu
				break;
			case 2:
				multiplayer(nomeeqp, cpunome, config, mao, vidaplayer, vidacpu);
				break;
		}
	}
}
