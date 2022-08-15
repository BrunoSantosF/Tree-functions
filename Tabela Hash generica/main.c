#include <stdlib.h>
#include <stdio.h>
#include "Aluno.h"
#include <string.h>
#include "hashGen.h"


int main(){

    Aluno * a = CriaAluno("bruno",1);
    Aluno * b = CriaAluno("luca",2);

    Hash * tabela = CriaTabela();

    tabela  = InsererirTabela(a,tabela,IndiceTabelaHash);

    return 0;
}


