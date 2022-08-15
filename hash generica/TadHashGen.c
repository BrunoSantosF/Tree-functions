#include <stdio.h>
#include "TadHashGen.h"

static int hash_generica(void * it, int(*hash)(void*, int), int tamanho_tabela){
    return hash(it, tamanho_tabela);
}

void limpa_tabela(TabelaHash tab){
    int i;
    for(i=0;i<N;i++) tab[i] = NULL;
}

void insere_tabela(TabelaHash tab, void * it, int(*hash)(void*, int)){
    int indice = hash_generica(it, hash, N);

    int count = 0;
    while(tab[indice]!=NULL) {
        indice = (indice+1) % N;
        
        if (count++ == N) {
            printf("Tabela cheia\n");
            return;
        }
    }

    tab[indice] = it;
}

void * busca_tabela(TabelaHash tab, void * it, int(*hash)(void*, int), int(*cmp)(void*, void*)){
    int indice = hash_generica(it, hash, N);

    void * aux = tab[indice];
    int count=0;
    while (!cmp(aux, it)) {
        indice = (indice+1) % N;

        if (count++ == N) {
            printf("Item não está na tabela\n");
            return NULL;
        }
        aux = tab[indice];
    }

    return aux;    
}

void imprime_tabela(TabelaHash tab, void(*imp)(void*)){
    int i;
    for(i=0;i<N;i++) if (tab[i]!=NULL) imp(tab[i]);
}