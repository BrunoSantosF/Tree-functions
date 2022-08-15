#ifndef generico_h
#define generico_h


typedef struct generico Generico;

Generico * CriarArvoreVazia();

Generico * inserirNo(void *  item ,Generico* esquerda,Generico * direita);

void ImprimiArvore(Generico * arvore);

int  Busca(Generico * arvore,void * item);


#endif