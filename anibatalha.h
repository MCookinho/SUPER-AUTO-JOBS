#ifndef ANIBATALHA_H
#define ANIBATALHA_H
#include "animain.h"
#include "animao.h"
#include "randname.h"
#include <unistd.h>
#define MAX 10

typedef struct
{
    tp_animal item[MAX];
    int ini,fim;
    // int tam;
}tp_fila;

void inicializa_Fila(tp_fila *f){

    f->ini = f->fim = MAX -1;

}

int filaVazia(tp_fila *f){

    if (f->ini == f->fim)
    {
        return 1;
    } return 0;
    
}

int proximo(int pos){

    if (pos == MAX -1)// checa se a posição é a mesma da ultima posição da fila.
    {
        return 0;
    } return ++pos;
    
}

int filaCheia(tp_fila *f){

    if (proximo(f->fim) == f->ini)
    {
        return 1;
    } return 0;
    
}


int insereFila(tp_fila *f, tp_animal e){

    if (filaCheia(f))
    {
        return 0;//Não foi possivel adiconar a fila.
    }
    
    f->fim = proximo(f->fim);
    f->item[f->fim] = e;
// f->tam++;
    return 1;
}

int removeFila(tp_fila *f, tp_animal *e){
    if (filaVazia(f))
    {
        return 0;// Não foi possivel remover da fila.
    }
    f->ini = proximo(f->ini);
    *e = f->item[f->ini];
    // f-> tam--;
    return 1;
}

void imprimeFilaNomesCpu(tp_fila f ){

    tp_animal e;
    while (!filaVazia(&f))
    {
        removeFila(&f, &e);
        printf("%s ", e.nome);
    }
    
}
void imprimeFilaNomesPlayer(tp_fila f ){
	tp_animal aux[5];
	int i=0;
    tp_animal e;
    while (!filaVazia(&f))
    {
        removeFila(&f, &e);
        aux[i] = e;
        i++;
    }
    while(i != 0){
    	printf("%s ", aux[i-1].nome);
    	i--;
	}

}

void imprimeFilaStatsCpu(tp_fila f ){

    tp_animal e;
    while (!filaVazia(&f))
    {
        removeFila(&f, &e);
        printf("(%d , %d) ", e.dano , e.vida);
    }
    
}

void imprimeFilaStatsPlayer(tp_fila f ){
	tp_animal aux[5];
	int i=0;
    tp_animal e;
    while (!filaVazia(&f))
    {
        removeFila(&f, &e);
        aux[i] = e;
        i++;
    }
    while(i != 0){
    	printf("(%d , %d) ", aux[i-1].dano, aux[i-1].vida);
    	i--;
	}

}


//duas opções de codigo do tamanho_fila
int tamanho_Fila(tp_fila *f){
    if(filaVazia(f)) return 0;
    if(f->ini < f->fim) return f->fim - f->ini;
    return MAX - 1 - f->ini + f->fim + 1;
}

int tamanho_Fila1(tp_fila f){
    int cont = 0;
    tp_animal e;
    while (!filaVazia(&f))
    {
        removeFila(&f,&e);
        cont++; 
    }
    return cont;
}

void faz_filas_batalha(tp_animal mao[], tp_animal cpu[], tp_fila *filajogador, tp_fila *filacpu){
	int i;
	inicializa_Fila(filajogador);
	inicializa_Fila(filacpu);
	for(i=0; i<5; i++){
		if(mao[i].id != 0)
		insereFila(filajogador, mao[i]);
	}
	for(i=0; i<5; i++){
		if(cpu[i].id != 0)
		insereFila(filacpu, cpu[i]);
	}
}

/*habilidades_previas(tp_fila *filajogador, tp_fila *filacpu){
		int i, j, posop;
		tp_animal mao[5], cpu[5], aux;
		
		for(i=0; !filaVazia(filajogador); i++){
			removeFila(filajogador, &aux);
			mao[i] = aux;
		}
		for(i=0; !filaVazia(filacpu); i++){
			removeFila(filacpu, &aux);
			cpu[i] = aux;
		}
		
		for(i=0; i<5; i++){
			switch(mao[i].id){

			case 2:
				for(j=0; j<5; j++){
					if(cpu[j].id!=)
				}
				if(mao[i].lvl == 1){
					
				}
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
		
	}
} */


void batalha(tp_compra mao[], tp_nome_equipe nomeplayer, tp_nome_equipe nomecpu, int *vidaplayer, int *vidacpu){
	tp_animal oponente[5], maoaux[5], frentejogador, frenteoponente;
	tp_fila filajogador, filacpu;
	int i, turno=1;
	
	frentejogador.vida=0; frenteoponente.vida=0;
	
	
	for(i=0; i<5; i++){
		maoaux[i] = mao[i].carta[0];	
	}
	
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
	faz_filas_batalha(maoaux, oponente, &filajogador, &filacpu);
	
	while((!filaVazia(&filajogador)  || frentejogador.vida >= 1) && (!filaVazia(&filacpu)  || frenteoponente.vida >= 1)){
		if(frentejogador.vida <= 0){
			removeFila(&filajogador, &frentejogador);
		}
		if(frenteoponente.vida <= 0){
			removeFila(&filacpu, &frenteoponente);
		}
		
		printf("%s %s |-----------------------------------VS-----------------------------------| %s %s\n",nomeplayer.substantivo , nomeplayer.adjetivo, nomecpu.substantivo , nomecpu.adjetivo );
		printf("TURNO %d:\n\n\n\n",turno);
		imprimeFilaNomesPlayer(filajogador); printf("%s                           %s ",frentejogador.nome, frenteoponente.nome ); imprimeFilaNomesCpu(filacpu); printf("\n");
		imprimeFilaStatsPlayer(filajogador); printf("(%d, %d)                           (%d, %d) ", frentejogador.dano, frentejogador.vida, frenteoponente.dano,  frenteoponente.vida); imprimeFilaStatsCpu(filacpu); printf("\n");
		printf("\n\n\n\n\n");
		
		frenteoponente.vida -= frentejogador.dano;
		frentejogador.vida -= frenteoponente.dano;
		turno++;
		sleep(3);
	}
	
	printf("\n\n\n\n\n\n\n\n\n");
	
	if(filaVazia(&filajogador) && !filaVazia(&filacpu) && frentejogador.vida <= 0 && frenteoponente.vida >= 0){
		*vidaplayer -= 1;
		printf("OPONENTE GANHOU!!!");
	}
	else if(filaVazia(&filacpu) && !filaVazia(&filajogador) && frenteoponente.vida <= 0 && frentejogador.vida >= 0){
		*vidacpu -= 1;
		printf("VOCE GANHOU!!!");
	}
	else{
		printf("EMPATE!!!");
	}

}
	
	
	












#endif