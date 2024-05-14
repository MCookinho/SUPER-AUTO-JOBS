#ifndef NAME_H
#define NAME_H
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <string.h>

//structure base pro nome
typedef struct{
	char substantivo[50];
	char adjetivo[50];
}tp_nome_equipe;

void faznome(tp_nome_equipe *pnome, tp_nome_equipe *cpunome){
	printf("\n\n|============================================|\n");
	printf("|======>        NOME DA EQUIPE        <======|\n");
	printf("|============================================|\n\n");
	
		//definição das variaveis contador, numero aleatorio pro substantivo, numero aleatorio pro adjetivo
	int i, rng_sub[4], rng_adj[4];
		
		//nome temporario criado para no final da função definir o nome do jogador e da cpu
	tp_nome_equipe temp[4];
	
		//definição da srand
	srand(time(NULL));
	
		//laço para definir os vetores da struct
	for(i=0; i<4; i++){
	
		//definição das variaveis de aleatoriedade
		rng_sub[i]= (rand() % 12);
		rng_adj[i]= (rand() % 12);

		while((i-1)!= -1 && rng_sub[i] == rng_sub[i-1] ){ //condicional para verificar se vai cair substantivo repetido
			rng_sub[i]= (rand() % 12);
			if(i == 2 && rng_sub[i] == rng_sub[i-2]) 
			rng_sub[i]= (rand() % 12);
		}

		while((i-1)!= -1 && rng_adj[i] == rng_adj[i-1] ){ //condicional para verificar se vai adjetivo repetido
			rng_adj[i]= (rand() % 12);
			if(i == 2 && rng_adj[i] == rng_adj[i-2]) 
			rng_adj[i]= (rand() % 12);
		}
		
		switch(rng_sub[i]){ //calculo dos substantivos
			case 0:
				strcpy(temp[i].substantivo, "Queridos");
				break;
			case 1:
				strcpy(temp[i].substantivo, "Guaxinins");
				break;
			case 2:
				strcpy(temp[i].substantivo, "Humanos");
				break;
			case 3:
				strcpy(temp[i].substantivo, "Comiloes");
				break;
			case 4:
				strcpy(temp[i].substantivo, "Pinguins");
				break;
			case 5:
				strcpy(temp[i].substantivo, "La ele");
				break;
			case 6:
				strcpy(temp[i].substantivo, "Coelhos");
				break;
			case 7:
				strcpy(temp[i].substantivo, "Tigres");
				break;
			case 8:
				strcpy(temp[i].substantivo, "Vencedores");
				break;
			case 9:
				strcpy(temp[i].substantivo, "Perdedores");
				break;
			case 10:
				strcpy(temp[i].substantivo, "Alunos");
				break;
			case 11:
				strcpy(temp[i].substantivo, "Ratos");
				break;
			case 12:
				strcpy(temp[i].substantivo, "Estranhos");
				break;
		}
		switch(rng_adj[i]){ //calculo adjetivos
			case 0:
				strcpy(temp[i].adjetivo, "assombrosos");
				break;
			case 1:
				strcpy(temp[i].adjetivo, "lindos");
				break;
			case 2:
				strcpy(temp[i].adjetivo, "feios");
				break;
			case 3:
				strcpy(temp[i].adjetivo, "da silva");
				break;
			case 4:
				strcpy(temp[i].adjetivo, "loucos");
				break;
			case 5:
				strcpy(temp[i].adjetivo, "do grau");
				break;
			case 6:
				strcpy(temp[i].adjetivo, "muito estranhos");
				break;
			case 7:
				strcpy(temp[i].adjetivo, "e tals");
				break;
			case 8:
				strcpy(temp[i].adjetivo, "peidoes");
				break;
			case 9:
				strcpy(temp[i].adjetivo, "chatos");
				break;
			case 10:
				strcpy(temp[i].adjetivo, "legais");
				break;
			case 11:
				strcpy(temp[i].adjetivo, "esquisitos");
				break;
			case 12:
				strcpy(temp[i].adjetivo, "brasileiros");
				break;
			
		}
	}
	
	//coloca o nome temporario no nome da CPU
	strcpy(cpunome->substantivo , temp[3].substantivo);
	strcpy(cpunome->adjetivo , temp[3].adjetivo);
	
	//escolher um dos 3 substantivos e 3 adjetivos
	int numsub, numadj;
	printf("Escolha um substantivo e um adjetivo para sua equipe: \n");
	printf("1: %s, 2: %s, 3: %s \n", temp[0].substantivo, temp[1].substantivo, temp[2].substantivo);
	printf("1: %s, 2: %s, 3: %s \n", temp[0].adjetivo, temp[1].adjetivo, temp[2].adjetivo);
	printf("Digite o respectivo numero para o nome que voce quer escolher: ");
	scanf("%d %d",&numsub , &numadj);
	while(numsub < 1 || numsub > 3 || numadj < 1 || numadj > 3){
		printf("Algum valor esta incorreto, digite novamente: ");
		scanf("%d %d",&numsub , &numadj);
		}
	
	//coloca o nome temporario no nome do jogador
	strcpy(pnome->substantivo , temp[numsub-1].substantivo);
	strcpy(pnome->adjetivo , temp[numadj-1].adjetivo);
}



//funçao para printar o nome
void printanome(tp_nome_equipe nome){
	printf("%s %s", nome.substantivo, nome.adjetivo);
}
	
#endif
