#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "palavra.h"
#include "tabelaHash.h"

#define tam 127

int main(){

    TabHash * hash;

    hash = IniciaTabela(tam);

    Palavra * a = CriaPalavra("Bruno");
    Palavra * b = CriaPalavra("Santos");
    Palavra * c = CriaPalavra("Fernandes");


    Palavra * x = AcessaTabela(hash ,"Bruno");
    Palavra * y = AcessaTabela(hash ,"Bruno");
    Palavra * z = AcessaTabela(hash ,"ffff");

    ImprimiTabelaHash(hash);


    return 0;
}