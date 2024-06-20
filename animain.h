#ifndef ANIMAIN
#define ANIMAIN
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

//Estrutura dos personagens
typedef struct{
char nome[15];
int vida;
int dano;
char descricao[100];
int id;
int lvl;
int exp;
}tp_animal;

void printdesc()
{
    printf("\n\nPROFESSOR[1]: adiciona 1 de dano aos invocados\nPROFESSOR[2]: adiciona 2 de dano e 2 de vida aos invocados\nPROFESSOR[3]: adiciona 4 de dano e 3 de vida aos invocados\n\n");// descricao do Professor.

    printf("JORNALISTA[1]: da 2 de dano ao ultimo inimigo\nJORNALISTA[2]: da 5 de dano ao ultimo inimigo\nJORNALISTA[3]: da 8 de dano ao ultimo inimigo\n\n");// descricao do Jornalista.

    printf("ATOR[1]: invoca um duble com a mesma vida e dano do ator\nATOR[2]: invoca um duble com a mesma vida e dano do ator\nATOR[3]: invoca dois dubles com a mesma vida e dano do ator\n\n");// descricao do Ator.

    printf("ARQUITETO[1]: da 2 de vida aos 2 aliados atras dele\nARQUITETO[2]: da 4 de vida aos 2 aliados atras dele\nARQUITETO[3]: da 6 de vida aos 2 aliados atras dele\n\n");// descricao do Arquiteto.

    printf("MOTORISTA[1]: invoca um carro 5/5\nMOTORISTA[2]: invoca um carro 8/8\nMOTORISTA[3]: invoca um carro 12/12\n\n");// descricao do Motorista.

    printf("PROGRAMADOR[1]: invoca um malware 1/1 em um aliado que morreu\nPROGRAMADOR[2]: invoca um malware 3/3 em um aliado que morreu\nPROGRAMADOR[3]: invoca um malware 5/5 em um aliado que morreu\n\n");// descricao do Programador.

    printf("FAZENDEIRO[1]: da uma pera de graca no fim da batalha\nFAZENDEIRO[2]: da uma banana de graca no fim da batalha\nFAZENDEIRO[3]: da um caviar de graca no fim da batalha\n\n");// descricao do Fazendeiro.

    printf("MEDICO[1]: cura o da frente em 1 por turno\nMEDICO[2]: cura o da frente em 2 por turno\nMEDICO[3]: cura o da frente em 3 por turno\n\n");// descricao do Medico.

    printf("ADVOGADO[1]: da 2 de dano ao primeiro inimigo\nADVOGADO[2]: da 5 de dano ao primeiro inimigo\nADVOGADO[3]: da 8 de dano ao primeiro inimigo\n\n");// descricao do Advogado.

    printf("POLICIAL[1]: da 2 de dano a TODOS os personagens\nPOLICIAL[2]: da 5 de dano a TODOS os personagens\nPOLICIAL[3]: da 8 de dano a TODOS os personagens\n\n");// descricao do Policial.

    printf("VENDEDOR[1]: ganha mais 2 moedas no fim da batalha\nVENDEDOR[2]: ganha mais 4 moedas no fim da batalha\nVENDEDOR[3]: ganha mais 6 moedas no fim da batalha\n\n");// descricao do Vendedor.

    printf("GUARDA COSTAS[1]: da 1 de vida para o de tras a cada dano que levar\nGUARDA COSTAS[2]: da 2 de vida para o de tras a cada dano que levar\nGUARDA COSTAS[3]: da 3 de vida para o de tras a cada dano que levar\n\n");// descricao do Guarda costas.

    printf("FILHO DO DONO[1]: da 5 de vida a todos os aliados e vai dormir\nFILHO DO DONO[2]: da 10 de vida a todos os aliados e vai dormir\nFILHO DO DONO[3]: da 15 de vida a todos os aliados e vai dormir\n\n");// descricao do Filho do dono.

    printf("BOMBEIRO[1]: acrescenta 1 de dano a todos os aliados\nBOMBEIRO[2]: acrescenta 3 de dano a todos os aliados\nBOMBEIRO[3]: acrescenta 5 de dano a todos os aliados\n\n");// descricao do Bombeiro.

    printf("ATENDENTE[1]: dobra o dano do aliado mais da frente\nATENDENTE[2]: dobra o dano do aliado mais da frente\nATENDENTE[3]: dobra o dano do aliado mais da frente\n\n");// descricao do Atendente.

    printf("FOTOGRAFO[1]: depende...\nFOTOGRAFO[2]: depende...\nFOTOGRAFO[3]: depende...\n\n");// descricao do Fotografo.

    printf("MOTORISTA[1]: invoca um carro 3/3\nMOTORISTA[2]: invoca um carro 6/6\nMOTORISTA[3]: invoca um carro 15/15\n\n");// descricao do Motorista.

    printf("CANTOR[1]: ao morrer acrescenta 1 de dano a todos os aliados\nCANTOR[2]: ao morrer acrescenta 4 de dano a todos os aliados\nCANTOR[3]: ao morrer acrescenta 6 de dano a todos os aliados\n\n");// descricao do Cantor.

    printf("SALVA VIDAS[1]: cura o da frente em 1 por turno\nSALVA VIDAS[2]: cura o da frente em 2 por turno\nSALVA VIDAS[3]: cura o da frente em 3 por turno\n\n");// descricao do Salva vidas.

    printf("COZINHEIRO[1]: da uma pera de graca no fim da batalha\nCOZINHEIRO[2]: da uma banana de graca no fim da batalha\nCOZINHEIRO[3]: da um caviar de graca no fim da batalha\n\n");// descricao do Cozinheiro.

    printf("ARTISTA[1]: ganha mais 1 moedas no fim da batalha\nARTISTA[2]: ganha mais 3 moedas no fim da batalha\nARTISTA[3]: ganha mais 8 moedas no fim da batalha\n\n");// descricao do Artista.

    printf("BIOLOGO[1]: ao morrer invoca um personagem aleatorio nivel 1\nBIOLOGO[2]: ao morrer invoca um personagem aleatorio nivel 2\nBIOLOGO[3]: ao morrer invoca um personagem aleatorio nivel 3\n\n");// descricao do Biologo.

    printf("MENDIGO[1]: ganha mais 5 moedas ao vender\nMENDIGO[2]: ganha mais 10 moedas ao vender\nMENDIGO[3]: ganha mais 20 moedas ao vender\n\n");// descricao do Mendigo.
    
    printf("__________________________________________________________________________________________________________\n"); // descricao dos itens

	printf("| ITEM 1: SALARIO                                                                                         |\n| [specs]: 1+ de vida e 1+ de ataque                                                                      |\n| [desc]:nada melhor do que um graninha como incentivo                                                    |\n|                                                                                                         |\n");

	printf("| ITEM 2: demissao                                                                                        |\n| [specs]: -1 trabalhador e 1+ de vida para todos os trabalhadores restantes                              |\n| [desc]: demita um funcionario seu como sacrificio para melhorar o resto da sua empresa                  |\n|                                                                                                         |\n");

	printf("| ITEM 3:cafe                                                                                             |\n| [specs]:+2 de ataque                                                                                    |\n| [desc]: deixa seu trabalhador ligadasso e virado no 220V pronto pra qualquer desafio que vier           |\n|                                                                                                         |\n");
	
	printf("| ITEM 4:soneca                                                                                           |\n| [specs]:+2 de vida                                                                                      |\n| [desc]: descansar ne... q o homi n e de ferro                                                           |\n|                                                                                                         |\n");

	printf("| ITEM 5:aumento                                                                                          |\n| [specs]:+1 de ataque e +1 de vida para toda a sua equipe                                                |\n| [desc]: de aquele aumento para o seus tabalhadores e veja o rendimento de todos melhorarem              |\n|");
	
	printf("_________________________________________________________________________________________________________|\n\n");
}

