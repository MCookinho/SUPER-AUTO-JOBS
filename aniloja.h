#ifndef ANILOJA_H
#define ANILOJA_H
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include "animain.h"

typedef struct {
    tp_animal carta[3];
} tp_compra;

typedef struct tp_no{
    tp_compra compra;
    struct tp_no *prox;
}tp_loja;

tp_loja * inicializa_loja(){ // atribui NULL ao 1o no da Lista SE 
// em cÃ³digo: lista = inicializa_listase
        return NULL;
}

int loja_vazia(tp_loja *lista){
    if(lista==NULL) return 1;
    return 0;
}

tp_loja * aloca_loja(){ // ela ira alocar um espaco na memoria
    tp_loja *novo_no;
    novo_no = (tp_loja*) malloc(sizeof(tp_loja));
    return novo_no;
}

int insere_loja(tp_loja **l, tp_animal e[], int raux){ // no codigo: insere...(lista, 10...)
    tp_loja *novo_no, *atu;
    tp_compra compra;
    novo_no = aloca_loja(); // aqui esta pegando o novo no e apontando para o NULL
    if(novo_no == NULL)
        return 0; // nao aloca memoria
        
    //atribuir os valores para o novo no:
    if(e[0].id >= 100){//caso seja item
    	novo_no->compra.carta[0] = e[raux];
	    novo_no->compra.carta[1] = e[raux];
	    novo_no->compra.carta[2] = e[raux];
	    novo_no->prox = NULL;
	}
    else{//caso seja animal
	    novo_no->compra.carta[0] = e[0];
	    novo_no->compra.carta[1] = e[1];
	    novo_no->compra.carta[2] = e[2];
	    novo_no->prox = NULL;}
	    
    //finaliza o encadeamento do no
    if(loja_vazia(*l)){ // se for o primeiro no, entra aqui
        *l = novo_no;
    }

    else {
        atu = *l;
        while(atu->prox != NULL){
            atu = atu->prox; // aponta para o ultimo no
        }
        atu->prox = novo_no;
    }
    return 1;
}

void imprime_loja(tp_loja *animais, tp_loja *itens){
    tp_loja *atu;
    atu = animais;
    while(atu != NULL){
        printf("%s ", atu->compra.carta[0].nome);
        atu = atu->prox;
    }
    printf("        ");
    atu = itens;
    while(atu != NULL){
        printf("%s ", atu->compra.carta[0].nome);
        atu = atu->prox;
    }
    printf("\n\n");
}

int troca_loja(tp_loja **lista, int n, tp_compra *compra){
   	
   	if(n<1)
   		return 0;
   
    tp_loja *ant, *atu;
    atu = *lista;
    ant = NULL;
    int i;
    for(i=1;((atu != NULL) && (i < n)); i++){
        ant = atu;
        atu = atu->prox;
    }
    if(atu == NULL){
        return 0;
    }
    if(ant == NULL){
    	*compra = atu->compra;
        *lista = atu->prox;
    }
    else{
    	*compra = atu->compra;
        ant->prox = atu->prox;
    }
    free(atu);
    atu = NULL;
    return 1;
}

int da_item(tp_loja **lista, int n, tp_compra *compra){
   	
   	if(n<1)
   		return 0;
   
    tp_loja *ant, *atu;
    atu = *lista;
    ant = NULL;
    int i;
    for(i=1;((atu != NULL) && (i < n)); i++){
        ant = atu;
        atu = atu->prox;
    }
    if(atu == NULL){
        return 0;
    }
    if(ant == NULL){
    	compra->carta[0].dano += atu->compra.carta[0].dano;
    	compra->carta[0].vida += atu->compra.carta[0].dano;
    	compra->carta[1].dano += atu->compra.carta[0].dano;
    	compra->carta[1].vida += atu->compra.carta[0].dano;
    	compra->carta[2].dano += atu->compra.carta[0].dano;
    	compra->carta[2].vida += atu->compra.carta[0].dano;
        *lista = atu->prox;
    }
    else{
    	compra->carta[0].dano += atu->compra.carta[0].dano;
    	compra->carta[0].vida += atu->compra.carta[0].dano;
    	compra->carta[1].dano += atu->compra.carta[0].dano;
    	compra->carta[1].vida += atu->compra.carta[0].dano;
    	compra->carta[2].dano += atu->compra.carta[0].dano;
    	compra->carta[2].vida += atu->compra.carta[0].dano;
        ant->prox = atu->prox;
    }
    free(atu);
    atu = NULL;
    return 1;
}

