#include <stdio.h>
#include <stdlib.h>
#include "arv_exp.h"

struct arv {
    Arv * esquerda;
    Arv * direita;
    int operadorando;
    char operador;
};


Arv* CriaVazia(void){
    return NULL;
}

Arv* CriaOperador(char c, Arv* esq, Arv* dir){
    Arv * arvore = malloc(sizeof(Arv));

    arvore->direita = dir;
    arvore->esquerda = esq;
    arvore->operador = c;
    arvore->operadorando = 0; //coloquei zero pra nao entrar na condiçao do if

    return arvore;

}

Arv* CriaOperando(int valor){
    Arv * arvore = malloc(sizeof(Arv));

    arvore->direita = NULL;
    arvore->esquerda = NULL;
    arvore->operador = '\0';
    arvore->operadorando = valor; 

    return arvore;
}

void Imprime(Arv* arv){

    if(arv){
        Imprime(arv->esquerda);
        if (arv->operadorando != 0){
            printf("%d",arv->operadorando);
        }
        else {
            printf("%c",arv->operador);
        }
        Imprime(arv->direita);
    }

}

Arv* Libera (Arv* arv){
    if (arv){
        Libera(arv->direita);
        Libera(arv->esquerda);
        free(arv);
    }
}


float Avalia(Arv* arv){
    float total = 0;

    if (arv->operadorando == 0){
        float num1 = Avalia(arv->esquerda);
        float num2 = Avalia(arv->direita);

        if (arv->operador == '+'){
            total = num1 + num2;
        }
        else if(arv->operador == '-'){
            total = num1 - num2;
        }
        else if(arv->operador == '*'){
            total = num1 * num2;
        }
        else if(arv->operador == '/'){
            if (num2 == 0){
                printf("EEROO divisao por 0\n");
            }
            else {
                total = num1 / num2;
            }
        }

        return total;
    }
    else {
        return arv->operadorando;
    }

}

int Folhas(Arv* arv){
    
    if (arv == NULL){
        return 0;
    }
    
    if (arv->direita == NULL && arv->esquerda == NULL){ //achando o nó folha.
        return 1;
    }

    return Folhas(arv->esquerda) + Folhas(arv->direita);

}

int Altura(Arv* arv){
    if(arv == NULL){
        return 0;
    }

    if (arv->direita == NULL && arv->esquerda == NULL){ //achando o nó folha.
        return 0 ;
    }
    else {
        int esquerda = 1 + Altura(arv->esquerda);
        int direita = 1 + Altura(arv->direita);

        if (esquerda < direita){
            return direita;
        }
        else {
            return esquerda;
        }

    }


}


