#ifndef ANIFASES_H
#define ANIFASES_H
#include "animain.h"
#include "string.h"

void define_fase(tp_animal oponente[], int fase){
	tp_animal bombeiro, atendente, salvavidas, vazio;
	strcpy(bombeiro.nome, "Bombeiro"); bombeiro.vida = 5; bombeiro.dano = 2; strcpy(bombeiro.descricao, "BOMBEIRO: acrescenta 1 de dano a todos os aliados"); bombeiro.id = 12; bombeiro.lvl = 1; bombeiro.exp = 0;
	strcpy(atendente.nome, "Atendente"); atendente.vida = 5; atendente.dano = 2; strcpy(atendente.descricao, "ATENDENTE: dobra o dano do aliado mais da frente"); atendente.id = 13; atendente.lvl = 1; atendente.exp = 0;
	strcpy(salvavidas.nome, "SalvaVidas"); salvavidas.vida = 2; salvavidas.dano = 2; strcpy(salvavidas.descricao, "SALVA VIDAS: cura o da frente em 1 por turno"); salvavidas.id = 17; salvavidas.lvl = 1; salvavidas.exp = 0;
	vazio.id = 0;
	
	oponente[0] = bombeiro;
	oponente[1] = atendente;
	oponente[2] = salvavidas;
	oponente[3] = vazio;
	oponente[4] = vazio;	
}

#endif
