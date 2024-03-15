#ifndef ANIMAIN
#define ANIMAIN
#include <stdio.h>

//Estrutura das habilidades
typedef struct{
	//copia da stuct de animais para uma area interna das habilidades
	struct invocado{
	char simbolo;
	int vida;
	int dano;
	char descricao[50];
	int id;
};

	int dano;
	int soma_dano;
	//alvo "1" é ele mesmo, "0" é nulo
	int alvo1, alvo2, alvo3;
	//booleana para verificar se tal habilidade pode ser ativada, "0" não pode, "1" pode
	int pod_invoca, pod_invoca_alvo, pod_baratear;
	//habilidades especiais
	//caso possa invocar outro bicho
	struct invocado invoca;
	//diminui o preço dos bichos da loja no proximo turno
	int baratear;
	//fim das habilidades
	//condicionais para habilidade possa ser ativada
	int cond_morre, cond_mata, cond_levadano, cond_ataca, cond_alvomorre, cond_alvomata, cond_iniciobatalha;
	
}tp_habilidade;

//Estrutura dos itens
typedef struct{
	int soma_vida;
	int soma_dano;
	int ativa;
	tp_habilidade skill;
	char descricao[50];
	int id;
}tp_item;

//Estrutura dos animais
typedef struct{
	char simbolo;
	int vida;
	int dano;
	tp_habilidade skill, skill_item;
	char descricao[50];
	int id;
}tp_animal;

//função para atribuir o item ao animal
int da_item(tp_animal *bichinho, tp_item item){
	bichinho->vida += item.soma_vida;
	bichinho->dano += item.soma_dano;
	if(item.ativa == 1){
		bichinho->skill_item = item.skill;
	}
	return 1;
}


#endif
