#ifndef Arvore_h
#define Arvore_h

/*
- int folhas (Arv* a); //retorna o número de folhas da árvore
- int ocorrencias (Arv* a , char* nome); //retorna o número de vezes que o aluno aparece na árvore
- int altura (Arv* a); retorna a altura da árvore

*/


typedef struct arvore Arvore;

//Retorna arvore vazia
Arvore* Arvore_criavazia (void);
//Retorna a arvore inserida
Arvore * InsereNaArvore(Arvore * arvore,char * string);
//Retornando o id da arvore
int RetornaId(Arvore * arvore);
//Cria o id da palavra e retorna o numero
int CriaId(char * string);
//Retorna o nome
char * RetornaNome(Arvore * arvore);
//imprime as informações dos nós da árvore
void Arvore_imprime (Arvore* arvore);
//Maior frequencia
int MaiorFrequencia(Arvore * arvore);
//Retorna o numero de frequencia
int RetornaFrequencia(Arvore * arvore);
//Retorna a quantidade
int PalavrasDistintas(Arvore * arvore);
//Palavras totaiss
int PalavrasTotais(Arvore * arvore);
//Busca a palavra que eu quero
Arvore * VerificaSePertence(Arvore * arvore,int frequencia);

#endif /* Arvoreore_h */
