#ifndef ANIFASES_H
#define ANIFASES_H
#include "animain.h"
#include "randname.h"
#include "string.h"

void define_fase(tp_animal oponente[], int fase){
	
	if(fase == 1){
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
	
	if(fase == 2){
	tp_animal bombeiro, atendente, salvavidas, mendigo, policial;
	strcpy(bombeiro.nome, "Bombeiro"); bombeiro.vida = 6; bombeiro.dano = 3; strcpy(bombeiro.descricao, "BOMBEIRO: acrescenta 1 de dano a todos os aliados"); bombeiro.id = 12; bombeiro.lvl = 1; bombeiro.exp = 0;
	strcpy(atendente.nome, "Atendente"); atendente.vida = 5; atendente.dano = 2; strcpy(atendente.descricao, "ATENDENTE: dobra o dano do aliado mais da frente"); atendente.id = 13; atendente.lvl = 1; atendente.exp = 0;
	strcpy(salvavidas.nome, "SalvaVidas"); salvavidas.vida = 2; salvavidas.dano = 2; strcpy(salvavidas.descricao, "SALVA VIDAS: cura o da frente em 1 por turno"); salvavidas.id = 17; salvavidas.lvl = 1; salvavidas.exp = 0;
	strcpy(mendigo.nome, "Mendigo"); mendigo.vida = 4; mendigo.dano = 4; strcpy(mendigo.descricao, "MENDIGO: ganha mais 5 moedas ao vender"); mendigo.id = 21; mendigo.lvl = 1; mendigo.exp = 0;
	strcpy(policial.nome, "Policial"); policial.vida = 4; policial.dano = 4; strcpy(policial.descricao, "POLICIAL: da 2 de dano a TODOS os personagens"); policial.id = 22; policial.lvl = 1; policial.exp = 0;
	
	oponente[0] = bombeiro;
	oponente[1] = atendente;
	oponente[2] = salvavidas;
	oponente[3] = mendigo;
	oponente[4] = policial;
	}
	
	if(fase == 3){
	tp_animal bombeiro, atendente, salvavidas, fotografo, policial;
	strcpy(bombeiro.nome, "Bombeiro"); bombeiro.vida = 6; bombeiro.dano = 3; strcpy(bombeiro.descricao, "BOMBEIRO: acrescenta 1 de dano a todos os aliados"); bombeiro.id = 12; bombeiro.lvl = 1; bombeiro.exp = 0;
	strcpy(atendente.nome, "Atendente"); atendente.vida = 5; atendente.dano = 2; strcpy(atendente.descricao, "ATENDENTE: dobra o dano do aliado mais da frente"); atendente.id = 13; atendente.lvl = 1; atendente.exp = 0;
	strcpy(salvavidas.nome, "SalvaVidas"); salvavidas.vida = 2; salvavidas.dano = 2; strcpy(salvavidas.descricao, "SALVA VIDAS: cura o da frente em 1 por turno"); salvavidas.id = 17; salvavidas.lvl = 1; salvavidas.exp = 0;
	strcpy(fotografo.nome, "Fotografo"); fotografo.vida = 1; fotografo.dano = 4; strcpy(fotografo.descricao, "FOTOGRAFO: depende..."); fotografo.id = 14; fotografo.lvl = 1; fotografo.exp = 0;
	strcpy(policial.nome, "Policial"); policial.vida = 4; policial.dano = 4; strcpy(policial.descricao, "POLICIAL: da 2 de dano a TODOS os personagens"); policial.id = 22; policial.lvl = 1; policial.exp = 0;
	
	oponente[0] = fotografo;
	oponente[1] = bombeiro;
	oponente[2] = salvavidas;
	oponente[3] = atendente;
	oponente[4] = policial;
	}
	
	if(fase == 4){
	tp_animal bombeiro, atendente, salvavidas, fotografo, policial;
	strcpy(bombeiro.nome, "Bombeiro"); bombeiro.vida = 6; bombeiro.dano = 3; strcpy(bombeiro.descricao, "BOMBEIRO: acrescenta 1 de dano a todos os aliados"); bombeiro.id = 12; bombeiro.lvl = 1; bombeiro.exp = 0;
	strcpy(atendente.nome, "Atendente"); atendente.vida = 5; atendente.dano = 2; strcpy(atendente.descricao, "ATENDENTE: dobra o dano do aliado mais da frente"); atendente.id = 13; atendente.lvl = 1; atendente.exp = 0;
	strcpy(salvavidas.nome, "SalvaVidas"); salvavidas.vida = 2; salvavidas.dano = 2; strcpy(salvavidas.descricao, "SALVA VIDAS: cura o da frente em 1 por turno"); salvavidas.id = 17; salvavidas.lvl = 1; salvavidas.exp = 0;
	strcpy(fotografo.nome, "Fotografo2"); fotografo.vida = 1; fotografo.dano = 4; strcpy(fotografo.descricao, "FOTOGRAFO: depende..."); fotografo.id = 14; fotografo.lvl = 2; fotografo.exp = 0;
	strcpy(policial.nome, "Policial"); policial.vida = 4; policial.dano = 4; strcpy(policial.descricao, "POLICIAL: da 2 de dano a TODOS os personagens"); policial.id = 22; policial.lvl = 1; policial.exp = 0;
	
	oponente[0] = fotografo;
	oponente[1] = bombeiro;
	oponente[2] = salvavidas;
	oponente[3] = atendente;
	oponente[4] = policial;
	}
	
	if(fase == 5){
	tp_animal bombeiro, atendente, salvavidas, fotografo, policial;
	strcpy(bombeiro.nome, "Bombeiro"); bombeiro.vida = 7; bombeiro.dano = 4; strcpy(bombeiro.descricao, "BOMBEIRO: acrescenta 1 de dano a todos os aliados"); bombeiro.id = 12; bombeiro.lvl = 1; bombeiro.exp = 0;
	strcpy(atendente.nome, "Atendente"); atendente.vida = 6; atendente.dano = 3; strcpy(atendente.descricao, "ATENDENTE: dobra o dano do aliado mais da frente"); atendente.id = 13; atendente.lvl = 1; atendente.exp = 0;
	strcpy(salvavidas.nome, "SalvaVidas"); salvavidas.vida = 2; salvavidas.dano = 2; strcpy(salvavidas.descricao, "SALVA VIDAS: cura o da frente em 1 por turno"); salvavidas.id = 17; salvavidas.lvl = 1; salvavidas.exp = 0;
	strcpy(fotografo.nome, "Fotografo2"); fotografo.vida = 1; fotografo.dano = 4; strcpy(fotografo.descricao, "FOTOGRAFO: depende..."); fotografo.id = 14; fotografo.lvl = 2; fotografo.exp = 0;
	strcpy(policial.nome, "Policial"); policial.vida = 6; policial.dano = 4; strcpy(policial.descricao, "POLICIAL: da 2 de dano a TODOS os personagens"); policial.id = 22; policial.lvl = 1; policial.exp = 0;
	
	oponente[0] = fotografo;
	oponente[1] = bombeiro;
	oponente[2] = salvavidas;
	oponente[3] = atendente;
	oponente[4] = policial;
	}
	
	if(fase == 6){
	tp_animal bombeiro, atendente, salvavidas, fotografo, policial;
	strcpy(bombeiro.nome, "Bombeiro"); bombeiro.vida = 7; bombeiro.dano = 4; strcpy(bombeiro.descricao, "BOMBEIRO: acrescenta 1 de dano a todos os aliados"); bombeiro.id = 12; bombeiro.lvl = 1; bombeiro.exp = 0;
	strcpy(atendente.nome, "Atendente"); atendente.vida = 6; atendente.dano = 3; strcpy(atendente.descricao, "ATENDENTE: dobra o dano do aliado mais da frente"); atendente.id = 13; atendente.lvl = 1; atendente.exp = 0;
	strcpy(salvavidas.nome, "SalvaVidas"); salvavidas.vida = 2; salvavidas.dano = 2; strcpy(salvavidas.descricao, "SALVA VIDAS: cura o da frente em 1 por turno"); salvavidas.id = 17; salvavidas.lvl = 1; salvavidas.exp = 0;
	strcpy(fotografo.nome, "Fotografo2"); fotografo.vida = 1; fotografo.dano = 4; strcpy(fotografo.descricao, "FOTOGRAFO: depende..."); fotografo.id = 14; fotografo.lvl = 2; fotografo.exp = 0;
	strcpy(policial.nome, "Policial"); policial.vida = 6; policial.dano = 4; strcpy(policial.descricao, "POLICIAL: da 2 de dano a TODOS os personagens"); policial.id = 22; policial.lvl = 1; policial.exp = 0;
	
	oponente[0] = fotografo;
	oponente[1] = bombeiro;
	oponente[2] = salvavidas;
	oponente[3] = atendente;
	oponente[4] = policial;
	}
	
	if(fase == 7){
	tp_animal bombeiro, atendente, salvavidas, fotografo, policial;
	strcpy(bombeiro.nome, "Bombeiro2"); bombeiro.vida = 9; bombeiro.dano = 9; strcpy(bombeiro.descricao, "BOMBEIRO: acrescenta 1 de dano a todos os aliados"); bombeiro.id = 12; bombeiro.lvl = 2; bombeiro.exp = 0;
	strcpy(atendente.nome, "Atendente"); atendente.vida = 6; atendente.dano = 3; strcpy(atendente.descricao, "ATENDENTE: dobra o dano do aliado mais da frente"); atendente.id = 13; atendente.lvl = 1; atendente.exp = 0;
	strcpy(salvavidas.nome, "SalvaVidas"); salvavidas.vida = 2; salvavidas.dano = 2; strcpy(salvavidas.descricao, "SALVA VIDAS: cura o da frente em 1 por turno"); salvavidas.id = 17; salvavidas.lvl = 1; salvavidas.exp = 0;
	strcpy(fotografo.nome, "Fotografo2"); fotografo.vida = 1; fotografo.dano = 4; strcpy(fotografo.descricao, "FOTOGRAFO: depende..."); fotografo.id = 14; fotografo.lvl = 2; fotografo.exp = 0;
	strcpy(policial.nome, "Policial"); policial.vida = 6; policial.dano = 4; strcpy(policial.descricao, "POLICIAL: da 2 de dano a TODOS os personagens"); policial.id = 22; policial.lvl = 1; policial.exp = 0;
	
	oponente[0] = fotografo;
	oponente[1] = bombeiro;
	oponente[2] = salvavidas;
	oponente[3] = atendente;
	oponente[4] = policial;
	}
	
	if(fase == 8){
	tp_animal bombeiro, atendente, salvavidas, fotografo, policial;
	strcpy(bombeiro.nome, "Bombeiro2"); bombeiro.vida = 9; bombeiro.dano = 5; strcpy(bombeiro.descricao, "BOMBEIRO: acrescenta 1 de dano a todos os aliados"); bombeiro.id = 12; bombeiro.lvl = 2; bombeiro.exp = 0;
	strcpy(atendente.nome, "Atendente"); atendente.vida = 6; atendente.dano = 3; strcpy(atendente.descricao, "ATENDENTE: dobra o dano do aliado mais da frente"); atendente.id = 13; atendente.lvl = 1; atendente.exp = 0;
	strcpy(salvavidas.nome, "SalvaVidas"); salvavidas.vida = 4; salvavidas.dano = 4; strcpy(salvavidas.descricao, "SALVA VIDAS: cura o da frente em 1 por turno"); salvavidas.id = 17; salvavidas.lvl = 1; salvavidas.exp = 0;
	strcpy(fotografo.nome, "Fotografo2"); fotografo.vida = 1; fotografo.dano = 4; strcpy(fotografo.descricao, "FOTOGRAFO: depende..."); fotografo.id = 14; fotografo.lvl = 2; fotografo.exp = 0;
	strcpy(policial.nome, "Policial"); policial.vida = 7; policial.dano = 5; strcpy(policial.descricao, "POLICIAL: da 2 de dano a TODOS os personagens"); policial.id = 22; policial.lvl = 1; policial.exp = 0;
	
	oponente[0] = fotografo;
	oponente[1] = bombeiro;
	oponente[2] = salvavidas;
	oponente[3] = atendente;
	oponente[4] = policial;
	}
	
	if(fase == 9){
	tp_animal bombeiro, atendente, salvavidas, fotografo, policial;
	strcpy(bombeiro.nome, "Bombeiro2"); bombeiro.vida = 9; bombeiro.dano = 5; strcpy(bombeiro.descricao, "BOMBEIRO: acrescenta 1 de dano a todos os aliados"); bombeiro.id = 12; bombeiro.lvl = 2; bombeiro.exp = 0;
	strcpy(atendente.nome, "Atendente"); atendente.vida = 6; atendente.dano = 3; strcpy(atendente.descricao, "ATENDENTE: dobra o dano do aliado mais da frente"); atendente.id = 13; atendente.lvl = 1; atendente.exp = 0;
	strcpy(salvavidas.nome, "SalvaVidas"); salvavidas.vida = 4; salvavidas.dano = 4; strcpy(salvavidas.descricao, "SALVA VIDAS: cura o da frente em 1 por turno"); salvavidas.id = 17; salvavidas.lvl = 1; salvavidas.exp = 0;
	strcpy(fotografo.nome, "Fotografo2"); fotografo.vida = 1; fotografo.dano = 4; strcpy(fotografo.descricao, "FOTOGRAFO: depende..."); fotografo.id = 14; fotografo.lvl = 2; fotografo.exp = 0;
	strcpy(policial.nome, "Policial2"); policial.vida = 6; policial.dano = 4; strcpy(policial.descricao, "POLICIAL: da 2 de dano a TODOS os personagens"); policial.id = 22; policial.lvl = 1; policial.exp = 0;
	
	oponente[0] = fotografo;
	oponente[1] = bombeiro;
	oponente[2] = salvavidas;
	oponente[3] = atendente;
	oponente[4] = policial;
	}
	
	if(fase >= 10){
	tp_animal bombeiro, atendente, salvavidas, fotografo, policial;
	strcpy(bombeiro.nome, "Bombeiro2"); bombeiro.vida = (9+(fase-3)); bombeiro.dano = (5+(fase-3)); strcpy(bombeiro.descricao, "BOMBEIRO: acrescenta 1 de dano a todos os aliados"); bombeiro.id = 12; bombeiro.lvl = 2; bombeiro.exp = 0;
	strcpy(atendente.nome, "Atendente"); atendente.vida = 6; atendente.dano = 3; strcpy(atendente.descricao, "ATENDENTE: dobra o dano do aliado mais da frente"); atendente.id = 13; atendente.lvl = 1; atendente.exp = 0;
	strcpy(salvavidas.nome, "SalvaVidas"); salvavidas.vida = 4; salvavidas.dano = 4; strcpy(salvavidas.descricao, "SALVA VIDAS: cura o da frente em 1 por turno"); salvavidas.id = 17; salvavidas.lvl = 1; salvavidas.exp = 0;
	strcpy(fotografo.nome, "Fotografo2"); fotografo.vida = 1; fotografo.dano = 4; strcpy(fotografo.descricao, "FOTOGRAFO: depende..."); fotografo.id = 14; fotografo.lvl = 2; fotografo.exp = 0;
	strcpy(policial.nome, "Policial"); policial.vida = 6; policial.dano = 4; strcpy(policial.descricao, "POLICIAL: da 2 de dano a TODOS os personagens"); policial.id = 22; policial.lvl = 1; policial.exp = 0;
	
	oponente[0] = fotografo;
	oponente[1] = bombeiro;
	oponente[2] = salvavidas;
	oponente[3] = atendente;
	oponente[4] = policial;
	}
	
}

void remover_ultimas_linhas_do_arquivo(const char *filename) {
	#define LINES_TO_DELETE 10
    FILE *file = fopen(filename, "r+");
    if (file == NULL) {
        perror("Erro deletar linhas");
        return;
    }

    fseek(file, 0, SEEK_END); // Move para o final do arquivo

    long pos = ftell(file);
    int lines = 0;
    int i;

    // Conta as linhas a partir do final do arquivo
    for (i = 1; i <= pos; i++) {
        fseek(file, -i, SEEK_END);
        if (fgetc(file) == '\n') {
            lines++;
            if (lines == LINES_TO_DELETE + 1) {
                break;
            }
        }
    }

    if (lines < LINES_TO_DELETE) {
        printf("O arquivo possui menos de %d linhas.\n", LINES_TO_DELETE);
        fclose(file);
        return;
    }

    // Trunca o arquivo até a posição atual
    ftruncate(fileno(file), pos - i + 1);

    fclose(file);
}

int grava_historico(tp_animal P1[], tp_animal P2[], int cond, tp_nome_equipe nome_P1, tp_nome_equipe nome_P2){
 FILE *pont_arq;
 
  if (cond == 0){
	pont_arq = fopen("HistorySAJ.txt","a");
	
	if (pont_arq == NULL)
	  {
	    printf("Erro ao tentar ler o historico!");
	    return 0;
	  }
	fprintf(pont_arq,"\n%s %s           vs         %s %s\n\n", nome_P1.substantivo, nome_P1.adjetivo, nome_P2.substantivo, nome_P2.adjetivo);
	fprintf(pont_arq,"P1: %s %s %s %s %s\n", P1[0].nome, P1[1].nome, P1[2].nome, P1[3].nome, P1[4].nome);
	fprintf(pont_arq,"P2: %s %s %s %s %s\n\n", P2[0].nome, P2[1].nome, P2[2].nome, P2[3].nome, P2[4].nome);
	fprintf(pont_arq,"ABANDONO DE PARTIDA\n");
	fprintf(pont_arq,"======================================================================\n");
	
  }
  
  if (cond == 1){
  	remover_ultimas_linhas_do_arquivo("HistorySAJ.txt");
  	pont_arq = fopen("HistorySAJ.txt","a");
	
	if (pont_arq == NULL)
	  {
	    printf("Erro ao tentar ler o historico!");
	    return 0;
	  }
	fprintf(pont_arq,"\n%s %s           vs         %s %s\n\n", nome_P1.substantivo, nome_P1.adjetivo, nome_P2.substantivo, nome_P2.adjetivo);
	fprintf(pont_arq,"P1: %s %s %s %s %s\n", P1[0].nome, P1[1].nome, P1[2].nome, P1[3].nome, P1[4].nome);
	fprintf(pont_arq,"P2: %s %s %s %s %s\n\n", P2[0].nome, P2[1].nome, P2[2].nome, P2[3].nome, P2[4].nome);
	fprintf(pont_arq,"ABANDONO DE PARTIDA\n");
	fprintf(pont_arq,"======================================================================");
	
  }
  
  if (cond == 2){
  	remover_ultimas_linhas_do_arquivo("HistorySAJ.txt");
  	pont_arq = fopen("HistorySAJ.txt","a");
	
	if (pont_arq == NULL)
	  {
	    printf("Erro ao tentar ler o historico!");
	    return 0;
	  }
	fprintf(pont_arq,"\n%s %s           vs         %s %s\n\n", nome_P1.substantivo, nome_P1.adjetivo, nome_P2.substantivo, nome_P2.adjetivo);
	fprintf(pont_arq,"P1: %s %s %s %s %s\n", P1[0].nome, P1[1].nome, P1[2].nome, P1[3].nome, P1[4].nome);
	fprintf(pont_arq,"P2: %s %s %s %s %s\n\n", P2[0].nome, P2[1].nome, P2[2].nome, P2[3].nome, P2[4].nome);
	fprintf(pont_arq,"P1 GANHOU A PARTIDA\n");
	fprintf(pont_arq,"======================================================================");
  }
  
  if (cond == 3){
  	remover_ultimas_linhas_do_arquivo("HistorySAJ.txt");
  	pont_arq = fopen("HistorySAJ.txt","a");
	
	if (pont_arq == NULL)
	  {
	    printf("Erro ao tentar ler o historico!");
	    return 0;
	  }
	fprintf(pont_arq,"\n%s %s           vs         %s %s\n\n", nome_P1.substantivo, nome_P1.adjetivo, nome_P2.substantivo, nome_P2.adjetivo);
	fprintf(pont_arq,"P1: %s %s %s %s %s\n", P1[0].nome, P1[1].nome, P1[2].nome, P1[3].nome, P1[4].nome);
	fprintf(pont_arq,"P2: %s %s %s %s %s\n\n", P2[0].nome, P2[1].nome, P2[2].nome, P2[3].nome, P2[4].nome);
	fprintf(pont_arq,"P2 GANHOU A PARTIDA\n");
	fprintf(pont_arq,"======================================================================");
  }
  
  
  fclose(pont_arq);
  return 1;
}

#endif
