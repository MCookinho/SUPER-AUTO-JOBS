#ifndef ANIMAO_H
#define ANIMAO_H
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include "animain.h"

typedef struct {
    tp_animal carta[3];
} tp_compra;


void faz_loja(tp_compra m1[]){
	//Criação dos personagens
	//Definição da habilidade de cada personagem
	tp_animal professor[3] = {
    {"Professor", 2, 2, "PROFESSOR: adiciona 1 de dano aos invocados", 1, 1, 0},
    {"Professor2", 4, 4, "PROFESSOR: adiciona 2 de dano e 2 de vida aos invocados", 1, 2, 0},
    {"Professor3", 7, 7, "PROFESSOR: adiciona 4 de dano e 3 de vida aos invocados", 1, 3, 0}
};
    tp_animal jornalista[3] = {
    {"Jornalista", 3, 4, "JORNALISTA: da 2 de dano ao ultimo inimigo", 2, 1, 0},
    {"Jornalista2", 5, 5, "JORNALISTA: da 5 de dano ao ultimo inimigo", 2, 2, 0},
    {"Jornalista3", 8, 8, "JORNALISTA: da 8 de dano ao ultimo inimigo", 2, 3, 0}
};
    tp_animal ator[3] = {
    {"Ator", 2, 1, "ATOR: invoca um duble com a mesma vida e dano do ator", 3, 1, 0},
    {"Ator2", 4, 2, "ATOR: invoca um duble com a mesma vida e dano do ator", 3, 2, 0},
    {"Ator3", 7, 5, "ATOR: invoca dois dubles com a mesma vida e dano do ator", 3, 3, 0}
};
    tp_animal arquiteto[3] = {
    {"Arquiteto", 2, 1, "ARQUITETO: da 2 de vida aos 2 aliados atrás dele", 4, 1, 0},
    {"Arquiteto2", 4, 2, "ARQUITETO: da 4 de vida aos 2 aliados atrás dele", 4, 2, 0},
    {"Arquiteto3", 7, 5, "ARQUITETO: da 6 de vida aos 2 aliados atrás dele", 4, 3, 0}
};
    tp_animal motorista[3] = {
    {"Motorista", 2, 1, "MOTORISTA: invoca um carro 5/5", 5, 1, 0},
    {"Motorista2", 4, 2, "MOTORISTA: invoca um carro 8/8", 5, 2, 0},
    {"Motorista3", 7, 5, "MOTORISTA: invoca um carro 12/12", 5, 3, 0}
};
    tp_animal programador[3] = {
    {"Programador", 3, 4, "PROGRAMADOR: invoca um malware 1/1 em um aliado que morreu", 6, 1, 0},
    {"Programador2", 5, 5, "PROGRAMADOR: invoca um malware 3/3 em um aliado que morreu", 6, 2, 0},
    {"Programador3", 8, 8, "PROGRAMADOR: invoca um malware 5/5 em um aliado que morreu", 6, 3, 0}
};
    tp_animal fazendeiro[3] = {
    {"Fazendeiro", 3, 4, "FAZENDEIRO: da um cafe de graca no fim da batalha", 7, 1, 0},
    {"Fazendeiro2", 5, 5, "FAZENDEIRO: da dois cafes de graca no fim da batalha", 7, 2, 0},
    {"Fazendeiro3", 8, 8, "FAZENDEIRO: da tres cafes de graça no fim da batalha", 7, 3, 0}
};
    tp_animal medico[3] = {
    {"Medico", 3, 4, "MEDICO: cura o da frente em 1 por turno", 8, 1, 0},
    {"Medico2", 5, 5, "MEDICO: cura o da frente em 2 por turno", 8, 2, 0},
    {"Medico3", 8, 8, "MEDICO: cura o da frente em 3 por turno", 8, 3, 0}
};
    tp_animal advogado[3] = {
    {"Advogado", 3, 4, "ADVOGADO: da 2 de dano a um inimigo aleatorio", 9, 1, 0},
    {"Advogado2", 5, 5, "ADVOGADO: da 5 de dano a um inimigo aleatorio", 9, 2, 0},
    {"Advogado3", 8, 8, "ADVOGADO: da 8 de dano a um inimigo aleatorio", 9, 3, 0}
};
    tp_animal policial[3] = {
    {"Policial", 4, 4, "POLICIAL: da 2 de dano a TODOS os personagens", 22, 1, 0},
    {"Policial2", 6, 5, "POLICIAL: da 5 de dano a TODOS os personagens", 22, 2, 0},
    {"Policial3", 9, 9, "POLICIAL: da 8 de dano a TODOS os personagens", 22, 3, 0}
};
    tp_animal vendedor[3] = {
    {"Vendedor", 2, 1, "VENDEDOR: ganha mais 2 moedas no fim da batalha", 23, 1, 0},
    {"Vendedor2", 5, 4, "VENDEDOR: ganha mais 4 moedas no fim da batalha", 23, 2, 0},
    {"Vendedor3", 7, 7, "VENDEDOR: ganha mais 6 moedas no fim da batalha", 23, 3, 0}
};
    tp_animal guardacostas[3] = {
    {"GuardaCostas", 5, 2, "GUARDA COSTAS: da 1 de vida para o de tras a cada dano que levar", 10, 1, 0},
    {"GuardaCostas2", 7, 3, "GUARDA COSTAS: da 2 de vida para o de tras a cada dano que levar", 10, 2, 0},
    {"GuardaCostas3", 10, 8, "GUARDA COSTAS: da 3 de vida para o de tras a cada dano que levar", 10, 3, 0}
};
    tp_animal filhododono[3] = {
    {"FilhoDoDono", 1, 1, "FILHO DO DONO: da 5 de vida a todos os aliados", 11, 1, 0},
    {"FilhoDoDono2", 2, 2, "FILHO DO DONO: da 10 de vida a todos os aliados", 11, 2, 0},
    {"FilhoDoDono3", 3, 3, "FILHO DO DONO: da 15 de vida a todos os aliados", 11, 3, 0}
};
    tp_animal bombeiro[3] = {
    {"Bombeiro", 5, 2, "BOMBEIRO: acrescenta 1 de dano a todos os aliados", 12, 1, 0},
    {"Bombeiro2", 7, 3, "BOMBEIRO: acrescenta 3 de dano a todos os aliados", 12, 2, 0},
    {"Bombeiro3", 10, 8, "BOMBEIRO: acrescenta 5 de dano a todos os aliados", 12, 3, 0}
};
    tp_animal atendente[3] = {
    {"Atendente", 5, 2, "ATENDENTE: dobra o dano do aliado mais da frente", 13, 1, 0},
    {"Atendente2", 7, 3, "ATENDENTE: dobra o dano do aliado mais da frente", 13, 2, 0},
    {"Atendente3", 10, 8, "ATENDENTE: dobra o dano do aliado mais da frente", 13, 3, 0}
};
    tp_animal fotografo[3] = {
    {"Fotografo", 1, 1, "FOTOGRAFO: da instakill", 14, 1, 0},
    {"Fotografo2", 1, 1, "FOTOGRAFO: da instakill", 14, 2, 0},
    {"Fotografo3", 2, 2, "FOTOGRAFO: da instakill", 14, 3, 0}
};
    tp_animal mecanico[3] = {
    {"Mecanico", 2, 3, "MECANICO: invoca um carro 3/3", 15, 1, 0},
    {"Mecanico2", 4, 4, "MECANICO: invoca um carro 6/6", 15, 2, 0},
    {"Mecanico3", 7, 6, "MECANICO: invoca um carro 15/15", 15, 3, 0}
};
    tp_animal cantor[3] = {
    {"Cantor", 5, 3, "CANTOR: triplica o dano do proximo ataque do aliado mais da frente", 16, 1, 0},
    {"Cantor2", 7, 4, "CANTOR: triplica o dano do proximo ataque do aliado mais da frente", 16, 2, 0},
    {"Cantor3", 10, 8, "CANTOR: triplica o dano do proximo ataque do aliado mais da frente", 16, 3, 0}
};
    tp_animal salvavidas[3] = {
    {"SalvaVidas", 2, 2, "SALVA VIDAS: cura o da frente em 1 por turno", 17, 1, 0},
    {"SalvaVidas2", 5, 5, "SALVA VIDAS: cura o da frente em 2 por turno", 17, 2, 0},
    {"SalvaVidas3", 15, 15, "SALVA VIDAS: cura o da frente em 3 por turno", 17, 3, 0}
};
    tp_animal cozinheiro[3] = {
    {"Cozinheiro", 4, 3, "COZINHEIRO: da uma pera de graça no fim da batalha", 18, 1, 0},
    {"Cozinheiro2", 5, 5, "COZINHEIRO: da uma banana de graça no fim da batalha", 18, 2, 0},
    {"Cozinheiro3", 7, 6, "COZINHEIRO: da um caviar de graça no fim da batalha", 18, 3, 0}
};
    tp_animal artista[3] = {
    {"Artista", 1, 1, "ARTISTA: ganha mais 1 moedas no fim da batalha", 19, 1, 0},
    {"Artista2", 5, 5, "ARTISTA: ganha mais 3 moedas no fim da batalha", 19, 2, 0},
    {"Artista3", 15, 15, "ARTISTA: ganha mais 8 moedas no fim da batalha", 19, 3, 0}
};
    tp_animal biologo[3] = {
    {"Biologo", 2, 3, "BIOLOGO: ao morrer invoca um personagem aleatorio nivel 1", 20, 1, 0},
    {"Biologo2", 4, 5, "BIOLOGO: ao morrer invoca um personagem aleatorio nivel 2", 20, 2, 0},
    {"Biologo3", 7, 6, "BIOLOGO: ao morrer invoca um personagem aleatorio nivel 3", 20, 3, 0}
};
    tp_animal mendigo[3] = {
    {"Mendigo", 4, 4, "MENDIGO: ganha mais 5 moedas ao vender", 21, 1, 0},
    {"Mendigo2", 6, 7, "MENDIGO: ganha mais 10 moedas ao vender", 21, 2, 0},
    {"Mendigo3", 10, 10, "MENDIGO: ganha mais 20 moedas ao vender", 21, 3, 0}
};
	
	int i, aux;
	srand(time(NULL));
	for(i=0;i<3; i++){
		do{
		aux = rand() % (22 + 1 - 0) + 0;
		switch(aux){
			case 0:
				m1[i].carta[0] = professor[0];
				m1[i].carta[1] = professor[1];
				m1[i].carta[2] = professor[2];
				break;
			case 1:
				m1[i].carta[0] = jornalista[0];
				m1[i].carta[1] = jornalista[1];
				m1[i].carta[2] = jornalista[2];
				break;
			case 2:
				m1[i].carta[0] = ator[0];
				m1[i].carta[1] = ator[1];
				m1[i].carta[2] = ator[2];
				break;
			case 3:
				m1[i].carta[0] = arquiteto[0];
				m1[i].carta[1] = arquiteto[1];
				m1[i].carta[2] = arquiteto[2];
				break;
			case 4:
				m1[i].carta[0] = motorista[0];
				m1[i].carta[1] = motorista[1];
				m1[i].carta[2] = motorista[2];
				break;
			case 5:
				m1[i].carta[0] = programador[0];
				m1[i].carta[1] = programador[1];
				m1[i].carta[2] = programador[2];
				break;
			case 6:
				m1[i].carta[0] = fazendeiro[0];
				m1[i].carta[1] = fazendeiro[1];
				m1[i].carta[2] = fazendeiro[2];
				break;
			case 7:
				m1[i].carta[0] = medico[0];
				m1[i].carta[1] = medico[1];
				m1[i].carta[2] = medico[2];
				break;
			case 8:
				m1[i].carta[0] = advogado[0];
				m1[i].carta[1] = advogado[1];
				m1[i].carta[2] = advogado[2];
				break;
			case 9:
				m1[i].carta[0] = policial[0];
				m1[i].carta[1] = policial[1];
				m1[i].carta[2] = policial[2];
				break;
			case 10:
				m1[i].carta[0] = vendedor[0];
				m1[i].carta[1] = vendedor[1];
				m1[i].carta[2] = vendedor[2];
				break;
			case 11:
				m1[i].carta[0] = guardacostas[0];
				m1[i].carta[1] = guardacostas[1];
				m1[i].carta[2] = guardacostas[2];
				break;
			case 12:
				m1[i].carta[0] = filhododono[0];
				m1[i].carta[1] = filhododono[1];
				m1[i].carta[2] = filhododono[2];
				break;
			case 13:
				m1[i].carta[0] = bombeiro[0];
				m1[i].carta[1] = bombeiro[1];
				m1[i].carta[2] = bombeiro[2];
				break;
			case 14:
				m1[i].carta[0] = atendente[0];
				m1[i].carta[1] = atendente[1];
				m1[i].carta[2] = atendente[2];
				break;
			case 15:
				m1[i].carta[0] = fotografo[0];
				m1[i].carta[1] = fotografo[1];
				m1[i].carta[2] = fotografo[2];
				break;
			case 16:
				m1[i].carta[0] = mecanico[0];
				m1[i].carta[1] = mecanico[1];
				m1[i].carta[2] = mecanico[2];
				break;
			case 17:
				m1[i].carta[0] = cantor[0];
				m1[i].carta[1] = cantor[1];
				m1[i].carta[2] = cantor[2];
				break;
			case 18:
				m1[i].carta[0] = salvavidas[0];
				m1[i].carta[1] = salvavidas[1];
				m1[i].carta[2] = salvavidas[2];
				break;
			case 19:
				m1[i].carta[0] = cozinheiro[0];
				m1[i].carta[1] = cozinheiro[1];
				m1[i].carta[2] = cozinheiro[2];
				break;
			case 20:
				m1[i].carta[0] = biologo[0];
				m1[i].carta[1] = biologo[2];
				m1[i].carta[2] = biologo[3];
				break;
			case 21:
				m1[i].carta[0] = mendigo[0];
				m1[i].carta[1] = mendigo[1];
				m1[i].carta[2] = mendigo[2];
				break;
			case 22:
				m1[i].carta[0] = artista[0];
				m1[i].carta[1] = artista[1];
				m1[i].carta[2] = artista[2];
				break;
			default:
				break;
	}
	}while(aux < 0 || aux > 22);	
	}
}


