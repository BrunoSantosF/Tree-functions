#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"

struct student {
    char * name;
    int id;

}; 

Student * CreateStudent(int id , char * name){
    Student * student = malloc(sizeof(Student));
    student->id = id;
    student->name = strdup(name);

    return  student;
}

char * ReturnName(Student * student){
    return student->name;
}

int ReturnID(Student * student){
    return student->id;
}

void Print(Student * student){
    printf("Name: %s [%d]\n",ReturnName(student),ReturnID(student));
}

void FreeStudent(Student * student){
    free(student->name);
    free(student);
}




