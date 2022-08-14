#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "palavra.h"


struct palavra {
    char * palavra;
    int n; //Numero de frequencia
    Palavra * prox;
};


Palavra * CriaPalavra(char * string){
    Palavra * palavra = malloc(sizeof(Palavra));

    palavra->n = 0;
    palavra->palavra = strdup(string);
    palavra->prox = NULL;

    return palavra;

}

char * RetornaString(Palavra * palavra){
    return palavra->palavra;
}

void AtualizaRecorrencia(Palavra * palavra){
    palavra->n++;
}

Palavra * BuscaPalavra(Palavra * palavra ,char * chave){
    if (palavra == NULL){
        return NULL;
    }
    
    Palavra * aux = palavra;
    for (aux;aux != NULL;aux =aux->prox){
        if (!strcmp(RetornaString(aux),chave)){
            return aux;
        }
    }

    return NULL;
}

Palavra * InserePalavraNaLista(Palavra * palavra,Palavra * novaPalavra){
    novaPalavra->prox = palavra;
    return novaPalavra;
}

int ContaNumeroDePalavras(Palavra * palavra){
    Palavra * aux = palavra;
    int i = 0;
    for (aux;aux != NULL;aux = aux->prox){
        i++;
    }

    return i;
}

void LiberaLista(Palavra * palavra){
    Palavra * aux1 = palavra;
    Palavra * aux2 = NULL;

    for (aux1 ; aux1 != NULL ; aux2 = aux1->prox){
        free(palavra->palavra);
        free(palavra);
        aux1 = aux2;
    }
  
}

void ImprimiLista(Palavra * palavra){

    printf("%s \n",palavra->palavra);


/*    
    for (aux=palavra;aux != NULL ;aux = aux->prox){
        printf("%s [%d] \n",aux->palavra,aux->n);
    }
*/
}


