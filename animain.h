#ifndef ANIMAIN
#define ANIMAIN
#include <stdio.h>

//Estrutura dos itens
typedef struct{
char nome[15];
int soma_vida;
int soma_dano;
char descricao[50];
int id;
}tp_item;

//Estrutura dos animais
typedef struct{
char nome[15];
int vida;
int dano;
char descricao[50];
int id;
}tp_animal;

//função para atribuir o item ao animal
void da_item(tp_animal *b, tp_item item){
int i;
for(i=0; i<3; i++){

b->vida += item.soma_vida;
b->dano += item.soma_dano;
b++;
}
}

void printdesc()
{
    printf("\n\nPROFESSOR[1]: adiciona 1 de dano aos invocados\nPROFESSOR[2]: adiciona 2 de dano e 2 de vida aos invocados\nPROFESSOR[3]: adiciona 4 de dano e 3 de vida aos invocados\n\n");// descricao do Professor.

    printf("JORNALISTA[1]: da 2 de dano ao ultimo inimigo\nJORNALISTA[2]: da 5 de dano ao ultimo inimigo\nJORNALISTA[3]: da 8 de dano ao ultimo inimigo\n\n");// descricao do Jornalista.

    printf("ATOR[1]: invoca um duble com a mesma vida e dano do ator\nATOR[2]: invoca um duble com a mesma vida e dano do ator\nATOR[3]: invoca dois dubles com a mesma vida e dano do ator\n\n");// descricao do Ator.

    printf("ARQUITETO[1]: da 2 de vida aos 2 aliados atrás dele\nARQUITETO[2]: da 4 de vida aos 2 aliados atrás dele\nARQUITETO[3]: da 6 de vida aos 2 aliados atrás dele\n\n");// descricao do Arquiteto.

    printf("MOTORISTA[1]: invoca um carro 5/5\nMOTORISTA[2]: invoca um carro 8/8\nMOTORISTA[3]: invoca um carro 12/12\n\n");// descricao do Motorista.

    printf("PROGRAMADOR[1]: invoca um malware 1/1 em um aliado que morreu\nPROGRAMADOR[2]: invoca um malware 3/3 em um aliado que morreu\nPROGRAMADOR[3]: invoca um malware 5/5 em um aliado que morreu\n\n");// descricao do Programador.

    printf("FAZENDEIRO[1]: da uma pera de graça no fim da batalha\nFAZENDEIRO[2]: da uma banana de graça no fim da batalha\nFAZENDEIRO[3]: da um caviar de graça no fim da batalha\n\n");// descricao do Fazendeiro.

    printf("MEDICO[1]: cura o da frente em 1 por turno\nMEDICO[2]: cura o da frente em 2 por turno\nMEDICO[3]: cura o da frente em 3 por turno\n\n");// descricao do Medico.

    printf("ADVOGADO[1]: da 2 de dano a um inimigo aleatorio\nADVOGADO[2]: da 5 de dano a um inimigo aleatorio\nADVOGADO[3]: da 8 de dano a um inimigo aleatorio\n\n");// descricao do Advogado.

    printf("POLICIAL[1]: da 2 de dano a TODOS os personagens\nPOLICIAL[2]: da 5 de dano a TODOS os personagens\nPOLICIAL[3]: da 8 de dano a TODOS os personagens\n\n");// descricao do Policial.

    printf("VENDEDOR[1]: ganha mais 2 moedas no fim da batalha\nVENDEDOR[2]: ganha mais 4 moedas no fim da batalha\nVENDEDOR[3]: ganha mais 6 moedas no fim da batalha\n\n");// descricao do Vendedor.

    printf("GUARDA COSTAS[1]: da 1 de vida para o de tras a cada dano que levar\nGUARDA COSTAS[2]: da 2 de vida para o de tras a cada dano que levar\nGUARDA COSTAS[3]: da 3 de vida para o de tras a cada dano que levar\n\n");// descricao do Guarda costas.

    printf("FILHO DO DONO[1]: da 5 de vida a todos os aliados\nFILHO DO DONO[2]: da 10 de vida a todos os aliados\nFILHO DO DONO[3]: da 15 de vida a todos os aliados\n\n");// descricao do Filho do dono.

    printf("BOMBEIRO[1]: acrescenta 1 de dano a todos os aliados\nBOMBEIRO[2]: acrescenta 3 de dano a todos os aliados\nBOMBEIRO[3]: acrescenta 5 de dano a todos os aliados\n\n");// descricao do Bombeiro.

    printf("ATENDENTE[1]: dobra o dano do aliado mais da frente\nATENDENTE[2]: dobra o dano do aliado mais da frente\nATENDENTE[3]: dobra o dano do aliado mais da frente\n\n");// descricao do Atendente.

    printf("FOTOGRAFO[1]: da instakill\nFOTOGRAFO[2]: da instakill\nFOTOGRAFO[3]: da instakill\n\n");// descricao do Fotografo.

    printf("MOTORISTA[1]: invoca um carro 3/3\nMOTORISTA[2]: invoca um carro 6/6\nMOTORISTA[3]: invoca um carro 15/15\n\n");// descricao do Motorista.

    printf("CANTOR[1]: ao morrer acrescenta 1 de dano a todos os aliados\nCANTOR[2]: ao morrer acrescenta 4 de dano a todos os aliados\nCANTOR[3]: ao morrer acrescenta 6 de dano a todos os aliados\n\n");// descricao do Cantor.

    printf("SALVA VIDAS[1]: cura o da frente em 1 por turno\nSALVA VIDAS[2]: cura o da frente em 2 por turno\nSALVA VIDAS[3]: cura o da frente em 3 por turno\n\n");// descricao do Salva vidas.

    printf("COZINHEIRO[1]: da uma pera de graça no fim da batalha\nCOZINHEIRO[2]: da uma banana de graça no fim da batalha\nCOZINHEIRO[3]: da um caviar de graça no fim da batalha\n\n");// descricao do Cozinheiro.

    printf("ARTISTA[1]: ganha mais 1 moedas no fim da batalha\nARTISTA[2]: ganha mais 3 moedas no fim da batalha\nARTISTA[3]: ganha mais 8 moedas no fim da batalha\n\n");// descricao do Artista.

    printf("BIOLOGO[1]: ao morrer invoca um personagem aleatorio nivel 1\nBIOLOGO[2]: ao morrer invoca um personagem aleatorio nivel 2\nBIOLOGO[3]: ao morrer invoca um personagem aleatorio nivel 3\n\n");// descricao do Biologo.

    printf("MENDIGO[1]: ganha mais 5 moedas ao vender\nMENDIGO[2]: ganha mais 10 moedas ao vender\nMENDIGO[3]: ganha mais 20 moedas ao vender\n\n");// descricao do Mendigo.
}

int telaInicio(){
    int i=0, n;
    printf("\n\n|============================================|\n");
    printf("|======> BEM VINDO AO SUPER AUTO-JOBS <======|\n");
    printf("|============================================|\n");
    printf("|=========Jogar=================Sair=========|\n");
    printf("|=================Biblioteca=================|\n");
    printf("|============================================|\n\n");
    while (i==0){
        printf("Digite 1 para Jogar.\n");
        printf("Digite 2 para Sair.\n");
        printf("Digite 3 para checar a Biblioteca.\n");
        scanf("%d", &n);
        if(n==1){
            i=1;
        }
        if(n==2){
            return 0;
        }
        if(n==3){
            printdesc();
        }
    }
    return 1;
}

#endif
