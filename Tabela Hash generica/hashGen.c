#include <stdlib.h>
#include <stdio.h>
#include "Aluno.h"
#include <string.h>
#include "hashGen.h"



struct hash{
    void * vetor[n];
};



Hash * CriaTabela(){
    Hash * tabela;

    for (int i =0; i < n;i++){
        tabela->vetor[i] = NULL;
    }
}

Hash * InsererirTabela(void * aluno , Hash * tabela , int (*Callback)(void *, int)){
    
    int index = Callback(aluno,n);

    return tabela->vetor[index] = aluno;

}




