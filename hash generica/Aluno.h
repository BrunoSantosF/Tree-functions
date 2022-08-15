#ifndef ALUNO_H_
#define ALUNO_H_

typedef struct aluno Aluno;

Aluno * inicializa_aluno(char * nome, int matricula);

void imprime_aluno(void * aluno);

int compara_aluno(void * aluno1, void * aluno2);

int hash_aluno(void * aluno, int tamanho_tabela);

void libera_aluno(Aluno * aluno);

#endif