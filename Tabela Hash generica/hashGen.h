#ifndef generico
#define generico
#define n 127

typedef struct hash Hash;

Hash * CriaTabela();

Hash * InsererirTabela(void * aluno , Hash * tabela , int (*Callback)(void *, int));

#endif