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

    if (pos == MAX -1)// checa se a posiÃ§Ã£o Ã© a mesma da ultima posiÃ§Ã£o da fila.
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
        return 0;//NÃ£o foi possivel adiconar a fila.
    }
    
    f->fim = proximo(f->fim);
    f->item[f->fim] = e;
// f->tam++;
    return 1;
}

int removeFila(tp_fila *f, tp_animal *e){
    if (filaVazia(f))
    {
        return 0;// NÃ£o foi possivel remover da fila.
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


//duas opcoes de codigo do tamanho_fila
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

void skills(tp_fila *filajogador, tp_fila *filacpu, tp_animal *frentejogador, tp_animal *frenteoponente, int turno){
	tp_animal zerar, duble_player, duble_cpu, mao[5], cpu[5];
	zerar.id = 0;
	int i, j, bprogcpu=0, bprofcpu=0, bprogplayer=0, bprofplayer=0;
	for(i=0; i<5; i++){
		mao[i] = zerar;
	}
	for(i=0; i<5; i++){
		cpu[i] = zerar;
	}
	
	if(frentejogador->id != 0){
		mao[0]= *frentejogador;
		for(i=1; !filaVazia(filajogador) ; i++){
			removeFila(filajogador, &mao[i]);
	}}
	if(frenteoponente->id != 0){
		cpu[0]= *frenteoponente;
		for(i=1; !filaVazia(filacpu) ; i++){
			removeFila(filacpu, &cpu[i]);
	}}
	else{
		for(i=0; !filaVazia(filajogador) ; i++){
		removeFila(filajogador, &mao[i]);
	}
		for(i=0; !filaVazia(filacpu) ; i++){
			removeFila(filacpu, &cpu[i]);
		}
	}
	frentejogador->vida = 0;
	frenteoponente->vida = 0;
	frentejogador->id = 0;
	frenteoponente->id = 0;
	
	
	for(i=1; !filaVazia(filajogador) ; i++){//tranforma fila em um vetor
		removeFila(filajogador, &mao[i]);
	}
	for(i=1; !filaVazia(filacpu) ; i++){
		removeFila(filacpu, &cpu[i]);
	}
	
	
	for(i=0; i<5; i++){ //verifica se tem professor
		if(cpu[i].id == 1){
			if(cpu[i].lvl == 3){
				bprofcpu=3;
			}
			else if(cpu[i].lvl == 2){
				bprofcpu=2;
			}
			else if(cpu[i].lvl == 1){
				bprofcpu=1;
			}	
			
		}
		if(mao[i].id == 6){
			if(mao[i].lvl == 3){
				bprofplayer=3;
			}
			else if(mao[i].lvl == 2){
				bprofplayer=2;
			}
			else if(mao[i].lvl == 1){
				bprofplayer=1;
			}	
			
		}
			
	}
	
	
	//habilidades do jogador
	printf("VOCE: ");
	for(i=0; i<5; i++){
			if(turno == 1){  //de primeiro turno
				if(mao[i].id == 3){
					strcpy(duble_player.nome, "Duble");
					duble_player.dano = mao[i].dano;
					duble_player.vida = mao[i].vida;
					duble_player.id = 30;
				}
				if(mao[i].id == 4){
					if(mao[i].lvl == 1){
						mao[i+1].vida += 2;
						mao[i+2].vida += 2;
						printf("Arquiteto deu 2 de vida para os 2 de tras, ");
					}
					else if(mao[i].lvl == 2){
						mao[i+1].vida += 4;
						mao[i+2].vida += 4;
						printf("Arquiteto deu 4 de vida para os 2 de tras, ");
					}
					else if(mao[i].lvl == 3){
						mao[i+1].vida += 6;
						mao[i+2].vida += 6;
						printf("Arquiteto deu 6 de vida para os 2 de tras, ");
					}
				}
				if(mao[i].id == 2){
					for(j=0; cpu[j].id != 0; j++){}
					if(mao[i].lvl == 1){
						cpu[j-1].vida -= 2;
						printf("Jornalista deu 2 dano no ultimo, ");
					}
					else if(mao[i].lvl == 2){
						cpu[j-1].vida -= 5;
						printf("Jornalista deu 5 dano no ultimo, ");
					}
					else if(mao[i].lvl == 3){
						cpu[j-1].vida -= 8;
						printf("Jornalista deu 8 dano no ultimo, ");
					}
				
				}
				if(mao[i].id == 9){
					if(mao[i].lvl == 1){
						cpu[0].vida -= 2;
						printf("Advogado deu 2 dano no primeiro, ");
					}
					else if(mao[i].lvl == 2){
						cpu[0].vida -= 5;
						printf("Advogado deu 5 dano no primeiro, ");
					}
					else if(mao[i].lvl == 3){
						cpu[0].vida -= 8;
						printf("Advogado deu 8 dano no primeiro, ");
					}
				
			}	
				if(mao[i].id == 22){
					if(mao[i].lvl == 1){
						for(j=0; j<5; j++){
							if(j!=i)
								mao[j].vida -= 2; 
							cpu[j].vida -= 2;}
						printf("Policial deu 2 dano a TODOS, ");
					}
					else if(mao[i].lvl == 2){
						for(j=0; j<5; j++){
							if(j!=i)
								mao[j].vida -= 5; 
							cpu[j].vida -= 5;}
						printf("Policial deu 5 dano a TODOS, ");
					}
					else if(mao[i].lvl == 3){
						for(j=0; j<5; j++){
							if(j!=i)
								mao[j].vida -= 8; 
							cpu[j].vida -= 8;}
						printf("Policial deu 8 dano a TODOS, ");
					}
				
			}
				if(mao[i].id == 11){
					if(mao[i].lvl == 1){
						for(j=0; j<5; j++){
							if(j!=i)
								mao[j].vida += 5;}
						printf("Filho do dono deu 5 de vida aos aliados, ");
					}
					else if(mao[i].lvl == 2){
						for(j=0; j<5; j++){
							if(j!=i)
								mao[j].vida += 10;}
						printf("Filho do dono deu 10 de vida aos aliados, ");
					}
					else if(mao[i].lvl == 3){
						for(j=0; j<5; j++){
							if(j!=i)
								mao[j].vida += 15;}
						printf("Filho do dono deu 15 de vida aos aliados, ");
					}
				
			}	
				if(mao[i].id == 12){
					if(mao[i].lvl == 1){
						for(j=0; j<5; j++){
							if(j!=i)
								mao[j].dano += 1;}
						printf("Bombeiro acrescentou 1 de dano aos aliados, ");
					}
					else if(mao[i].lvl == 2){
						for(j=0; j<5; j++){
							if(j!=i)
								mao[j].dano += 3;}
						printf("Bombeiro acrescentou 3 de dano aos aliados, ");
					}
					else if(mao[i].lvl == 3){
						for(j=0; j<5; j++){
							if(j!=i)
								mao[j].dano += 5;}
						printf("Bombeiro acrescentou 5 de dano aos aliados, ");
					}
				
			}
				if(mao[i].id == 13){
					if(mao[i].lvl == 1){
						mao[0].dano *= 2;
						printf("Atendente dobrou o dano do aliado da linha de frente, ");
					}
					else if(mao[i].lvl == 2){
						mao[0].dano *= 2;
						printf("Atendente dobrou o dano do aliado da linha de frente, ");
					}
					else if(mao[i].lvl == 3){
						mao[0].dano *= 2;
						printf("Atendente dobrou o dano do aliado da linha de frente, ");
					}
				
			}
				if(mao[i].id == 14){
					if(mao[i].lvl == 1){
						mao[i].id = 0;
						printf("Fotografo morreu de fome, ");
					}
					else if(mao[i].lvl == 2){
						mao[i].dano += 20;
						printf("Fotografo ganhou 20 de dano, ");
					}
					else if(mao[i].lvl == 3){
						mao[i].dano += 100;
						printf("Fotografo ganhou 100 de dano, ");
					}
				
			}
	}
			if(mao[i].vida <= 0 ){ //de morte
				
				if(mao[i].id == 5 ){
					tp_animal carro;
					strcpy(carro.nome, "Carro"); carro.id = 30; 
					if(mao[i].lvl == 1){
						carro.vida = 5; carro.dano = 5;
					}
					else if(mao[i].lvl == 2){
						 carro.vida = 8; carro.dano = 8;
					}
					else if(mao[i].lvl == 3){
						 carro.vida = 12; carro.dano = 12;
					}
					mao[i] = carro;
					printf("Motorista invocou um carro, ");
					
					if(bprofplayer != 0){
						if(bprofplayer == 1){
							mao[i].dano += 1;
							printf("Professor adicionou 1 de dano ao invocado, ");
						}
						else if(bprofplayer == 2){
							mao[i].dano += 2;
							mao[i].vida += 2;
							printf("Professor adicionou 2 de dano e 2 de vida ao invocado, ");
						}
						else if(bprofplayer == 3){
							mao[i].dano += 4;
							mao[i].vida += 3;
							printf("Professor adicionou 4 de dano e 3 de vida ao invocado, ");
						}}
			}
				if(mao[i].id == 15 ){
					tp_animal carro;
					strcpy(carro.nome, "Carro"); carro.id = 30; 
					if(mao[i].lvl == 1){
						carro.vida = 3; carro.dano = 3;
					}
					else if(mao[i].lvl == 2){
						 carro.vida = 6; carro.dano = 6;
					}
					else if(mao[i].lvl == 3){
						 carro.vida = 15; carro.dano = 15;
					}
					mao[i] = carro;
					printf("Mecanico invocou um carro, ");
					
					if(bprofplayer != 0){
						if(bprofplayer == 1){
							mao[i].dano += 1;
							printf("Professor adicionou 1 de dano ao invocado, ");
						}
						else if(bprofplayer == 2){
							mao[i].dano += 2;
							mao[i].vida += 2;
							printf("Professor adicionou 2 de dano e 2 de vida ao invocado, ");
						}
						else if(bprofplayer == 3){
							mao[i].dano += 4;
							mao[i].vida += 3;
							printf("Professor adicionou 4 de dano e 3 de vida ao invocado, ");
						}}
			}	
				if(mao[i].id == 16 ){
					if(mao[i].lvl == 1){
						for(j=0; j<5; j++){
							if(j!=i)
								mao[j].dano += 1;}
						printf("Cantor acrescentou 1 de dano aos aliados, ");
					}
					else if(mao[i].lvl == 2){
						for(j=0; j<5; j++){
							if(j!=i)
								mao[j].dano += 4;}
						printf("Cantor acrescentou 4 de dano aos aliados, ");
					}
					else if(mao[i].lvl == 3){
						for(j=0; j<5; j++){
							if(j!=i)
								mao[j].dano += 6;}
						printf("Cantor acrescentou 6 de dano aos aliados, ");
					}
			}
				if(mao[i].id == 20 ){
					tp_compra rngbio[3];
					if(mao[i].lvl == 1){
						faz_loja(rngbio);
						mao[i] = rngbio[0].carta[0];
						printf("Biologo invocou um aliado, ");
					}
					else if(mao[i].lvl == 2){
						faz_loja(rngbio);
						mao[i] = rngbio[0].carta[1];
						printf("Biologo invocou um aliado, ");
					}
					else if(mao[i].lvl == 3){
						faz_loja(rngbio);
						mao[i] = rngbio[0].carta[2];
						printf("Biologo invocou um aliado, ");
					}	
					
					if(bprofplayer != 0){
						if(bprofplayer == 1){
							mao[i].dano += 1;
							printf("Professor adicionou 1 de dano ao invocado, ");
						}
						else if(bprofplayer == 2){
							mao[i].dano += 2;
							mao[i].vida += 2;
							printf("Professor adicionou 2 de dano e 2 de vida ao invocado, ");
						}
						else if(bprofplayer == 3){
							mao[i].dano += 4;
							mao[i].vida += 3;
							printf("Professor adicionou 4 de dano e 3 de vida ao invocado, ");
						}}
			}
				if(mao[i].id == 3){
					mao[i] = duble_player;
					printf("Ator invocou um duble, ");
					if(bprofplayer != 0){
						if(bprofplayer == 1){
							mao[i].dano += 1;
							printf("Professor adicionou 1 de dano ao invocado, ");
						}
						else if(bprofplayer == 2){
							mao[i].dano += 2;
							mao[i].vida += 2;
							printf("Professor adicionou 2 de dano e 2 de vida ao invocado, ");
						}
						else if(bprofplayer == 3){
							mao[i].dano += 4;
							mao[i].vida += 3;
							printf("Professor adicionou 4 de dano e 3 de vida ao invocado, ");
						}}
				}

			}
			
			if(i == 1){ //de dianteira
				if(mao[i].id == 8){
				
					if(mao[i].lvl == 1){
						mao[0].vida += 1;
						printf("Medico curou o da frente em 1, ");
					}
					else if(mao[i].lvl == 2){
						mao[0].vida += 2;
						printf("Medico curou o da frente em 2, ");
					}
					else if(mao[i].lvl == 3){
						mao[0].vida += 3;
						printf("Medico curou o da frente em 3, ");
					}	
				}
				
				if(mao[i].id == 17){
					if(mao[i].lvl == 1){
						mao[0].vida += 1;
						printf("Salva-Vidas curou o da frente em 1, ");
					}
					else if(mao[i].lvl == 2){
						mao[0].vida += 2;
						printf("Salva-Vidas curou o da frente em 2, ");
					}
					else if(mao[i].lvl == 3){
						mao[0].vida += 3;
						printf("Salva-Vidas curou o da frente em 3, ");
					}	
				}
			}
			
			if(mao[0].id == 10 && i==0){ 
				if(mao[i].lvl == 1){
					mao[1].vida += 1;
					printf("Guarda-Costas curou o de tras em 1, ");
				}
				else if(mao[i].lvl == 2){
					mao[1].vida += 2;
					printf("Guarda-Costas curou o de tras em 3, ");
				}
				else if(mao[i].lvl == 3){
					mao[1].vida += 3;
					printf("Guarda-Costas curou o de tras em 2, ");
				}	
			}
			
			if(mao[i].id == 11){
				if(mao[i].lvl == 1 && turno > 1){
					printf("Filho do dono foi dormir, ");
					mao[i].id = 0;}
				if(mao[i].lvl == 2 && turno > 2){
					printf("Filho do dono foi dormir, ");
					mao[i].id = 0;}
				if(mao[i].lvl == 3 && turno > 3){
					printf("Filho do dono foi dormir, ");
					mao[i].id = 0;}
			}
	}
	//habilidades da cpu
	printf("\nOPONENTE: ");
	for(i=0; i<5; i++){
		//primeiro turno
			if(turno == 1){  //de primeiro turno
				if(cpu[i].id == 3){
					strcpy(duble_cpu.nome, "Duble");
					duble_cpu.dano = cpu[i].dano;
					duble_cpu.vida = cpu[i].vida;
					duble_cpu.id = 30;
				}
				if(cpu[i].id == 4){
					if(cpu[i].lvl == 1){
						cpu[i+1].vida += 2;
						cpu[i+2].vida += 2;
						printf("Arquiteto deu 2 de vida para os 2 de tras, ");
					}
					else if(cpu[i].lvl == 2){
						cpu[i+1].vida += 4;
						cpu[i+2].vida += 4;
						printf("Arquiteto deu 4 de vida para os 2 de tras, ");
					}
					else if(cpu[i].lvl == 3){
						cpu[i+1].vida += 6;
						cpu[i+2].vida += 6;
						printf("Arquiteto deu 6 de vida para os 2 de tras, ");
					}
				}
				if(cpu[i].id == 2){
					for(j=0; mao[j].id != 0; j++){}
					if(cpu[i].lvl == 1){
						mao[j-1].vida -= 2;
						printf("Jornalista deu 2 dano no ultimo, ");
					}
					else if(cpu[i].lvl == 2){
						mao[j-1].vida -= 5;
						printf("Jornalista deu 5 dano no ultimo, ");
					}
					else if(cpu[i].lvl == 3){
						mao[j-1].vida -= 8;
						printf("Jornalista deu 8 dano no ultimo, ");
					}
				
				}
				if(cpu[i].id == 9){
					if(cpu[i].lvl == 1){
						mao[0].vida -= 2;
						printf("Advogado deu 2 dano no primeiro, ");
					}
					else if(cpu[i].lvl == 2){
						mao[0].vida -= 5;
						printf("Advogado deu 5 dano no primeiro, ");
					}
					else if(cpu[i].lvl == 3){
						mao[0].vida -= 8;
						printf("Advogado deu 8 dano no primeiro, ");
					}
				
			}	
				if(cpu[i].id == 22){
					if(cpu[i].lvl == 1){
						for(j=0; j<5; j++){
							if(j!=i)
								cpu[j].vida -= 2; 
							mao[j].vida -= 2;}
						printf("Policial deu 2 dano a TODOS, ");
					}
					else if(cpu[i].lvl == 2){
						for(j=0; j<5; j++){
							if(j!=i)
								cpu[j].vida -= 5; 
							mao[j].vida -= 5;}
						printf("Policial deu 5 dano a TODOS, ");
					}
					else if(cpu[i].lvl == 3){
						for(j=0; j<5; j++){
							if(j!=i)
								cpu[j].vida -= 8; 
							mao[j].vida -= 8;}
						printf("Policial deu 8 dano a TODOS, ");
					}
				
			}
				if(cpu[i].id == 11){
					if(cpu[i].lvl == 1){
						for(j=0; j<5; j++){
							if(j!=i)
								cpu[j].vida += 5;}
						printf("Filho do dono deu 5 de vida aos aliados, ");
					}
					else if(cpu[i].lvl == 2){
						for(j=0; j<5; j++){
							if(j!=i)
								cpu[j].vida += 10;}
						printf("Filho do dono deu 10 de vida aos aliados, ");
					}
					else if(cpu[i].lvl == 3){
						for(j=0; j<5; j++){
							if(j!=i)
								cpu[j].vida += 15;}
						printf("Filho do dono deu 15 de vida aos aliados, ");
					}
				
			}	
				if(cpu[i].id == 12){
					if(cpu[i].lvl == 1){
						for(j=0; j<5; j++){
							if(j!=i)
								cpu[j].dano += 1;}
						printf("Bombeiro acrescentou 1 de dano aos aliados, ");
					}
					else if(cpu[i].lvl == 2){
						for(j=0; j<5; j++){
							if(j!=i)
								cpu[j].dano += 3;}
						printf("Bombeiro acrescentou 3 de dano aos aliados, ");
					}
					else if(cpu[i].lvl == 3){
						for(j=0; j<5; j++){
							if(j!=i)
								cpu[j].dano += 5;}
						printf("Bombeiro acrescentou 5 de dano aos aliados, ");
					}
				
			}
				if(cpu[i].id == 13){
					if(cpu[i].lvl == 1){
						cpu[0].dano *= 2;
						printf("Atendente dobrou o dano do aliado da linha de frente, ");
					}
					else if(cpu[i].lvl == 2){
						cpu[0].dano *= 2;
						printf("Atendente dobrou o dano do aliado da linha de frente, ");
					}
					else if(cpu[i].lvl == 3){
						cpu[0].dano *= 2;
						printf("Atendente dobrou o dano do aliado da linha de frente, ");
					}
				
			}
				if(cpu[i].id == 14){
					if(cpu[i].lvl == 1){
						cpu[i].id = 0;
						printf("Fotografo morreu de fome, ");
					}
					else if(cpu[i].lvl == 2){
						cpu[i].dano += 20;
						printf("Fotografo ganhou 20 de dano, ");
					}
					else if(cpu[i].lvl == 3){
						cpu[i].dano += 100;
						printf("Fotografo ganhou 100 de dano, ");
					}
				
			}
	}
			if(cpu[i].vida <= 0 ){
				
				if(cpu[i].id == 5 ){
					tp_animal carro;
					strcpy(carro.nome, "Carro"); carro.id = 30; 
					if(cpu[i].lvl == 1){
						carro.vida = 5; carro.dano = 5;
					}
					else if(cpu[i].lvl == 2){
						 carro.vida = 8; carro.dano = 8;
					}
					else if(cpu[i].lvl == 3){
						 carro.vida = 12; carro.dano = 12;
					}
					cpu[i] = carro;
					printf("Motorista invocou um carro, ");
					
					if(bprofcpu != 0){
						if(bprofcpu == 1){
							cpu[i].dano += 1;
							printf("Professor adicionou 1 de dano ao invocado, ");
						}
						else if(bprofcpu == 2){
							cpu[i].dano += 2;
							cpu[i].vida += 2;
							printf("Professor adicionou 2 de dano e 2 de vida ao invocado, ");
						}
						else if(bprofcpu == 3){
							cpu[i].dano += 4;
							cpu[i].vida += 3;
							printf("Professor adicionou 4 de dano e 3 de vida ao invocado, ");
						}}
			}
				if(cpu[i].id == 15 ){
					tp_animal carro;
					strcpy(carro.nome, "Carro"); carro.id = 30; 
					if(cpu[i].lvl == 1){
						carro.vida = 3; carro.dano = 3;
					}
					else if(cpu[i].lvl == 2){
						 carro.vida = 6; carro.dano = 6;
					}
					else if(cpu[i].lvl == 3){
						 carro.vida = 15; carro.dano = 15;
					}
					cpu[i] = carro;
					printf("Mecanico invocou um carro, ");
					
					if(bprofcpu != 0){
						if(bprofcpu == 1){
							cpu[i].dano += 1;
							printf("Professor adicionou 1 de dano ao invocado, ");
						}
						else if(bprofcpu == 2){
							cpu[i].dano += 2;
							cpu[i].vida += 2;
							printf("Professor adicionou 2 de dano e 2 de vida ao invocado, ");
						}
						else if(bprofcpu == 3){
							cpu[i].dano += 4;
							cpu[i].vida += 3;
							printf("Professor adicionou 4 de dano e 3 de vida ao invocado, ");
						}}
			}	
				if(cpu[i].id == 16 ){
					if(cpu[i].lvl == 1){
						for(j=0; j<5; j++){
							if(j!=i)
								cpu[j].dano += 1;}
						printf("Cantor acrescentou 1 de dano aos aliados, ");
					}
					else if(cpu[i].lvl == 2){
						for(j=0; j<5; j++){
							if(j!=i)
								cpu[j].dano += 4;}
						printf("Cantor acrescentou 4 de dano aos aliados, ");
					}
					else if(cpu[i].lvl == 3){
						for(j=0; j<5; j++){
							if(j!=i)
								cpu[j].dano += 6;}
						printf("Cantor acrescentou 6 de dano aos aliados, ");
					}
			}
				if(cpu[i].id == 20 ){
					tp_compra rngbio[3];
					if(cpu[i].lvl == 1){
						faz_loja(rngbio);
						cpu[i] = rngbio[0].carta[0];
						printf("Biologo invocou um aliado, ");
					}
					else if(cpu[i].lvl == 2){
						faz_loja(rngbio);
						cpu[i] = rngbio[0].carta[1];
						printf("Biologo invocou um aliado, ");
					}
					else if(cpu[i].lvl == 3){
						faz_loja(rngbio);
						cpu[i] = rngbio[0].carta[2];
						printf("Biologo invocou um aliado, ");
					}	
					
					if(bprofcpu != 0){
						if(bprofcpu == 1){
							cpu[i].dano += 1;
							printf("Professor adicionou 1 de dano ao invocado, ");
						}
						else if(bprofcpu == 2){
							cpu[i].dano += 2;
							cpu[i].vida += 2;
							printf("Professor adicionou 2 de dano e 2 de vida ao invocado, ");
						}
						else if(bprofcpu == 3){
							cpu[i].dano += 4;
							cpu[i].vida += 3;
							printf("Professor adicionou 4 de dano e 3 de vida ao invocado, ");
						}}
			}
				if(cpu[i].id == 3){
					cpu[i] = duble_player;
					printf("Ator invocou um duble, ");
					
					if(bprofcpu != 0){
						if(bprofcpu == 1){
							cpu[i].dano += 1;
							printf("Professor adicionou 1 de dano ao invocado, ");
						}
						else if(bprofcpu == 2){
							cpu[i].dano += 2;
							cpu[i].vida += 2;
							printf("Professor adicionou 2 de dano e 2 de vida ao invocado, ");
						}
						else if(bprofcpu == 3){
							cpu[i].dano += 4;
							cpu[i].vida += 3;
							printf("Professor adicionou 4 de dano e 3 de vida ao invocado, ");
						}}
				}

			}
			
			if(i == 1){
				if(cpu[i].id == 8){
				
					if(cpu[i].lvl == 1){
						cpu[0].vida += 1;
						printf("Medico curou o da frente em 1, ");
					}
					else if(cpu[i].lvl == 2){
						cpu[0].vida += 2;
						printf("Medico curou o da frente em 2, ");
					}
					else if(cpu[i].lvl == 3){
						cpu[0].vida += 3;
						printf("Medico curou o da frente em 3, ");
					}	
				}
				
				if(cpu[i].id == 17){
					if(cpu[i].lvl == 1){
						cpu[0].vida += 1;
						printf("Salva-Vidas curou o da frente em 1, ");
					}
					else if(cpu[i].lvl == 2){
						cpu[0].vida += 2;
						printf("Salva-Vidas curou o da frente em 2, ");
					}
					else if(cpu[i].lvl == 3){
						cpu[0].vida += 3;
						printf("Salva-Vidas curou o da frente em 3, ");
					}	
				}
			}
			
			if(cpu[0].id == 10 && i==0){
				if(cpu[i].lvl == 1){
					cpu[1].vida += 1;
					printf("Guarda-Costas curou o de tras em 1, ");
				}
				else if(cpu[i].lvl == 2){
					cpu[1].vida += 2;
					printf("Guarda-Costas curou o de tras em 3, ");
				}
				else if(cpu[i].lvl == 3){
					cpu[1].vida += 3;
					printf("Guarda-Costas curou o de tras em 2, ");
				}	
			}
			
			if(cpu[i].id == 11){
				if(cpu[i].lvl == 1 && turno > 1){
					printf("Filho do dono foi dormir, ");
					cpu[i].id = 0;}
				if(cpu[i].lvl == 2 && turno > 2){
					printf("Filho do dono foi dormir, ");
					cpu[i].id = 0;}
				if(cpu[i].lvl == 3 && turno > 3){
					printf("Filho do dono foi dormir, ");
					cpu[i].id = 0;}
			}
		
	}
		
		
			
	for(i=0; i<5; i++){
		if(cpu[i].id == 6){
			if(cpu[i].lvl == 1){
				bprogcpu=1;
			}
			else if(cpu[i].lvl == 2){
				bprogcpu=2;
			}
			else if(cpu[i].lvl == 3){
				bprogcpu=3;
			}	
			
		}
		if(mao[i].id == 6){
			if(mao[i].lvl == 1){
				bprogplayer=1;
			}
			else if(mao[i].lvl == 2){
				bprogplayer=2;
			}
			else if(mao[i].lvl == 3){
				bprogplayer=3;
			}	
			
		}
			
	}
	
	tp_animal malware;
	strcpy(malware.nome, "Malware"); malware.id = 30;
	
	
	
	for(i=0; i<5; i++){
		if(mao[i].vida <= 0 && mao[i].id != 0){
			if(bprogplayer!=0 && mao[i].id != 30){
				if(bprogplayer==1){
					malware.vida=1;
					malware.dano=1;
					mao[i] = malware;
				}
				else if(bprogplayer==2){
					malware.vida=3;
					malware.dano=3;
					mao[i] = malware;
				}
				
				else if(bprogplayer==3){
					malware.vida=5;
					malware.dano=5;
					mao[i] = malware;
				}
				
				if(bprofplayer != 0){
						if(bprofplayer == 1){
							mao[i].dano += 1;
						}
						else if(bprofplayer == 2){
							mao[i].dano += 2;
							mao[i].vida += 2;
						}
						else if(bprofplayer == 3){
							mao[i].dano += 4;
							mao[i].vida += 3;
						}}
			}
			else{
			mao[i].id = 0;}
		}
		
		
		if(cpu[i].vida <= 0 && cpu[i].id != 0){
			if(bprogcpu!=0 && cpu[i].id != 30){
				if(bprogcpu==1){
					malware.vida=1;
					malware.dano=1;
					cpu[i] = malware;
				}
				else if(bprogcpu==2){
					malware.vida=3;
					malware.dano=3;
					cpu[i] = malware;
				}
				
				else if(bprogcpu==3){
					malware.vida=5;
					malware.dano=5;
					cpu[i] = malware;
				}
				
				if(bprofcpu != 0){
						if(bprofcpu == 1){
							cpu[i].dano += 1;
						}
						else if(bprofcpu == 2){
							cpu[i].dano += 2;
							cpu[i].vida += 2;
						}
						else if(bprofcpu == 3){
							cpu[i].dano += 4;
							cpu[i].vida += 3;
						}}
			}
			else{
			cpu[i].id = 0;}
		}
	}
	
	
	printf("\n\n\n\n");
	faz_filas_batalha(mao, cpu, filajogador, filacpu);
	
}

void batalha(tp_compra mao[], tp_nome_equipe nomeplayer, tp_nome_equipe nomecpu, int *vidaplayer, int *vidacpu){
	tp_animal oponente[5], maoaux[5], frentejogador, frenteoponente;
	tp_fila filajogador, filacpu;
	int i, turno=1;
	
	frentejogador.vida=0; frenteoponente.vida=0; frentejogador.id=0; frenteoponente.id=0;
	
	
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

		printf("%s %s |-----------------------------------VS-----------------------------------| %s %s\n",nomeplayer.substantivo , nomeplayer.adjetivo, nomecpu.substantivo , nomecpu.adjetivo );
		printf("TURNO %d:\n\n",turno);
		
		skills(&filajogador, &filacpu, &frentejogador,&frenteoponente, turno);
		if(frentejogador.vida <= 0){
			removeFila(&filajogador, &frentejogador);
		}
		if(frenteoponente.vida <= 0){
			removeFila(&filacpu, &frenteoponente);
		}
		
		imprimeFilaNomesPlayer(filajogador); printf("%s                           %s ",frentejogador.nome, frenteoponente.nome ); imprimeFilaNomesCpu(filacpu); printf("\n");
		imprimeFilaStatsPlayer(filajogador); printf("(%d, %d)                           (%d, %d) ", frentejogador.dano, frentejogador.vida, frenteoponente.dano,  frenteoponente.vida); imprimeFilaStatsCpu(filacpu); printf("\n");
		printf("\n\n\n\n\n");
		
		frenteoponente.vida -= frentejogador.dano;
		frentejogador.vida -= frenteoponente.dano;
		turno++;
		sleep(5);
	}
	
	printf("\n\n\n\n\n\n\n\n\n");
	
	if(filaVazia(&filajogador) && frentejogador.vida <= 0 && (!filaVazia(&filacpu) || frenteoponente.vida > 0)){
		*vidaplayer -= 1;
		printf("OPONENTE GANHOU!!!");
	}
	else if(filaVazia(&filacpu) && frenteoponente.vida <= 0 && (!filaVazia(&filajogador) || frentejogador.vida > 0)){
		*vidacpu -= 1;
		printf("VOCE GANHOU!!!");
	}
	else{
		printf("EMPATE!!!");
	}
	sleep(5);

}
	
#endif
