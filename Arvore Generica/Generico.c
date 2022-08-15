#include <stdlib.h>
#include <stdio.h>
#include "Aluno.h"
#include "Generico.h"
#include <string.h>

struct generico {
    void * item;
    Generico * esq;
    Generico * dir;
};

Generico * CriarArvoreVazia(){
    return NULL;
}

Generico * inserirNo(void *  item ,Generico* esquerda,Generico * direita){
    Generico * arvore = malloc(sizeof(Generico));

    arvore->dir = direita;
    arvore->esq = esquerda;
    arvore->item = item;

    return arvore;

}

void ImprimiArvore(Generico * arvore){
    printf("< ");
    if (arvore){
        ImprimiAluno(arvore->item);
        ImprimiArvore(arvore->dir);
        ImprimiArvore(arvore->esq);
    }
    printf(">");
}

int  Busca(Generico * arvore,void * item){

    if (arvore){
        if (strcmp(ReturnaNome(arvore->item),item) == 0){
            return 1;
        }
        else {
            int esq =  Busca(arvore->esq, item);
            int dir = Busca(arvore->dir, item);

            if (esq){
                return 1;
            }
            if (dir){
                return 1;
            }

            return 0;
        }
        
    }
    return 0;

}



