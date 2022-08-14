#ifndef HASH
#define HASH

typedef struct tabhash TabHash;

TabHash * IniciaTabela(int Tamanho);

Palavra * AcessaTabela(TabHash * table , char * string);

void ImprimiTabelaHash(TabHash * table);


#endif