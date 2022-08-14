#ifndef PALAVRA
#define PALAVRA

typedef struct palavra Palavra;


Palavra * CriaPalavra(char * string);

char * RetornaString(Palavra * palavra);

void AtualizaRecorrencia(Palavra * palavra);

Palavra * BuscaPalavra(Palavra * palavra ,char * chave);

Palavra * InserePalavraNaLista(Palavra * palavra,Palavra * novaPalavra);

int ContaNumeroDePalavras(Palavra * palavra);

void LiberaLista(Palavra * palavra);

void LiberaLista(Palavra * palavra);

void ImprimiLista(Palavra * palavra);

#endif