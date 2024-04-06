#ifndef ANIMAO_H
#define ANIMAO_H
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include "animain.h"
#define MAX 100

typedef struct {
    int topo;
    tp_animal item[MAX];
} tp_pilha;


void inicializar_pilha(tp_pilha *p){
    p->topo = -1;
}

int pilha_vazia(tp_pilha *p){
    if(p->topo == -1){
        return 1;};
    return 0;
}

int pilha_cheia(tp_pilha *p){
    if(p->topo == MAX-1){
        return 1;}
    return 0;
}

int push(tp_pilha *p,tp_animal e){
    if(pilha_cheia(p)==1) return 0;
    p->topo++;
    p->item[p->topo]=e;
    return 1;
}

int pop(tp_pilha *p, tp_animal *e){
    if(pilha_vazia(p)) return 0;
    *e=p->item[p->topo];
    p->topo--;
    return 1;
}

int top(tp_pilha *p, tp_animal *e){
    if(pilha_vazia(p)) return 0;
    *e=p->item[p->topo];
    return 1;
}

void imprime_pilha(tp_pilha p){
    tp_animal e;
    printf("\n");
    while(!pilha_vazia(&p)){
        pop(&p, &e);
        printf("%d ",e.nome);
    }
}

int altura_pilha(tp_pilha *p){
    return p->topo+1;
}

	//recebe uma pilha e adiciona 3 animais aleatorios nela