void printa_historico(const char *nomeArquivo) {
    FILE *arquivo;
    char linha[100]; // Tamanho arbitrário para leitura da linha

    // Abre o arquivo para leitura
    arquivo = fopen(nomeArquivo, "r");

    // Verifica se o arquivo foi aberto corretamente
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return;
    }
    
    printf("\n\n===============================HISTORICO==============================\n");
    printf("======================================================================\n");

    // Lê e imprime cada linha do arquivo
    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        printf("%s", linha);
    }

    // Fecha o arquivo após a leitura
    fclose(arquivo);
}

void printbib(){
    printf("\n\n==============================BIBLIOTECA==============================\n");
    printf("1: Ver empregos\n2: Ver historico\n3: Voltar\n");
}

void printcred(){
    printf("\n\n================================CREDITOS================================\n");
    printf("                            ~Joao Pedro Borges~\n                            ~Joao Pedro Goes~\n                            ~Rafael Guerra~\n                            ~Joao Pedro Guimaraes~\n\n");
}

void printconfig(){
	printf("\n\n=================================CONFIG=================================\n");
    printf("1: Temas\n2: Espera da batalha\n3: Dificuldade\n4: Restaurar configs\n5: Voltar\n");	
}

void printextras(){
	printf("\n\n=================================EXTRAS=================================\n");
    printf("1: Creditos\n2: Pagina do jogo original\n3: Github do projeto\n4: Voltar\n");	
}