int remove_loja(tp_loja **lista, int n){
   	
   	if(n<1)
   		return 0;
   
    tp_loja *ant, *atu;
    atu = *lista;
    ant = NULL;
    int i;
    for(i=1;((atu != NULL) && (i < n)); i++){
        ant = atu;
        atu = atu->prox;
    }
    if(atu == NULL){
        return 0;
    }
    if(ant == NULL){
        *lista = atu->prox;
    }
    else{
        ant->prox = atu->prox;
    }
    free(atu);
    atu = NULL;
    return 1;
}

int tamanho_loja(tp_loja *lista){
    int cont = 0;
    tp_loja *atu;
    atu = lista;
    if (atu == NULL)
    	return 0;
    do{
        cont++;
        atu = atu->prox;
    }while(atu != NULL && atu != lista);
    
    return cont;
}

void destroi_loja(tp_loja **l){
    tp_loja *atu;
    atu = *l;
    while(atu != NULL){
        *l = atu->prox;
        free(atu);
        atu = *l;
    }
    *l = NULL;
}

void faz_esc6_loja(tp_loja *animais, tp_loja *itens){
	tp_loja *atu;
    atu = animais;
    printf("FUNCIONARIOS:\n\n\n");
    while(atu != NULL){
		puts(atu->compra.carta[0].descricao);
		printf("DANO: %d , VIDA %d \n\n", atu->compra.carta[0].dano, atu->compra.carta[0].vida);
        atu = atu->prox;
		}
	atu = itens;
    printf("\n\n\nITENS:\n\n");
    while(atu != NULL){
		puts(atu->compra.carta[0].descricao);
		printf("DANO: %d , VIDA %d \n\n", atu->compra.carta[0].dano, atu->compra.carta[0].vida);
        atu = atu->prox;
		}
    }
    
int busca_loja_id(tp_loja *lista, int n){
	int bid;
   	if(n<1)
   		return 0;
   
    tp_loja *ant, *atu;
    atu = lista;
    ant = NULL;
    int i;
    for(i=1;((atu != NULL) && (i < n)); i++){
        ant = atu;
        atu = atu->prox;
    }
    if(atu == NULL){
        return 0;
    }
    else{
    	bid = atu->compra.carta[0].id;
    }
    return bid;
}


