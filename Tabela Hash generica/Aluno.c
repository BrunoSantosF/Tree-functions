#include <stdlib.h>
#include <stdio.h>
#include "Aluno.h"
#include <string.h>


struct aluno {
    char * name;
    int id;
};


Aluno * CriaAluno(char * name , int id){
    Aluno * aluno = malloc(sizeof(Aluno));

    aluno->id = id;
    aluno->name = strdup(name);

    return aluno;

}

char * ReturnaNome(Aluno * aluno){
    return aluno->name;
}

int  ReturnaID(Aluno * aluno){
    return aluno->id;
}

void ImprimiAluno(Aluno * aluno){
    //printf("Aluno: %s // Matricula: %d\n",aluno->name,aluno->id);
    printf("%s",aluno->name);
}

void LiberaAluno(Aluno * aluno){
    free(aluno->name);
    free(aluno);
}

int IndiceTabelaHash(void * aluno, int tam){
    Aluno * alunoAux = (Aluno *)aluno;

    int total = 0;
    for (int i = 0; alunoAux->name[i] != '\0'; i++){
        total += alunoAux->name[i];
    }

    return total%tam;
}

