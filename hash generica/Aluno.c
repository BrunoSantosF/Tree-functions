#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Aluno.h"

typedef struct aluno Aluno;
struct aluno{
    char * nome;
    int matricula;
};

Aluno * inicializa_aluno(char * nome, int matricula){
    Aluno * aluno = malloc(sizeof(Aluno));
    aluno->matricula = matricula;
    aluno->nome = strdup(nome);
    return aluno;
}

void imprime_aluno(void * aluno){
    Aluno * aluno_cast = (Aluno*) aluno;
    printf("%d | %10s\n", aluno_cast->matricula, aluno_cast->nome);
}

int compara_aluno(void * aluno1, void * aluno2){
    Aluno * aluno_cast1 = (Aluno*) aluno1;
    Aluno * aluno_cast2 = (Aluno*) aluno2;

    if (aluno1 && aluno2) return !strcmp(aluno_cast1->nome, aluno_cast2->nome);
}

void libera_aluno(Aluno * aluno){
    free(aluno->nome);
    free(aluno);
}

int hash_aluno(void * aluno, int tamanho_tabela){
    Aluno * aluno_cast = (Aluno*)aluno;
    return strlen(aluno_cast->nome) % tamanho_tabela;
}