void randomiza_pilha(tp_pilha *p){
	//Criação dos personagens
	tp_animal professor[3], jornalista[3], ator[3], arquiteto[3], motorista[3], programador[3];
	tp_animal fazendeiro[3], medico[3], advogado[3], policial[3], vendedor[3], guardacostas[3];
	tp_animal filhododono[3], bombeiro[3], atendente[3], fotografo[3], cantor[3], mecanico[3];
	tp_animal salvavidas[3], cozinheiro[3], artista[3], biologo[3], mendigo[3];
	
	//Definição da habilidade de cada personagem
	//Professor nivel 1 2 e 3 respectivamente por linha																											
	strcpy(professor[0].nome, "Professor"); professor[0].vida = 2; professor[0].dano = 2; strcpy(professor[0].descricao, "PROFESSOR: adiciona 1 de dano aos invocados"); professor[0].id = 1;
	strcpy(professor[1].nome, "Professor"); professor[1].vida = 4; professor[1].dano = 4; strcpy(professor[1].descricao, "PROFESSOR: adiciona 2 de dano e 2 de vida aos invocados"); professor[1].id = 11;
	strcpy(professor[2].nome, "Professor"); professor[2].vida = 7; professor[2].dano = 7; strcpy(professor[2].descricao, "PROFESSOR: adiciona 4 de dano e 3 de vida aos invocados");; professor[2].id = 12;	
	//jornalista nivel 1 2 e 3 respectivamente por linha		
	strcpy(jornalista[0].nome, "Jornalista"); jornalista[0].vida = 3; jornalista[0].dano = 4; strcpy(jornalista[0].descricao, "JORNALISTA: da 2 de dano ao ultimo inimigo"); jornalista[0].id = 2;
	strcpy(jornalista[1].nome, "Jornalista"); jornalista[1].vida = 5; jornalista[1].dano = 5; strcpy(jornalista[1].descricao, "JORNALISTA: da 5 de dano ao ultimo inimigo"); jornalista[1].id = 21;
	strcpy(jornalista[2].nome, "Jornalista"); jornalista[2].vida = 8; jornalista[2].dano = 8; strcpy(jornalista[2].descricao, "JORNALISTA: da 8 de dano ao ultimo inimigo"); jornalista[2].id = 22;
	//ator nivel 1 2 e 3 respectivamente por linha
	strcpy(ator[0].nome, "Ator"); ator[0].vida = 2; ator[0].dano = 1; strcpy(ator[0].descricao, "ATOR: invoca um duble com a mesma vida e dano do ator"); ator[0].id = 3;
	strcpy(ator[1].nome, "Ator"); ator[1].vida = 4; ator[1].dano = 2; strcpy(ator[1].descricao, "ATOR: invoca um duble com a mesma vida e dano do ator"); ator[1].id = 31;
	strcpy(ator[2].nome, "Ator"); ator[2].vida = 7; ator[2].dano = 5; strcpy(ator[2].descricao, "ATOR: invoca dois dubles com a mesma vida e dano do ator"); ator[2].id = 32;
	//arquiteto nivel 1 2 e 3 respectivamente por linha	
	strcpy(arquiteto[0].nome, "Arquiteto"); arquiteto[0].vida = 2; arquiteto[0].dano = 1; strcpy(arquiteto[0].descricao, "ARQUITETO: da 2 de vida aos 2 aliados atrás dele"); arquiteto[0].id = 4;
	strcpy(arquiteto[1].nome, "Arquiteto"); arquiteto[1].vida = 4; arquiteto[1].dano = 2; strcpy(arquiteto[1].descricao, "ARQUITETO: da 4 de vida aos 2 aliados atrás dele"); arquiteto[1].id = 41;
	strcpy(arquiteto[2].nome, "Arquiteto"); arquiteto[2].vida = 7; arquiteto[2].dano = 5; strcpy(arquiteto[2].descricao, "ARQUITETO: da 6 de vida aos 2 aliados atrás dele"); arquiteto[2].id = 42;
	//motorista nivel 1 2 e 3 respectivamente por linha
	strcpy(motorista[0].nome, "Motorista"); motorista[0].vida = 2; motorista[0].dano = 1; strcpy(motorista[0].descricao, "MOTORISTA: invoca um carro 5/5 "); motorista[0].id = 5;
	strcpy(motorista[1].nome, "Motorista"); motorista[1].vida = 4; motorista[1].dano = 2; strcpy(motorista[1].descricao, "MOTORISTA: invoca um carro 8/8 "); motorista[1].id = 51;
	strcpy(motorista[2].nome, "Motorista"); motorista[2].vida = 7; motorista[2].dano = 5; strcpy(motorista[2].descricao, "MOTORISTA: invoca um carro 12/12 "); motorista[2].id = 52;
	//programador nivel 1 2 e 3 respectivamente por linha
	strcpy(programador[0].nome, "Programador"); programador[0].vida = 3; programador[0].dano = 4; strcpy(programador[0].descricao, "PROGRAMADOR: invoca um malware 1/1 em um aliado que morreu "); programador[0].id = 6;
	strcpy(programador[1].nome, "Programador"); programador[1].vida = 5; programador[1].dano = 5; strcpy(programador[1].descricao, "PROGRAMADOR: invoca um malware 3/3 em um aliado que morreu "); programador[1].id = 61;
	strcpy(programador[2].nome, "Programador"); programador[2].vida = 8; programador[2].dano = 8; strcpy(programador[2].descricao, "PROGRAMADOR: invoca um malware 5/5 em um aliado que morreu "); programador[2].id = 62;
	//fazendeiro nivel 1 2 e 3 respectivamente por linha
	strcpy(fazendeiro[0].nome, "Fazendeiro"); fazendeiro[0].vida = 3; fazendeiro[0].dano = 4; strcpy(fazendeiro[0].descricao, "FAZENDEIRO: da uma pera de graça no fim da batalha"); fazendeiro[0].id = 7;
	strcpy(fazendeiro[1].nome, "Fazendeiro"); fazendeiro[1].vida = 5; fazendeiro[1].dano = 5; strcpy(fazendeiro[1].descricao, "FAZENDEIRO: da uma banana de graça no fim da batalha"); fazendeiro[1].id = 71;
	strcpy(fazendeiro[2].nome, "Fazendeiro"); fazendeiro[2].vida = 8; fazendeiro[2].dano = 8; strcpy(fazendeiro[2].descricao, "FAZENDEIRO: da um caviar de graça no fim da batalha"); fazendeiro[2].id = 72;	
	//medico nivel 1 2 e 3 respectivamente por linha
	strcpy(medico[0].nome, "Medico"); medico[0].vida = 3; medico[0].dano = 4; strcpy(medico[0].descricao, "MEDICO: cura o da frente em 1 por turno"); medico[0].id = 8;
	strcpy(medico[1].nome, "Medico"); medico[1].vida = 5; medico[1].dano = 5; strcpy(medico[1].descricao, "MEDICO: cura o da frente em 2 por turno"); medico[1].id = 81;
	strcpy(medico[2].nome, "Medico"); medico[2].vida = 8; medico[2].dano = 8; strcpy(medico[2].descricao, "MEDICO: cura o da frente em 3 por turno"); medico[2].id = 82;
	//advogado nivel 1 2 e 3 respectivamente por linha
	strcpy(advogado[0].nome, "Advogado"); advogado[0].vida = 3; advogado[0].dano = 4; strcpy(advogado[0].descricao, "ADVOGADO: da 2 de dano a um inimigo aleatorio"); advogado[0].id = 9;
	strcpy(advogado[1].nome, "Advogado"); advogado[1].vida = 5; advogado[1].dano = 5; strcpy(advogado[1].descricao, "ADVOGADO: da 5 de dano a um inimigo aleatorio"); advogado[1].id = 91;
	strcpy(advogado[2].nome, "Advogado"); advogado[2].vida = 8; advogado[2].dano = 8; strcpy(advogado[2].descricao, "ADVOGADO: da 8 de dano a um inimigo aleatorio"); advogado[2].id = 92;
	//policial nivel 1 2 e 3 respectivamente por linha
	strcpy(policial[0].nome, "Policial"); policial[0].vida = 4; policial[0].dano = 4; strcpy(advogado[0].descricao, "POLICIAL: da 2 de dano a TODOS os personagens"); policial[0].id = 22;
	strcpy(policial[1].nome, "Policial"); policial[1].vida = 6; policial[1].dano = 5; strcpy(advogado[1].descricao, "POLICIAL: da 5 de dano a TODOS os personagens"); policial[1].id = 221;
	strcpy(policial[2].nome, "Policial"); policial[2].vida = 9; policial[2].dano = 9; strcpy(advogado[2].descricao, "POLICIAL: da 8 de dano a TODOS os personagens"); policial[2].id = 222;
	//vendedor nivel 1 2 e 3 respectivamente por linha
	strcpy(vendedor[0].nome, "Vendedor"); vendedor[0].vida = 2; vendedor[0].dano = 1; strcpy(vendedor[0].descricao, "VENDEDOR: ganha mais 2 moedas no fim da batalha"); vendedor[0].id = 23;
	strcpy(vendedor[1].nome, "Vendedor"); vendedor[1].vida = 5; vendedor[1].dano = 4; strcpy(vendedor[1].descricao, "VENDEDOR: ganha mais 4 moedas no fim da batalha"); vendedor[1].id = 231;
	strcpy(vendedor[2].nome, "Vendedor"); vendedor[2].vida = 7; vendedor[2].dano = 7; strcpy(vendedor[2].descricao, "VENDEDOR: ganha mais 6 moedas no fim da batalha"); vendedor[2].id = 232;
	//guardacostas nivel 1 2 e 3 respectivamente por linha
	strcpy(guardacostas[0].nome, "GuardaCostas"); guardacostas[0].vida = 5; guardacostas[0].dano = 2; strcpy(guardacostas[0].descricao, "GUARDA COSTAS: da 1 de vida para o de tras a cada dano que levar"); guardacostas[0].id = 10;
	strcpy(guardacostas[1].nome, "GuardaCostas"); guardacostas[1].vida = 7; guardacostas[1].dano = 3; strcpy(guardacostas[1].descricao, "GUARDA COSTAS: da 2 de vida para o de tras a cada dano que levar"); guardacostas[1].id = 101;
	strcpy(guardacostas[2].nome, "GuardaCostas"); guardacostas[2].vida = 10; guardacostas[2].dano = 8; strcpy(guardacostas[2].descricao, "GUARDA COSTAS: da 3 de vida para o de tras a cada dano que levar"); guardacostas[2].id = 102;
	//filhododono nivel 1 2 e 3 respectivamente por linha
	strcpy(filhododono[0].nome, "FilhoDoDono"); filhododono[0].vida = 1; filhododono[0].dano = 1; strcpy(filhododono[0].descricao, "FILHO DO DONO: da 5 de vida a todos os aliados"); filhododono[0].id = 11;
	strcpy(filhododono[1].nome, "FilhoDoDono"); filhododono[1].vida = 2; filhododono[1].dano = 2; strcpy(filhododono[1].descricao, "FILHO DO DONO: da 10 de vida a todos os aliados"); filhododono[1].id = 111;
	strcpy(filhododono[2].nome, "FilhoDoDono"); filhododono[2].vida = 3; filhododono[2].dano = 3; strcpy(filhododono[2].descricao, "FILHO DO DONO: da 15 de vida a todos os aliados"); filhododono[2].id = 112;
	//bombeiro nivel 1 2 e 3 respectivamente por linha
	strcpy(bombeiro[0].nome, "Bombeiro"); bombeiro[0].vida = 5; bombeiro[0].dano = 2; strcpy(bombeiro[0].descricao, "BOMBEIRO: acrescenta 1 de dano a todos os aliados"); bombeiro[0].id = 12;
	strcpy(bombeiro[1].nome, "Bombeiro"); bombeiro[1].vida = 7; bombeiro[1].dano = 3; strcpy(bombeiro[1].descricao, "BOMBEIRO: acrescenta 3 de dano a todos os aliados"); bombeiro[1].id = 121;
	strcpy(bombeiro[2].nome, "Bombeiro"); bombeiro[2].vida = 10; bombeiro[2].dano = 8; strcpy(bombeiro[2].descricao, "BOMBEIRO: acrescenta 5 de dano a todos os aliados"); bombeiro[2].id = 142;
	//atendente nivel 1 2 e 3 respectivamente por linha
	strcpy(atendente[0].nome, "Atendente"); atendente[0].vida = 5; atendente[0].dano = 2; strcpy(atendente[0].descricao, "ATENDENTE: dobra o dano do aliado mais da frente"); atendente[0].id = 13;
	strcpy(atendente[1].nome, "Atendente"); atendente[1].vida = 7; atendente[1].dano = 3; strcpy(atendente[1].descricao, "ATENDENTE: dobra o dano do aliado mais da frente"); atendente[1].id = 131;
	strcpy(atendente[2].nome, "Atendente"); atendente[2].vida = 10; atendente[2].dano = 8; strcpy(atendente[2].descricao, "ATENDENTE: dobra o dano do aliado mais da frente"); atendente[2].id = 132;
	//fotografo nivel 1 2 e 3 respectivamente por linha
	strcpy(fotografo[0].nome, "Fotografo"); fotografo[0].vida = 1; fotografo[0].dano = 1; strcpy(fotografo[0].descricao, "FOTOGRAFO: da instakill"); fotografo[0].id = 14;
	strcpy(fotografo[1].nome, "Fotografo"); fotografo[1].vida = 1; fotografo[1].dano = 1; strcpy(fotografo[1].descricao, "FOTOGRAFO: da instakill"); fotografo[1].id = 141;
	strcpy(fotografo[2].nome, "Fotografo"); fotografo[2].vida = 2; fotografo[2].dano = 2; strcpy(fotografo[2].descricao, "FOTOGRAFO: da instakill"); fotografo[2].id = 142;
	//fotografo nivel 1 2 e 3 respectivamente por linha
	strcpy(mecanico[0].nome, "Mecanico"); mecanico[0].vida = 2; mecanico[0].dano = 3; strcpy(mecanico[0].descricao, "MOTORISTA: invoca um carro 3/3"); mecanico[0].id = 15;
	strcpy(mecanico[1].nome, "Mecanico"); mecanico[1].vida = 4; mecanico[1].dano = 4; strcpy(mecanico[1].descricao, "MOTORISTA: invoca um carro 6/6"); mecanico[1].id = 151;
	strcpy(mecanico[2].nome, "Mecanico"); mecanico[2].vida = 7; mecanico[2].dano = 6; strcpy(mecanico[2].descricao, "MOTORISTA: invoca um carro 15/15"); mecanico[2].id = 152;
	//cantor nivel 1 2 e 3 respectivamente por linha
	strcpy(cantor[0].nome, "Cantor"); cantor[0].vida = 1; cantor[0].dano = 1; strcpy(cantor[0].descricao, "CANTOR: ao morrer acrescenta 1 de dano a todos os aliados"); cantor[0].id = 16;
	strcpy(cantor[1].nome, "Cantor"); cantor[1].vida = 5; cantor[1].dano = 5; strcpy(cantor[1].descricao, "CANTOR: ao morrer acrescenta 4 de dano a todos os aliados"); cantor[1].id = 161;
	strcpy(cantor[2].nome, "Cantor"); cantor[2].vida = 15; cantor[2].dano = 15; strcpy(cantor[2].descricao, "CANTOR: ao morrer acrescenta 6 de dano a todos os aliados"); cantor[2].id = 162;
	//salvavidas nivel 1 2 e 3 respectivamente por linha
	strcpy(salvavidas[0].nome, "SalvaVidas"); salvavidas[0].vida = 2; salvavidas[0].dano = 2; strcpy(salvavidas[0].descricao, "SALVA VIDAS: cura o da frente em 1 por turno"); salvavidas[0].id = 17;
	strcpy(salvavidas[1].nome, "SalvaVidas"); salvavidas[1].vida = 5; salvavidas[1].dano = 5; strcpy(salvavidas[1].descricao, "SALVA VIDAS: cura o da frente em 2 por turno"); salvavidas[1].id = 171;
	strcpy(salvavidas[2].nome, "SalvaVidas"); salvavidas[2].vida = 15; salvavidas[2].dano = 15; strcpy(salvavidas[2].descricao, "SALVA VIDAS: cura o da frente em 3 por turno"); salvavidas[2].id = 172;
	//cozinheiro nivel 1 2 e 3 respectivamente por linha
	strcpy(cozinheiro[0].nome, "Cozinheiro"); cozinheiro[0].vida = 4; cozinheiro[0].dano = 3; strcpy(cozinheiro[0].descricao, "COZINHEIRO: da uma pera de graça no fim da batalha"); cozinheiro[0].id = 18;
	strcpy(cozinheiro[1].nome, "Cozinheiro"); cozinheiro[1].vida = 5; cozinheiro[1].dano = 5; strcpy(cozinheiro[1].descricao, "COZINHEIRO: da uma banana de graça no fim da batalha"); cozinheiro[1].id = 181;
	strcpy(cozinheiro[2].nome, "Cozinheiro"); cozinheiro[2].vida = 7; cozinheiro[2].dano = 6; strcpy(cozinheiro[2].descricao, "COZINHEIRO: da um caviar de graça no fim da batalha"); cozinheiro[2].id = 182;
	//artista nivel 1 2 e 3 respectivamente por linha
	strcpy(artista[0].nome, "Artista"); artista[0].vida = 1; artista[0].dano = 1; strcpy(artista[0].descricao, "ARTISTA: ganha mais 1 moedas no fim da batalha"); artista[0].id = 19;
	strcpy(artista[1].nome, "Artista"); artista[1].vida = 5; artista[1].dano = 5; strcpy(artista[1].descricao, "ARTISTA: ganha mais 3 moedas no fim da batalha"); artista[1].id = 191;
	strcpy(artista[2].nome, "Artista"); artista[2].vida = 15; artista[2].dano = 15; strcpy(artista[2].descricao, "ARTISTA: ganha mais 8 moedas no fim da batalha"); artista[2].id = 192;
	//biologo nivel 1 2 e 3 respectivamente por linha
	strcpy(biologo[0].nome, "Biologo"); biologo[0].vida = 2; biologo[0].dano = 3; strcpy(biologo[0].descricao, "BIOLOGO: ao morrer invoca um personagem aleatorio nivel 1"); biologo[0].id = 20;
	strcpy(biologo[1].nome, "Biologo"); biologo[1].vida = 4; biologo[1].dano = 5; strcpy(biologo[1].descricao, "BIOLOGO: ao morrer invoca um personagem aleatorio nivel 2"); biologo[1].id = 201;
	strcpy(biologo[2].nome, "Biologo"); biologo[2].vida = 7; biologo[2].dano = 6; strcpy(biologo[2].descricao, "BIOLOGO: ao morrer invoca um personagem aleatorio nivel 3"); biologo[2].id = 202;
	//mendigo nivel 1 2 e 3 respectivamente por linha
	strcpy(mendigo[0].nome, "Mendigo"); mendigo[0].vida = 4; mendigo[0].dano = 4; strcpy(mendigo[0].descricao, "MENDIGO: ganha mais 5 moedas ao vender"); mendigo[0].id = 21;
	strcpy(mendigo[1].nome, "Mendigo"); mendigo[1].vida = 6; mendigo[1].dano = 7; strcpy(mendigo[1].descricao, "MENDIGO: ganha mais 10 moedas ao vender"); mendigo[1].id = 211;
	strcpy(mendigo[2].nome, "Mendigo"); mendigo[2].vida = 10; mendigo[2].dano = 10; strcpy(mendigo[2].descricao, "MENDIGO: ganha mais 20 moedas ao vender"); mendigo[2].id = 212;
	
	
	int i;
	srand(time(NULL));
	for(i=0;i<3; i++){
		switch(rand() % 22){
			case 0:
				push(p, professor[0]);
				break;
			case 1:
				push(p, jornalista[0]);
				break;
			case 2:
				push(p, ator[0]);
				break;
			case 3:
				push(p, arquiteto[0]);
				break;
			case 4:
				push(p, motorista[0]);
				break;
			case 5:
				push(p, programador[0]);
				break;
			case 6:
				push(p, fazendeiro[0]);
				break;
			case 7:
				push(p, medico[0]);
				break;
			case 8:
				push(p, advogado[0]);
				break;
			case 9:
				push(p, policial[0]);
				break;
			case 10:
				push(p, vendedor[0]);
				break;
			case 11:
				push(p, guardacostas[0]);
				break;
			case 12:
				push(p, filhododono[0]);
				break;
			case 13:
				push(p, bombeiro[0]);
				break;
			case 14:
				push(p, atendente[0]);
				break;
			case 15:
				push(p, fotografo[0]);
				break;
			case 16:
				push(p, mecanico[0]);
				break;
			case 17:
				push(p, cantor[0]);
				break;
			case 18:
				push(p, salvavidas[0]);
				break;
			case 19:
				push(p, cozinheiro[0]);
				break;
			case 20:
				push(p, biologo[0]);
				break;
			case 21:
				push(p, mendigo[0]);
				break;
			case 22:
				push(p, artista[0]);
				break;
		}
	}
}
//recebe como parametro as variaveis que representam e recebe a informação da pilha randomizada alocando seus elementos nas variaveis
void faz_mao(tp_animal *m1, tp_animal *m2, tp_animal *m3){
	tp_pilha pilha;
	tp_animal e;
	inicializar_pilha(&pilha);
	randomiza_pilha(&pilha);
	pop(&pilha, &e);
	*m1 = e;
	pop(&pilha, &e);
	*m2 = e;
	pop(&pilha, &e);
	*m3 = e;
}


#endif
