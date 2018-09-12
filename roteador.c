#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "roteador.h"
#include "terminal.h"

typedef struct celRot CelRot;
struct celRot{
	CelRot *prox, *ant;
	Roteador* rot;
};

typedef struct roteador Roteador;
struct roteador{
	char* nome;
	char* operadora;
	LsRot* rotConectados;
};

typedef struct lsRot LsRot;
struct lsRot{
	CelRot *prim, *ult;
};

void CadastraRoteador (char* rot, char* operadora, LsRot* listaRot){
	Roteador* r = criaRoteador(rot, operadora);
	CelRot* celR = (CelRot*) malloc(sizeof(CelRot));
	celR->rot = r;
	celR->prox = NULL;
	
	if(listaRot->prim == NULL){
		listaRot->prim = celR;
		listaRot->ult = celR;
		
		celR->ant = NULL;
	}else{
		listaRot->ult->prox = celR;
		celR->ant = listaRot->ult;
		listaRot->ult = celR;
		
	}
};

Roteador* criaRoteador(char* rot, char* operadora){ //Não é uma função obrigatória, mas essencial
	Roteador* r = (Roteador*) malloc(sizeof(Roteador));	
	r->nome = (char*) malloc((strlen(rot)+1)*sizeof(char));
	r->operadora = (char*) malloc((strlen(operadora)+1)*sizeof(char));
	
	strcpy(r->nome, rot);
	strcpy(r->operadora, operadora);
	
	r->rotConectados = InicializaListaRot();
	
	return r;
}

LsRot* InicializaListaRot(){                    //Não é uma função obrigatória, mas essencial
	LsRot* listaRt = (LsRot*) malloc(sizeof(LsRot));
	listaRt->prim = NULL;
	listaRt->ult = NULL;
	
	return listaRt;
	
}
