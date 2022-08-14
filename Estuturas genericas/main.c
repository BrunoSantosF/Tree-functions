#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "studentList.h"


int main(){

    Generic * list =  CreateListGeneric(); //Criando lista generica

    Student *a,*b,*c,*d,*e,*f;

    a = CreateStudent(1,"afonso");
    b = CreateStudent(2,"bruno");
    c = CreateStudent(3,"carlos");
    d = CreateStudent(4,"daniel");
    e = CreateStudent(5,"emanuel");
    f = CreateStudent(6,"felipe");

    list = InsertList(list,a);
    list = InsertList(list,b);
    list = InsertList(list,c);
    list = InsertList(list,d);
    list = InsertList(list,e);
    list = InsertList(list,f);

    PrintListStudent(list );

    printf("\nRemovendo aluno : daniel \n");

    list = RemoveListStudent( list , "daniel");
    PrintListStudent(list );

    printf("\nNome bruno está na lista ? \n");
    if (!BelongStudent( list ,"daniel") ){
        printf("Sim\n");
    }
    else {
        printf("Nao\n");
    }
    

    return 0;
}



