#ifndef TAH_HASH_GENERICO_
#define TAH_HASH_GENERICO_

#define N 3
typedef void * TabelaHash[N];

void limpa_tabela(TabelaHash tab);

void insere_tabela(TabelaHash tab, void * it, int(*hash)(void*, int));

void * busca_tabela(TabelaHash tab, void * it, int(*hash)(void*, int), int(*cmp)(void*, void*));

void imprime_tabela(TabelaHash tab, void(*imp)(void*));

#endif