void printgamemode(){
	printf("\n\n==============================MODO=DE=JOGO===================================\n");
   	printf("1: Singleplayer \n2: Multiplayer\n3: Voltar\n");
}

void temas(){
	int n;
	printf("\n\n0: Default, 1: White Mode, 2: EVA01, 3: Sakura, 4: Selva, 5: Afton, 6: Mijo, 7: Vitoria, 8: Rio, 9: Brasil \n");
	printf("Digite o tema: ");
	scanf("%d",&n);
	
	switch(n){
		case 0:
			system("color 0F");
			break;
		case 1:
			system("color 70");
			break;
		case 2:
			system("color 5A");
			break;
		case 3:
			system("color DF");
			break;
		case 4:
			system("color 21");
			break;
		case 5:
			system("color 56");
			break;
		case 6:
			system("color 68");
			break;
		case 7:
			system("color 40");
			break;
		case 8:
			system("color 9F");
			break;
		case 9:
			system("color 62");
			break;
		
	}
}

void restaura_config(int config[]){
	config[0]=5;
	config[1]=2;
	system("color 0F");
}

int telaInicio(int config[]){
    int n;
    while (1==1){
    system("cls");
    printf("\n\n             |============================================|\n");
    printf("             |======> BEM VINDO AO SUPER AUTO JOBS <======|\n");
    printf("             |============================================|\n");
    printf("             |=========Jogar=================Sair=========|\n");
    printf("             |=================Biblioteca=================|\n");
    printf("             |============================================|\n\n");
        printf("Digite 1 para Jogar\n");
        printf("Digite 2 para Sair\n");
        printf("Digite 3 para Checar a Biblioteca\n");
        printf("Digite 4 para Configuracoes\n");
        printf("Digite 5 para Extras\n\n");
        printf("Digite sua escolha: ");
        scanf("%d", &n);
        if(n==1){
        	int esc_conf;
        	while(0<1){
        	system("cls");
        	printgamemode();
        	printf("Digite sua escolha: ");
        	scanf("%d", &esc_conf);
			if(esc_conf==1)
				return 1;
			else if(esc_conf==2)
				return 2;
			else if(esc_conf==3)	
				break;;
        	}
		}
        if(n==2){
            return 0;
        }
        if(n==3){
        	int esc_conf;
        	while(0<1){
        	system("cls");
        	printbib();
        	printf("Digite sua escolha: ");
        	scanf("%d", &esc_conf);
			if(esc_conf==1){
				system("cls");
				printdesc();
				printf("Digite 1 para voltar: ");
        		scanf("%d", &esc_conf);
			}
			else if(esc_conf==2){
				system("cls");
				printa_historico("HistorySAJ.txt");
				printf("\n\nDigite 1 para voltar: ");
        		scanf("%d", &esc_conf);
				}
			else if(esc_conf==3){	
				break;
			}}
        }
        if (n==4)
        {
        	int esc_conf;
        	while(0<1){
        	system("cls");
        	printconfig();
        	printf("\nDigite sua escolha: ");
        	scanf("%d", &esc_conf);
			if(esc_conf==1){
				temas();
			}
			else if(esc_conf==2){
				do{
				printf("\nDigite os segundos de delay por turno: ");
				scanf("%d", &config[0]);} while(config[0] < 0);
				}
			else if(esc_conf==3){
				printf("\n\n1: Facil, 2: Medio, 3: Dificil\n");
				printf("Digite a dificuldade: ");
				scanf("%d", &config[1]);
			}
			else if(esc_conf==4){
				restaura_config(config);
			}
			else if(esc_conf==5)
        		break;
		} }
        if (n==5)
        {
        	int esc_conf;
        	while(0<1){
        	system("cls");
        	printextras();
        	printf("Digite sua escolha: ");
        	scanf("%d", &esc_conf);
			if(esc_conf==1){
				system("cls");
				printcred();
				printf("Digite 1 para voltar: ");
        		scanf("%d", &esc_conf);
			}
			else if(esc_conf==2){
				system("explorer https://teamwood.itch.io/super-auto-pets");
				}
			else if(esc_conf==3){	
				system("explorer https://github.com/MCookinho/SUPER-AUTO-JOBS/");
			}
			else if(esc_conf==4)
        		break;
		}}
		}
	
    return 1;
}

