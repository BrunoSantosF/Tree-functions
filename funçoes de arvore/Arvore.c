#include <stdlib.h>
#include <stdio.h>
#include "Arvore.h"
#include "string.h"


struct arvore {
    int id;
    char nome;
    Arvore * esquerda;
    Arvore * direita;

};

//Inicia a Arvore com null
Arvore * IniciandoArvore(){
    return NULL;
}

//Insere as informaçoes na arvore 
Arvore * CriaArvore(char nome,int id,Arvore * esq,Arvore * dir){
    Arvore * arvore =  malloc(sizeof(Arvore));

    arvore->id = id;
    arvore->nome = nome;
    arvore->direita = dir;
    arvore->esquerda = esq;

    return arvore;

}

void PrintarArvore(Arvore * arvore){
    printf("<");
    if (arvore){
        printf("%c ",arvore->nome);
        PrintarArvore(arvore->direita);
        PrintarArvore(arvore->esquerda);
        
    }
    printf(">");

}

void PrintNome(Arvore * arvore){
    if (arvore == NULL){
        printf("Nao encontrado\n");
        return;
    }
    printf("%c\n",arvore->nome);
}

Arvore * VerificaSePertence(Arvore * arvore,char chave){
    Arvore * esquerda,*direita;
    if (arvore == NULL){
        return NULL;
    }
    else {
        if (arvore->nome == chave){
            return arvore;
        }
        else {
            esquerda = VerificaSePertence(arvore->esquerda,chave);
            direita = VerificaSePertence(arvore->direita,chave);

            if (esquerda){
                return esquerda;
            }
            if (direita){
                return direita;
            }

            return  NULL;
        }
        
    }
    
}

int QuantidadeDeFrequencias(Arvore * arvore,char  chave){
    
    if(arvore == NULL){
        return 0;
    }
    if (arvore->nome == chave){
        return 1 + QuantidadeDeFrequencias(arvore->direita,chave) + QuantidadeDeFrequencias(arvore->esquerda,chave);
    }
    else {
        return QuantidadeDeFrequencias(arvore->direita,chave) + QuantidadeDeFrequencias(arvore->esquerda,chave); 
    }
}

int QuantidadeFolhas(Arvore * arvore){

    if (arvore == NULL){
        return 0;
    }
    else if (!arvore->direita && !arvore->esquerda){ //Achou o nó (pois tem dois null)
        return 1;
    }
    else { //Continua a proucrar e somar até achar
        return QuantidadeFolhas(arvore->direita) + QuantidadeFolhas(arvore->esquerda);
    }

}

Arvore * RetornaNoPai(Arvore * arvore ,char  chave){
    Arvore *esquerda ,*direita;

    if (arvore == NULL){
        return NULL;
    }

    if (arvore->direita != NULL && arvore->direita->nome == chave || arvore->esquerda != NULL && arvore->esquerda->nome == chave){
        return arvore;
    }
    else {

        direita = RetornaNoPai(arvore->direita ,chave);
        esquerda = RetornaNoPai(arvore->esquerda ,chave);

        if(esquerda){
            return esquerda;
        }
        if(direita){
            return direita;
        }

        return NULL;
    }
     
}


void LimparMemoria(Arvore * arvore ){
    if (arvore){
        LimparMemoria(arvore->esquerda);
        LimparMemoria(arvore->direita);
        free(arvore);
    }
}


