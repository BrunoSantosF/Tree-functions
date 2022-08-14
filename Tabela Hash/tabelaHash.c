#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "palavra.h"
#include "tabelaHash.h"


struct tabhash {
    Palavra ** vetor; // vetor da tabela Hash
    int tamanho; // tamanho do vetor
};

//Essa funçao retorna o indice na tabela tabela.

int CalculoTabelaHash(char * string,int tamanho){
    int totalSoma =0;

    for (int i = 0; string[i] != '\0';i++ ){
        totalSoma += string[i];
        //printf("-%c-\n",string[i]); 
    }
    return totalSoma%tamanho;
}


TabHash * IniciaTabela(int Tamanho){
    TabHash * hash = malloc(sizeof(TabHash));
    
    hash->tamanho =  Tamanho; //Passando o tamanho da tabela

    //Coloca o tamanho no vetor de string e insere tudo com null 
    hash->vetor = calloc(Tamanho,sizeof(Palavra *));

    return hash;
    
}

Palavra * AcessaTabela(TabHash * table , char * string){
        
    int index  =  CalculoTabelaHash(string,table->tamanho);

    Palavra * palavra = BuscaPalavra(table->vetor[index],string);

    //se palavra for verdadeiro ele tem q retorna ,mas se for vazio ira adicionar a lista.
    if(palavra){
        return palavra;
    }
    else {
        //Inserindo palavra na lista 
        palavra =  CriaPalavra(string);
        table->vetor[index] =  InserePalavraNaLista(table->vetor[index],palavra);

    }

    return palavra;
}

void ImprimiTabelaHash(TabHash * table){

    for (int i = 0;i < table->tamanho;i++){
        printf("Posicao [%d] : ",i);
        ImprimiLista(table->vetor[i]);
    }

}
