#ifndef Aluno_h
#define Aluno_h

typedef struct aluno Aluno;

Aluno * CriaAluno(char * name , int id);

char * ReturnaNome(Aluno * aluno);

int  ReturnaID(Aluno * aluno);

void ImprimiAluno(Aluno * aluno);

void LiberaAluno(Aluno * aluno);

int IndiceTabelaHash(void * aluno, int tam);


#endif