void faz_loja(tp_loja **l, tp_loja **itens){
	destroi_loja(l);
	destroi_loja(itens);
	//DefiniÃ§Ã£o de cada personagem
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
    {"Arquiteto", 2, 1, "ARQUITETO: da 2 de vida aos 2 aliados atrÃ¡s dele", 4, 1, 0},
    {"Arquiteto2", 4, 2, "ARQUITETO: da 4 de vida aos 2 aliados atrÃ¡s dele", 4, 2, 0},
    {"Arquiteto3", 7, 5, "ARQUITETO: da 6 de vida aos 2 aliados atrÃ¡s dele", 4, 3, 0}
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
    {"Fazendeiro", 3, 4, "FAZENDEIRO: da uma pera de graca no fim da batalha", 7, 1, 0},
    {"Fazendeiro2", 5, 5, "FAZENDEIRO: da uma banana de graca no fim da batalha", 7, 2, 0},
    {"Fazendeiro3", 8, 8, "FAZENDEIRO: da um caviar de graca no fim da batalha", 7, 3, 0}
};
    tp_animal medico[3] = {
    {"Medico", 3, 4, "MEDICO: cura o da frente em 1 por turno", 8, 1, 0},
    {"Medico2", 5, 5, "MEDICO: cura o da frente em 2 por turno", 8, 2, 0},
    {"Medico3", 8, 8, "MEDICO: cura o da frente em 3 por turno", 8, 3, 0}
};
    tp_animal advogado[3] = {
    {"Advogado", 3, 4, "ADVOGADO: da 2 de dano ao primeiro inimigo", 9, 1, 0},
    {"Advogado2", 5, 5, "ADVOGADO: da 5 de dano ao primeiro inimigo", 9, 2, 0},
    {"Advogado3", 8, 8, "ADVOGADO: da 8 de dano ao primeiro inimigo", 9, 3, 0}
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
    {"FilhoDoDono", 1, 1, "FILHO DO DONO: da 5 de vida a todos os aliados e vai dormir", 11, 1, 0},
    {"FilhoDoDono2", 2, 2, "FILHO DO DONO: da 10 de vida a todos os aliados e vai dormir", 11, 2, 0},
    {"FilhoDoDono3", 3, 3, "FILHO DO DONO: da 15 de vida a todos os aliados e vai dormir", 11, 3, 0}
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
    {"Fotografo", 1, 1, "FOTOGRAFO: depende...", 14, 1, 0},
    {"Fotografo2", 1, 1, "FOTOGRAFO: depende...", 14, 2, 0},
    {"Fotografo3", 2, 2, "FOTOGRAFO: depende...", 14, 3, 0}
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
    {"Cozinheiro", 4, 3, "COZINHEIRO: da uma pera de graÃ§a no fim da batalha", 18, 1, 0},
    {"Cozinheiro2", 5, 5, "COZINHEIRO: da uma banana de graÃ§a no fim da batalha", 18, 2, 0},
    {"Cozinheiro3", 7, 6, "COZINHEIRO: da um caviar de graÃ§a no fim da batalha", 18, 3, 0}
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



	tp_animal auxitens[5] = {
    {"Salario", 1, 1, "SALARIO: Nada melhor do que um graninha como incentivo", 100, 0, 0},
    {"Demissao", 0, 0, "DEMISSAO: Demita um funcionario seu como sacrificio para aumentar 1 de dano aos demais", 101, 0, 0},
    {"Cafe", 0, 2, "CAFE: Deixa seu trabalhador ligadasso e virado no 220V pronto pra qualquer desafio que vier", 102, 0, 0},
    {"Soneca", 2, 0, "SONECA: Descansar ne... q o homi n eh de ferro", 103, 0, 0},
    {"Aumento", 1, 1, "AUMENTO: De aquele aumento para o seus tabalhadores e veja o rendimento de todos melhorarem", 104, 0, 0}
};




	int i, aux;
	srand(time(NULL));
	for(i=0;i<3; i++){
		do{
		aux = rand() % (22 + 1 - 0) + 0;
		switch(aux){
			case 0:
				insere_loja(l, professor, 1);
				break;
			case 1:
				insere_loja(l, jornalista, 1);
				break;
			case 2:
				insere_loja(l, ator, 1);
				break;
			case 3:
				insere_loja(l, arquiteto, 1);
				break;
			case 4:
				insere_loja(l, motorista, 1);
				break;
			case 5:
				insere_loja(l, programador, 1);
				break;
			case 6:
				insere_loja(l, fazendeiro, 1);
				break;
			case 7:
				insere_loja(l, medico, 1);
				break;
			case 8:
				insere_loja(l, advogado, 1);
				break;
			case 9:
				insere_loja(l, policial, 1);
				break;
			case 10:
				insere_loja(l, vendedor, 1);
				break;
			case 11:
				insere_loja(l, guardacostas, 1);
				break;
			case 12:
				insere_loja(l, filhododono, 1);
				break;
			case 13:
				insere_loja(l, bombeiro, 1);
				break;
			case 14:
				insere_loja(l, atendente, 1);
				break;
			case 15:
				insere_loja(l, fotografo, 1);
				break;
			case 16:
				insere_loja(l, mecanico, 1);
				break;
			case 17:
				insere_loja(l, cantor, 1);
				break;
			case 18:
				insere_loja(l, salvavidas, 1);
				break;
			case 19:
				insere_loja(l, cozinheiro, 1);
				break;
			case 20:
				insere_loja(l, biologo, 1);
				break;
			case 21:
				insere_loja(l, mendigo, 1);
				break;
			case 22:
				insere_loja(l, artista, 1);
				break;
			default:
				break;
	}
	}while(aux < 0 || aux > 22);	
	}
	//inserir itens
	aux = rand()%5;
	insere_loja(itens, auxitens, aux);
}


#endif
