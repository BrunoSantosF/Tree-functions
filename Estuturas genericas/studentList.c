#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "genericList.h"
#include "student.h"

struct studentList{
    float cr;
    int id;
};
//============== Funçoes do tad studentList.c =============
int BelongStudent2(void * name1,void * name2){
    if (strcmp(ReturnName(name1),name2) == 0){
        return 0; //se for 0 quer dizer que achou o aluno , atraves do nome.
    }
    return 1;
}

int PrintListStudent2(void * student,void * id){
    Print (student);
    return 1;
}


//================== Tad  generico ========================

//Retira o aluno com a matricula
Generic * RemoveListStudent(Generic * list , char * name){
    Generic * l = RemoveList( list , name); // retorna a lista com o estudante retirado
    return l;
}

//Fução que busca o estudante usando o callback 
int BelongStudent(Generic * list , char * name){
    return CallBackList(list ,BelongStudent2,name);
}

//Printar lista de estudante 
int PrintListStudent(Generic * list ){
    return CallBackList(list ,PrintListStudent2,NULL);
}




