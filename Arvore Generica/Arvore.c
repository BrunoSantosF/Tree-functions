#include <stdlib.h>
#include <stdio.h>
#include "Aluno.h"
#include "Generico.h"
#include "Arvore.h"
#include <string.h>

//CriaAluno(char * name , int id);

Generico * CriarArvoreVaziaPrincipal(){
    return CriarArvoreVazia();
}

Generico * InseriNaArvorePrincipal(char * nome, int id,Generico * esquerda,Generico * direita){
    inserirNo(CriaAluno(nome , id), esquerda, direita);
}

void Imprimir(Generico * arvore){
     ImprimiArvore(arvore);
}

void Busca2(Generico * arvore,char * nome){
    if (Busca(arvore, nome)){
        printf("\nSim, o nome %s está\n",nome);
    }
    else {
         printf("\nNao, o nome %s nao está\n",nome);
    }
    
}


