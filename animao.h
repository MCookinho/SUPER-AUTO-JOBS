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
    tp_animal carta[3];
} tp_compra;


void faz_loja(tp_compra m1[]){
	//Criação dos personagens
	tp_animal professor[3], jornalista[3], ator[3], arquiteto[3], motorista[3], programador[3];
	tp_animal fazendeiro[3], medico[3], advogado[3], policial[3], vendedor[3], guardacostas[3];
	tp_animal filhododono[3], bombeiro[3], atendente[3], fotografo[3], cantor[3], mecanico[3];
	tp_animal salvavidas[3], cozinheiro[3], artista[3], biologo[3], mendigo[3];
	
	//Definição da habilidade de cada personagem
	//Professor nivel 1 2 e 3 respectivamente por linha																											
	strcpy(professor[0].nome, "Professor"); professor[0].vida = 2; professor[0].dano = 2; strcpy(professor[0].descricao, "PROFESSOR: adiciona 1 de dano aos invocados"); professor[0].id = 1; professor[0].lvl = 1; professor[0].exp = 0; 
	strcpy(professor[1].nome, "Professor2"); professor[1].vida = 4; professor[1].dano = 4; strcpy(professor[1].descricao, "PROFESSOR: adiciona 2 de dano e 2 de vida aos invocados"); professor[1].id = 1; professor[1].lvl = 2; professor[1].exp = 0; 
	strcpy(professor[2].nome, "Professor3"); professor[2].vida = 7; professor[2].dano = 7; strcpy(professor[2].descricao, "PROFESSOR: adiciona 4 de dano e 3 de vida aos invocados");; professor[2].id = 1;	professor[2].lvl = 3; professor[2].exp = 0; 
	//jornalista nivel 1 2 e 3 respectivamente por linha		
	strcpy(jornalista[0].nome, "Jornalista"); jornalista[0].vida = 3; jornalista[0].dano = 4; strcpy(jornalista[0].descricao, "JORNALISTA: da 2 de dano ao ultimo inimigo"); jornalista[0].id = 2; jornalista[0].lvl = 1; jornalista[0].exp = 0; 
	strcpy(jornalista[1].nome, "Jornalista2"); jornalista[1].vida = 5; jornalista[1].dano = 5; strcpy(jornalista[1].descricao, "JORNALISTA: da 5 de dano ao ultimo inimigo"); jornalista[1].id = 2; jornalista[1].lvl = 2; jornalista[1].exp = 0; 
	strcpy(jornalista[2].nome, "Jornalista3"); jornalista[2].vida = 8; jornalista[2].dano = 8; strcpy(jornalista[2].descricao, "JORNALISTA: da 8 de dano ao ultimo inimigo"); jornalista[2].id = 2; jornalista[2].lvl = 3; jornalista[2].exp = 0; 
	//ator nivel 1 2 e 3 respectivamente por linha
	strcpy(ator[0].nome, "Ator"); ator[0].vida = 2; ator[0].dano = 1; strcpy(ator[0].descricao, "ATOR: invoca um duble com a mesma vida e dano do ator"); ator[0].id = 3; ator[0].lvl = 1; ator[0].exp = 0; 
	strcpy(ator[1].nome, "Ator2"); ator[1].vida = 4; ator[1].dano = 2; strcpy(ator[1].descricao, "ATOR: invoca um duble com a mesma vida e dano do ator"); ator[1].id = 3; ator[1].lvl = 2; ator[1].exp = 0; 
	strcpy(ator[2].nome, "Ator3"); ator[2].vida = 7; ator[2].dano = 5; strcpy(ator[2].descricao, "ATOR: invoca dois dubles com a mesma vida e dano do ator"); ator[2].id = 3; ator[2].lvl = 3; ator[2].exp = 0; 
	//arquiteto nivel 1 2 e 3 respectivamente por linha	
	strcpy(arquiteto[0].nome, "Arquiteto"); arquiteto[0].vida = 2; arquiteto[0].dano = 1; strcpy(arquiteto[0].descricao, "ARQUITETO: da 2 de vida aos 2 aliados atrás dele"); arquiteto[0].id = 4; arquiteto[0].lvl = 1; arquiteto[0].exp = 0;
	strcpy(arquiteto[1].nome, "Arquiteto2"); arquiteto[1].vida = 4; arquiteto[1].dano = 2; strcpy(arquiteto[1].descricao, "ARQUITETO: da 4 de vida aos 2 aliados atrás dele"); arquiteto[1].id = 4; arquiteto[1].lvl = 2; arquiteto[1].exp = 0;
	strcpy(arquiteto[2].nome, "Arquiteto3"); arquiteto[2].vida = 7; arquiteto[2].dano = 5; strcpy(arquiteto[2].descricao, "ARQUITETO: da 6 de vida aos 2 aliados atrás dele"); arquiteto[2].id = 4; arquiteto[2].lvl = 3; arquiteto[2].exp = 0;
	//motorista nivel 1 2 e 3 respectivamente por linha
	strcpy(motorista[0].nome, "Motorista"); motorista[0].vida = 2; motorista[0].dano = 1; strcpy(motorista[0].descricao, "MOTORISTA: invoca um carro 5/5 "); motorista[0].id = 5; motorista[0].lvl = 1; motorista[0].exp = 0;
	strcpy(motorista[1].nome, "Motorista2"); motorista[1].vida = 4; motorista[1].dano = 2; strcpy(motorista[1].descricao, "MOTORISTA: invoca um carro 8/8 "); motorista[1].id = 5; motorista[1].lvl = 2; motorista[1].exp = 0;
	strcpy(motorista[2].nome, "Motorista3"); motorista[2].vida = 7; motorista[2].dano = 5; strcpy(motorista[2].descricao, "MOTORISTA: invoca um carro 12/12 "); motorista[2].id = 5; motorista[2].lvl = 3; motorista[2].exp = 0;
	//programador nivel 1 2 e 3 respectivamente por linha
	strcpy(programador[0].nome, "Programador"); programador[0].vida = 3; programador[0].dano = 4; strcpy(programador[0].descricao, "PROGRAMADOR: invoca um malware 1/1 em um aliado que morreu "); programador[0].id = 6; programador[0].lvl = 1; programador[0].exp = 0;
	strcpy(programador[1].nome, "Programador2"); programador[1].vida = 5; programador[1].dano = 5; strcpy(programador[1].descricao, "PROGRAMADOR: invoca um malware 3/3 em um aliado que morreu "); programador[1].id = 6; programador[1].lvl = 2; programador[1].exp = 0;
	strcpy(programador[2].nome, "Programador3"); programador[2].vida = 8; programador[2].dano = 8; strcpy(programador[2].descricao, "PROGRAMADOR: invoca um malware 5/5 em um aliado que morreu "); programador[2].id = 6; programador[2].lvl = 3; programador[2].exp = 0;
	//fazendeiro nivel 1 2 e 3 respectivamente por linha
	strcpy(fazendeiro[0].nome, "Fazendeiro"); fazendeiro[0].vida = 3; fazendeiro[0].dano = 4; strcpy(fazendeiro[0].descricao, "FAZENDEIRO: da um cafe de graca no fim da batalha"); fazendeiro[0].id = 7; fazendeiro[0].lvl = 1; fazendeiro[0].exp = 0;
	strcpy(fazendeiro[1].nome, "Fazendeiro2"); fazendeiro[1].vida = 5; fazendeiro[1].dano = 5; strcpy(fazendeiro[1].descricao, "FAZENDEIRO: da dois cafes de graca no fim da batalha"); fazendeiro[1].id = 7; fazendeiro[1].lvl = 2; fazendeiro[1].exp = 0;
	strcpy(fazendeiro[2].nome, "Fazendeiro3"); fazendeiro[2].vida = 8; fazendeiro[2].dano = 8; strcpy(fazendeiro[2].descricao, "FAZENDEIRO: da tres cafes de graça no fim da batalha"); fazendeiro[2].id = 7; fazendeiro[2].lvl = 3; fazendeiro[2].exp = 0;
	//medico nivel 1 2 e 3 respectivamente por linha
	strcpy(medico[0].nome, "Medico"); medico[0].vida = 3; medico[0].dano = 4; strcpy(medico[0].descricao, "MEDICO: cura o da frente em 1 por turno"); medico[0].id = 8; medico[0].lvl = 1; medico[0].exp = 0;
	strcpy(medico[1].nome, "Medico2"); medico[1].vida = 5; medico[1].dano = 5; strcpy(medico[1].descricao, "MEDICO: cura o da frente em 2 por turno"); medico[1].id = 8; medico[1].lvl = 2; medico[1].exp = 0;
	strcpy(medico[2].nome, "Medico3"); medico[2].vida = 8; medico[2].dano = 8; strcpy(medico[2].descricao, "MEDICO: cura o da frente em 3 por turno"); medico[2].id = 8; medico[2].lvl = 3; medico[2].exp = 0;
	//advogado nivel 1 2 e 3 respectivamente por linha
	strcpy(advogado[0].nome, "Advogado"); advogado[0].vida = 3; advogado[0].dano = 4; strcpy(advogado[0].descricao, "ADVOGADO: da 2 de dano a um inimigo aleatorio"); advogado[0].id = 9; advogado[0].lvl = 1; advogado[0].exp = 0;
	strcpy(advogado[1].nome, "Advogado2"); advogado[1].vida = 5; advogado[1].dano = 5; strcpy(advogado[1].descricao, "ADVOGADO: da 5 de dano a um inimigo aleatorio"); advogado[1].id = 9; advogado[1].lvl = 2; advogado[1].exp = 0;
	strcpy(advogado[2].nome, "Advogado3"); advogado[2].vida = 8; advogado[2].dano = 8; strcpy(advogado[2].descricao, "ADVOGADO: da 8 de dano a um inimigo aleatorio"); advogado[2].id = 9; advogado[2].lvl = 3; advogado[2].exp = 0;
	//policial nivel 1 2 e 3 respectivamente por linha
	strcpy(policial[0].nome, "Policial"); policial[0].vida = 4; policial[0].dano = 4; strcpy(advogado[0].descricao, "POLICIAL: da 2 de dano a TODOS os personagens"); policial[0].id = 22; policial[0].lvl = 1; policial[0].exp = 0;
	strcpy(policial[1].nome, "Policial2"); policial[1].vida = 6; policial[1].dano = 5; strcpy(advogado[1].descricao, "POLICIAL: da 5 de dano a TODOS os personagens"); policial[1].id = 22; policial[1].lvl = 2; policial[1].exp = 0;
	strcpy(policial[2].nome, "Policial3"); policial[2].vida = 9; policial[2].dano = 9; strcpy(advogado[2].descricao, "POLICIAL: da 8 de dano a TODOS os personagens"); policial[2].id = 22; policial[2].lvl = 3; policial[2].exp = 0;
	//vendedor nivel 1 2 e 3 respectivamente por linha
	strcpy(vendedor[0].nome, "Vendedor"); vendedor[0].vida = 2; vendedor[0].dano = 1; strcpy(vendedor[0].descricao, "VENDEDOR: ganha mais 2 moedas no fim da batalha"); vendedor[0].id = 23; vendedor[0].lvl = 1; vendedor[0].exp = 0;
	strcpy(vendedor[1].nome, "Vendedor2"); vendedor[1].vida = 5; vendedor[1].dano = 4; strcpy(vendedor[1].descricao, "VENDEDOR: ganha mais 4 moedas no fim da batalha"); vendedor[1].id = 23; vendedor[1].lvl = 2; vendedor[1].exp = 0;
	strcpy(vendedor[2].nome, "Vendedor3"); vendedor[2].vida = 7; vendedor[2].dano = 7; strcpy(vendedor[2].descricao, "VENDEDOR: ganha mais 6 moedas no fim da batalha"); vendedor[2].id = 23; vendedor[2].lvl = 3; vendedor[2].exp = 0;
	//guardacostas nivel 1 2 e 3 respectivamente por linha
	strcpy(guardacostas[0].nome, "GuardaCostas"); guardacostas[0].vida = 5; guardacostas[0].dano = 2; strcpy(guardacostas[0].descricao, "GUARDA COSTAS: da 1 de vida para o de tras a cada dano que levar"); guardacostas[0].id = 10; guardacostas[0].lvl = 1; guardacostas[0].exp = 0;
	strcpy(guardacostas[1].nome, "GuardaCostas2"); guardacostas[1].vida = 7; guardacostas[1].dano = 3; strcpy(guardacostas[1].descricao, "GUARDA COSTAS: da 2 de vida para o de tras a cada dano que levar"); guardacostas[1].id = 10; guardacostas[1].lvl = 2; guardacostas[1].exp = 0;
	strcpy(guardacostas[2].nome, "GuardaCostas3"); guardacostas[2].vida = 10; guardacostas[2].dano = 8; strcpy(guardacostas[2].descricao, "GUARDA COSTAS: da 3 de vida para o de tras a cada dano que levar"); guardacostas[2].id = 10; guardacostas[2].lvl = 3; guardacostas[2].exp = 0;
	//filhododono nivel 1 2 e 3 respectivamente por linha
	strcpy(filhododono[0].nome, "FilhoDoDono"); filhododono[0].vida = 1; filhododono[0].dano = 1; strcpy(filhododono[0].descricao, "FILHO DO DONO: da 5 de vida a todos os aliados"); filhododono[0].id = 11; filhododono[0].lvl = 1; filhododono[0].exp = 0;
	strcpy(filhododono[1].nome, "FilhoDoDono2"); filhododono[1].vida = 2; filhododono[1].dano = 2; strcpy(filhododono[1].descricao, "FILHO DO DONO: da 10 de vida a todos os aliados"); filhododono[1].id = 11; filhododono[1].lvl = 2; filhododono[1].exp = 0;
	strcpy(filhododono[2].nome, "FilhoDoDono3"); filhododono[2].vida = 3; filhododono[2].dano = 3; strcpy(filhododono[2].descricao, "FILHO DO DONO: da 15 de vida a todos os aliados"); filhododono[2].id = 11; filhododono[2].lvl = 3; filhododono[2].exp = 0;
	//bombeiro nivel 1 2 e 3 respectivamente por linha
	strcpy(bombeiro[0].nome, "Bombeiro"); bombeiro[0].vida = 5; bombeiro[0].dano = 2; strcpy(bombeiro[0].descricao, "BOMBEIRO: acrescenta 1 de dano a todos os aliados"); bombeiro[0].id = 12; bombeiro[0].lvl = 1; bombeiro[0].exp = 0;
	strcpy(bombeiro[1].nome, "Bombeiro2"); bombeiro[1].vida = 7; bombeiro[1].dano = 3; strcpy(bombeiro[1].descricao, "BOMBEIRO: acrescenta 3 de dano a todos os aliados"); bombeiro[1].id = 12; bombeiro[1].lvl = 2; bombeiro[1].exp = 0;
	strcpy(bombeiro[2].nome, "Bombeiro3"); bombeiro[2].vida = 10; bombeiro[2].dano = 8; strcpy(bombeiro[2].descricao, "BOMBEIRO: acrescenta 5 de dano a todos os aliados"); bombeiro[2].id = 12; bombeiro[2].lvl = 3; bombeiro[2].exp = 0;
	//atendente nivel 1 2 e 3 respectivamente por linha
	strcpy(atendente[0].nome, "Atendente"); atendente[0].vida = 5; atendente[0].dano = 2; strcpy(atendente[0].descricao, "ATENDENTE: dobra o dano do aliado mais da frente"); atendente[0].id = 13; atendente[0].lvl = 1; atendente[0].exp = 0;
	strcpy(atendente[1].nome, "Atendente2"); atendente[1].vida = 7; atendente[1].dano = 3; strcpy(atendente[1].descricao, "ATENDENTE: dobra o dano do aliado mais da frente"); atendente[1].id = 13; atendente[1].lvl = 2; atendente[1].exp = 0;
	strcpy(atendente[2].nome, "Atendente3"); atendente[2].vida = 10; atendente[2].dano = 8; strcpy(atendente[2].descricao, "ATENDENTE: dobra o dano do aliado mais da frente"); atendente[2].id = 13; atendente[2].lvl = 3; atendente[2].exp = 0;
	//fotografo nivel 1 2 e 3 respectivamente por linha
	strcpy(fotografo[0].nome, "Fotografo"); fotografo[0].vida = 1; fotografo[0].dano = 1; strcpy(fotografo[0].descricao, "FOTOGRAFO: da instakill"); fotografo[0].id = 14; fotografo[0].lvl = 1; fotografo[0].exp = 0;
	strcpy(fotografo[1].nome, "Fotografo2"); fotografo[1].vida = 1; fotografo[1].dano = 1; strcpy(fotografo[1].descricao, "FOTOGRAFO: da instakill"); fotografo[1].id = 14; fotografo[1].lvl = 2; fotografo[1].exp = 0;
	strcpy(fotografo[2].nome, "Fotografo3"); fotografo[2].vida = 2; fotografo[2].dano = 2; strcpy(fotografo[2].descricao, "FOTOGRAFO: da instakill"); fotografo[2].id = 14; fotografo[2].lvl = 3; fotografo[2].exp = 0;
	//fotografo nivel 1 2 e 3 respectivamente por linha
	strcpy(mecanico[0].nome, "Mecanico"); mecanico[0].vida = 2; mecanico[0].dano = 3; strcpy(mecanico[0].descricao, "MECANICO: invoca um carro 3/3"); mecanico[0].id = 15; mecanico[0].lvl = 1; mecanico[0].exp = 0;
	strcpy(mecanico[1].nome, "Mecanico2"); mecanico[1].vida = 4; mecanico[1].dano = 4; strcpy(mecanico[1].descricao, "MECANICO: invoca um carro 6/6"); mecanico[1].id = 15; mecanico[1].lvl = 2; mecanico[1].exp = 0;
	strcpy(mecanico[2].nome, "Mecanico3"); mecanico[2].vida = 7; mecanico[2].dano = 6; strcpy(mecanico[2].descricao, "MECANICO: invoca um carro 15/15"); mecanico[2].id = 15; mecanico[2].lvl = 3; mecanico[2].exp = 0;
	//cantor nivel 1 2 e 3 respectivamente por linha
	strcpy(cantor[0].nome, "Cantor"); cantor[0].vida = 1; cantor[0].dano = 1; strcpy(cantor[0].descricao, "CANTOR: ao morrer acrescenta 1 de dano a todos os aliados"); cantor[0].id = 16; cantor[0].lvl = 1; cantor[0].exp = 0;
	strcpy(cantor[1].nome, "Cantor2"); cantor[1].vida = 5; cantor[1].dano = 5; strcpy(cantor[1].descricao, "CANTOR: ao morrer acrescenta 4 de dano a todos os aliados"); cantor[1].id = 16; cantor[1].lvl = 2; cantor[1].exp = 0;
	strcpy(cantor[2].nome, "Cantor3"); cantor[2].vida = 15; cantor[2].dano = 15; strcpy(cantor[2].descricao, "CANTOR: ao morrer acrescenta 6 de dano a todos os aliados"); cantor[2].id = 16; cantor[2].lvl = 3; cantor[2].exp = 0;
	//salvavidas nivel 1 2 e 3 respectivamente por linha
	strcpy(salvavidas[0].nome, "SalvaVidas"); salvavidas[0].vida = 2; salvavidas[0].dano = 2; strcpy(salvavidas[0].descricao, "SALVA VIDAS: cura o da frente em 1 por turno"); salvavidas[0].id = 17; salvavidas[0].lvl = 1; salvavidas[0].exp = 0;
	strcpy(salvavidas[1].nome, "SalvaVidas2"); salvavidas[1].vida = 5; salvavidas[1].dano = 5; strcpy(salvavidas[1].descricao, "SALVA VIDAS: cura o da frente em 2 por turno"); salvavidas[1].id = 17; salvavidas[1].lvl = 2; salvavidas[1].exp = 0;
	strcpy(salvavidas[2].nome, "SalvaVidas3"); salvavidas[2].vida = 15; salvavidas[2].dano = 15; strcpy(salvavidas[2].descricao, "SALVA VIDAS: cura o da frente em 3 por turno"); salvavidas[2].id = 17; salvavidas[2].lvl = 3; salvavidas[2].exp = 0;
	//cozinheiro nivel 1 2 e 3 respectivamente por linha
	strcpy(cozinheiro[0].nome, "Cozinheiro"); cozinheiro[0].vida = 4; cozinheiro[0].dano = 3; strcpy(cozinheiro[0].descricao, "COZINHEIRO: da uma pera de graça no fim da batalha"); cozinheiro[0].id = 18; cozinheiro[0].lvl = 1; cozinheiro[0].exp = 0;
	strcpy(cozinheiro[1].nome, "Cozinheiro2"); cozinheiro[1].vida = 5; cozinheiro[1].dano = 5; strcpy(cozinheiro[1].descricao, "COZINHEIRO: da uma banana de graça no fim da batalha"); cozinheiro[1].id = 18; cozinheiro[1].lvl = 2; cozinheiro[1].exp = 0;
	strcpy(cozinheiro[2].nome, "Cozinheiro3"); cozinheiro[2].vida = 7; cozinheiro[2].dano = 6; strcpy(cozinheiro[2].descricao, "COZINHEIRO: da um caviar de graça no fim da batalha"); cozinheiro[2].id = 18; cozinheiro[2].lvl = 3; cozinheiro[2].exp = 0;
	//artista nivel 1 2 e 3 respectivamente por linha
	strcpy(artista[0].nome, "Artista"); artista[0].vida = 1; artista[0].dano = 1; strcpy(artista[0].descricao, "ARTISTA: ganha mais 1 moedas no fim da batalha"); artista[0].id = 19; artista[0].lvl = 1; artista[0].exp = 0; 
	strcpy(artista[1].nome, "Artista2"); artista[1].vida = 5; artista[1].dano = 5; strcpy(artista[1].descricao, "ARTISTA: ganha mais 3 moedas no fim da batalha"); artista[1].id = 19; artista[1].lvl = 2; artista[1].exp = 0; 
	strcpy(artista[2].nome, "Artista3"); artista[2].vida = 15; artista[2].dano = 15; strcpy(artista[2].descricao, "ARTISTA: ganha mais 8 moedas no fim da batalha"); artista[2].id = 19; artista[2].lvl = 3; artista[2].exp = 0; 
	//biologo nivel 1 2 e 3 respectivamente por linha
	strcpy(biologo[0].nome, "Biologo"); biologo[0].vida = 2; biologo[0].dano = 3; strcpy(biologo[0].descricao, "BIOLOGO: ao morrer invoca um personagem aleatorio nivel 1"); biologo[0].id = 20; biologo[0].lvl = 1; biologo[0].exp = 0; 
	strcpy(biologo[1].nome, "Biologo2"); biologo[1].vida = 4; biologo[1].dano = 5; strcpy(biologo[1].descricao, "BIOLOGO: ao morrer invoca um personagem aleatorio nivel 2"); biologo[1].id = 20; biologo[1].lvl = 2; biologo[1].exp = 0; 
	strcpy(biologo[2].nome, "Biologo3"); biologo[2].vida = 7; biologo[2].dano = 6; strcpy(biologo[2].descricao, "BIOLOGO: ao morrer invoca um personagem aleatorio nivel 3"); biologo[2].id = 20; biologo[2].lvl = 3; biologo[2].exp = 0; 
	//mendigo nivel 1 2 e 3 respectivamente por linha
	strcpy(mendigo[0].nome, "Mendigo"); mendigo[0].vida = 4; mendigo[0].dano = 4; strcpy(mendigo[0].descricao, "MENDIGO: ganha mais 5 moedas ao vender"); mendigo[0].id = 21; mendigo[0].lvl = 1; mendigo[0].exp = 0; 
	strcpy(mendigo[1].nome, "Mendigo2"); mendigo[1].vida = 6; mendigo[1].dano = 7; strcpy(mendigo[1].descricao, "MENDIGO: ganha mais 10 moedas ao vender"); mendigo[1].id = 21; mendigo[1].lvl = 2; mendigo[1].exp = 0; 
	strcpy(mendigo[2].nome, "Mendigo3"); mendigo[2].vida = 10; mendigo[2].dano = 10; strcpy(mendigo[2].descricao, "MENDIGO: ganha mais 20 moedas ao vender"); mendigo[2].id = 21; mendigo[2].lvl = 3; mendigo[2].exp = 0; 
	
	
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


void escolhe_loja(tp_compra m1[], tp_animal mao[]){
	
	int esc=0, subloja, submao, i, j;
	int dinheiro = 10;
	tp_animal troca;
	
	while(esc != 6){
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	for(i=0;i<3;i++){
		if(m1[i].carta[0].id == 0){
			strcpy(m1[i].carta[0].nome, "___");
			strcpy(m1[i].carta[0].descricao, "___");
		}
	}

		for(i=0;i<5;i++){
			if(mao[i].id == 0)
				strcpy(mao[i].nome, "___");
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
			if(mao[i].id != 0 && mao[i].lvl == 1){
				puts(mao[i].descricao);
				printf("DANO: %d , VIDA: %d, exp: %d/2 \n\n", mao[i].dano, mao[i].vida, mao[i].exp);
			}
				else if(mao[i].id != 0 && mao[i].lvl == 2){
					puts(mao[i].descricao);
					printf("DANO: %d , VIDA: %d, EXP: %d/3 \n\n", mao[i].dano, mao[i].vida, mao[i].exp);
				}
				else if(mao[i].id != 0 && mao[i].lvl == 3){
					puts(mao[i].descricao);
					printf("DANO: %d , VIDA: %d\n\n", mao[i].dano, mao[i].vida);
				}
			}
			printf("\n\n\n\n\n\n");
		}	
				
	printf("Dinheiro: %d\n", dinheiro);
	printf("%s %s %s %s %s \n\n", mao[4], mao[3], mao[2], mao[1], mao[0]);
	printf("%s %s %s \n", m1[0].carta[0].nome, m1[1].carta[0].nome, m1[2].carta[0].nome);
	
	printf("1 para contratar, 2 para ler a descricao, 3 rerolar, 4 para vender, 5 para reposicionar, 6 para batalhar: ");
	scanf("%d", &esc);
	if(esc == 1 && dinheiro >= 3){
		printf("digite qual voce quer contratar: ");
		scanf("%d", &subloja);
		if(subloja < 4 && subloja > 0 && m1[subloja-1].carta[0].id!=0){
			printf("a posicao que voce quer colocar: ");
			scanf("%d", &submao);
			if(submao < 6 && submao > 0 && mao[submao-1].id == 0){
				mao[submao-1]= m1[subloja-1].carta[0];
				m1[subloja-1].carta[0].id = 0;
				dinheiro-=3;
			}
			else if(submao < 6 && submao > 0 && mao[submao-1].id == m1[subloja-1].carta[0].id && mao[submao-1].lvl != 3){
				mao[submao-1].exp += 1;
				m1[subloja-1].carta[0].id = 0;
				dinheiro-=3;
				if(mao[submao-1].lvl == 1 && mao[submao-1].exp == 2){
					mao[submao-1]= m1[subloja-1].carta[1];
				}
				else if(mao[submao-1].lvl == 2 && mao[submao-1].exp == 3){
					mao[submao-1]= m1[subloja-1].carta[2];
				}
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
		if (mao[subloja-1].id != 0 && subloja>=1 && subloja<=5){
			if(mao[subloja-1].id == 21 && mao[subloja-1].lvl == 1){
				dinheiro += 6;
				mao[subloja-1].id = 0;}
			else if (mao[subloja-1].id == 21 && mao[subloja-1].lvl == 2){
				dinheiro += 11;
				mao[subloja-1].id = 0;}
			else if (mao[subloja-1].id == 21 && mao[subloja-1].lvl == 3){
				dinheiro += 21;
				mao[subloja-1].id = 0;}
			else{
				dinheiro += 1;
				mao[subloja-1].id = 0;}
			}
		}
	if(esc == 5){
		printf("digite quais posicoes voce quer trocar: ");
		scanf("%d %d", &subloja , &submao);
		if (subloja != submao && subloja > 0 && submao > 0 && subloja < 6 && subloja < 6){
			troca = mao[subloja-1];
			mao[subloja-1] = mao[submao-1];
			mao[submao-1] = troca;
		}
		
	}
	}
}



void limpa_mao(tp_animal mao[]){
	int i;
	for(i=0;i<5;i++){
		mao[i].id = 0;
	}
}

#endif
