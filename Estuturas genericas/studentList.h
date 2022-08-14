#ifndef studentlist_h
#define studentlist_h
#include "genericList.h"
#include "student.h"


typedef struct studentlist Studentlist;

//============== Funçoes do tad studentList.c =============
int BelongStudent2(void * name1,void * name2);

int PrintListStudent2(void * student,void * id);


//================== Tad  generico ========================

//Retira o aluno com a matricula
Generic * RemoveListStudent(Generic * list , char * nome);

//Fução que busca o estudante usando o callback 
int BelongStudent(Generic * list , char * name);
//Printar lista de estudante 
int PrintListStudent(Generic * list );


#endif