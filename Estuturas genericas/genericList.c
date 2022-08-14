#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "genericList.h"
#include "student.h"

struct genericlist {
    void * item; //o tipo que ele pode receber pode ser de varios tipos
    Generic * next;
};

Generic * CreateListGeneric(){
    return NULL;
}

//Criando uma lista generica sem sentinela.
Generic * InsertList(Generic * list,void * item){
    Generic * assis = malloc(sizeof(Generic));
    assis->item = item;
    assis->next = list;
    return assis;

}

char * teste(void * item){

}

Generic * RemoveList(Generic * list , void * key){

    Generic * current = list;
    Generic * before = NULL;
    //ReturnName(current->item);

    while (strcmp(key,ReturnName(current->item)) && current != NULL ){
        before = current;
        current = current->next;
    }
    
    //Nao encontrou o aluno ou lista esta vazia
    if (current == NULL){
        return list;
    }
    
    //Se for a primeira celula da lista
    if (before == NULL){
        list  = list->next;
    }
    else { // se estiver no meio ou no final da lista
        before->next = current->next;
    }

    free(current); //lebera a celula
    
    return list;
}

//Essa função é a função de callback e chama o ponteiro de função
int CallBackList(Generic * list , int Compare(void *,void *),void * data){
    Generic * assis;
    for (assis = list;assis != NULL;assis = assis->next){
        int result =  Compare(assis->item,data);
        if (result == 0){ //se der 0 quer dizer que encontrou algo 
            return result;
        }
    }
    return 1;

}

void FreeList(Generic * list){
    Generic * current = list;
    Generic * before = NULL;

    while (current){
        before = current->next;
        free(current);
        current = before;
    }

}
