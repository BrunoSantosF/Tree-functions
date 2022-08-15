#ifndef arvore_h
#define arvore_h
#include "Aluno.h"
#include "Generico.h"
#include "Arvore.h"


Generico * CriarArvoreVaziaPrincipal();
Generico * InseriNaArvorePrincipal(char * nome, int id,Generico * esquerda,Generico * direita);
void Imprimir(Generico * arvore);
void Busca2(Generico * arvore,char * nome);

#endif