void escolhe_loja(tp_compra m1[], tp_compra mao[], int vidajogador){
	
	int esc=0, subloja, submao, i, j;
	int dinheiro = 10;
	tp_animal troca;
	
	while(esc != 6){
		
	//define o nivel caso bata o exp
	for(i=0;i<5;i++){
		if(mao[i].carta[0].lvl != 3){
			if(mao[i].carta[0].lvl == 1 && mao[i].carta[0].exp >= 2){
				mao[i].carta[1].exp = (mao[i].carta[0].exp - 2);
				mao[i].carta[0]= mao[i].carta[1];
				}
			if(mao[i].carta[0].lvl == 2 && mao[i].carta[0].exp >= 3){
				mao[i].carta[0]= mao[submao-1].carta[2];
				}
			}
	}
	
	
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	for(i=0;i<3;i++){
		if(m1[i].carta[0].id == 0){
			strcpy(m1[i].carta[0].nome, "___");
			strcpy(m1[i].carta[0].descricao, "___");
		}
	}

		for(i=0;i<5;i++){
			if(mao[i].carta[0].id == 0)
				strcpy(mao[i].carta[0].nome, "_____");
}

	if(esc == 2){
			
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nLOJA:\n\n");
			for(i=0;i<3;i++){
				if(m1[i].carta[0].id != 0){
					puts(m1[i].carta[0].descricao);
					printf("DANO: %d , VIDA %d\n\n", m1[i].carta[0].dano, m1[i].carta[0].vida);
			}
			}
			printf("\n\n\n\nDECK:\n\n");
			for(i=0;i<5;i++){
			if(mao[i].carta[0].id != 0 && mao[i].carta[0].lvl == 1){
				puts(mao[i].carta[0].descricao);
				printf("DANO: %d , VIDA: %d, exp: %d/2 \n\n", mao[i].carta[0].dano, mao[i].carta[0].vida, mao[i].carta[0].exp);
			}
				else if(mao[i].carta[0].id != 0 && mao[i].carta[0].lvl == 2){
					puts(mao[i].carta[0].descricao);
					printf("DANO: %d , VIDA: %d, EXP: %d/3 \n\n", mao[i].carta[0].dano, mao[i].carta[0].vida, mao[i].carta[0].exp);
				}
				else if(mao[i].carta[0].id != 0 && mao[i].carta[0].lvl == 3){
					puts(mao[i].carta[0].descricao);
					printf("DANO: %d , VIDA: %d\n\n", mao[i].carta[0].dano, mao[i].carta[0].vida);
				}
			}
			printf("\n\n\n\n\n\n");
		}	
				
	printf("Dinheiro: %d                                                 Vida: %d\n\n", dinheiro, vidajogador);
	printf("              %s   %s   %s   %s   %s \n\n", mao[4].carta[0].nome, mao[3].carta[0].nome, mao[2].carta[0].nome, mao[1].carta[0].nome, mao[0].carta[0].nome);
	printf("%s %s %s \n", m1[0].carta[0].nome, m1[1].carta[0].nome, m1[2].carta[0].nome);
	
	printf("1 para contratar, 2 para ler a descricao, 3 rerolar, 4 para vender, 5 para reposicionar, 6 para batalhar: ");
	scanf("%d", &esc);
	if(esc == 1 && dinheiro >= 3){
		printf("digite qual voce quer contratar: ");
		scanf("%d", &subloja);
		if(subloja < 4 && subloja > 0 && m1[subloja-1].carta[0].id!=0){
			printf("a posicao que voce quer colocar: ");
			scanf("%d", &submao);
			if(submao < 6 && submao > 0 && mao[submao-1].carta[0].id == 0){
				mao[submao-1]= m1[subloja-1];
				m1[subloja-1].carta[0].id = 0;
				dinheiro-=3;
			}
			else if(submao < 6 && submao > 0 && mao[submao-1].carta[0].id == m1[subloja-1].carta[0].id && mao[submao-1].carta[0].lvl != 3){
				mao[submao-1].carta[0].exp += 1;
				m1[subloja-1].carta[0].id = 0;
				dinheiro-=3;
			}
		}
	}
	
	if(esc == 3 && dinheiro >=1){
		faz_loja(m1);
		dinheiro -= 1;
	}
	
	if(esc == 4){
		printf("digite qual voce quer vender: ");
		scanf("%d", &subloja);
		if (mao[subloja-1].carta[0].id != 0 && subloja>=1 && subloja<=5){
			if(mao[subloja-1].carta[0].id == 21 && mao[subloja-1].carta[0].lvl == 1){
				dinheiro += 6;
				mao[subloja-1].carta[0].id = 0;}
			else if (mao[subloja-1].carta[0].id == 21 && mao[subloja-1].carta[0].lvl == 2){
				dinheiro += 11;
				mao[subloja-1].carta[0].id = 0;}
			else if (mao[subloja-1].carta[0].id == 21 && mao[subloja-1].carta[0].lvl == 3){
				dinheiro += 21;
				mao[subloja-1].carta[0].id = 0;}
			else{
				dinheiro += 1;
				mao[subloja-1].carta[0].id = 0;}
			}
		}
		
	if(esc == 5){
		printf("digite quais posicoes voce quer trocar: ");
		scanf("%d %d", &subloja , &submao);
		if (mao[subloja-1].carta[0].id == mao[submao-1].carta[0].id && subloja != submao && subloja > 0 && submao > 0 && subloja < 6 && subloja < 6){
			mao[submao-1].carta[0].exp += (1+mao[subloja-1].carta[0].exp);
			mao[subloja-1].carta[0].id = 0;
		}
		else if (subloja != submao && subloja > 0 && submao > 0 && subloja < 6 && subloja < 6){
			troca = mao[subloja-1].carta[0];
			mao[subloja-1].carta[0] = mao[submao-1].carta[0];
			mao[submao-1].carta[0] = troca;
		}	
		
	}
	}
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
}



void limpa_mao(tp_compra mao[]){
	int i;
	for(i=0;i<5;i++){
		mao[i].carta[0].id = 0;
		mao[i].carta[1].id = 0;
		mao[i].carta[2].id = 0;
	}
}

#endif