void fim_de_jogo(int cond){
	int i;
	system("cls");
	if(cond==1){
		printf("\n\n===============================VOCE=GANHOU===============================\n\n");
		sleep(3);
		for(i=5;i>=0;i--){
			system("cls");
			printf("\n\n===============================VOCE=GANHOU===============================\n\n");
			printf("O JOGO SERA ENCERRADO EM %d SEGUNDOS", i);
			sleep(1);
			}
	}
	
	if(cond==0){
		printf("\n\n===============================VOCE=PERDEU===============================\n\n");
		sleep(3);
		for(i=5;i>=0;i--){
			system("cls");
			printf("\n\n===============================VOCE=PERDEU===============================\n\n");
			printf("O JOGO SERA ENCERRADO EM %d SEGUNDOS", i);
			sleep(1);
			}
	}
	
	if(cond==2){
		printf("\n\n====================================JOGADOR=1=GANHOU====================================\n\n");
		sleep(3);
		for(i=5;i>=0;i--){
			system("cls");
			printf("\n\n====================================JOGADOR=1=GANHOU====================================\n\n");
			printf("O JOGO SERA ENCERRADO EM %d SEGUNDOS", i);
			sleep(1);
			}
	}
	
	if(cond==3){
		printf("\n\n====================================JOGADOR=2=GANHOU====================================\n\n");
		sleep(3);
		for(i=5;i>=0;i--){
			system("cls");
			printf("\n\n====================================JOGADOR=2=GANHOU====================================\n\n");
			printf("O JOGO SERA ENCERRADO EM %d SEGUNDOS", i);
			sleep(1);
			}
	}
}

void printa_jogador_mp(int cond){
		int i;
	system("cls");
	if(cond==1){
		printf("\n\n=======================================================================\n");
		printf("===============================JOGADOR=1===============================\n");
		printf("=======================================================================\n");
		sleep(3);		
	}
	
	if(cond==2){
		printf("\n\n=======================================================================\n");
		printf("===============================JOGADOR=2===============================\n");
		printf("=======================================================================\n");
		sleep(3);
	}
}


#endif
