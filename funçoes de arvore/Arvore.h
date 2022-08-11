#ifndef ARVORE_H
#define ARVORE_H

typedef struct arvore Arvore;

//Inicia a arvore Zerada.
Arvore * IniciandoArvore();

//Adiciona as informaçoes na arvore
Arvore * CriaArvore(char  nome,int id,Arvore * esq,Arvore * dir);

//Printar as informaçoes
void PrintarArvore(Arvore * arvore);

//Ve a chave pertence na arvore 
Arvore * VerificaSePertence(Arvore * arvore,char chave);

//Printa o nome que esta no nó da arvore
void PrintNome(Arvore * arvore);

//Limpa a memoria da arvore
void LimparMemoria(Arvore * arvore);

//Quantida de folhas da arvore
int QuantidadeFolhas(Arvore * arvore);

//Retorna o nó pai do no selecionado
Arvore * RetornaNoPai(Arvore * arvore ,char  chave);

//Retorna a quantidade de vezes que a "chave" aparece na arvore
int QuantidadeDeFrequencias(Arvore * arvore,char  chave);


#endif