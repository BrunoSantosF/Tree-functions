#ifndef generic_h
#define generic_h

typedef struct genericlist Generic;

//Criando a lista vazia 
Generic * CreateListGeneric();
//Criando uma lista generica sem sentinela.
Generic * InsertList(Generic * list,void * item);
//Remover celula da lista
Generic * RemoveList(Generic * list , void * key);
//Essa função é a função de callback e chama o ponteiro de função
int CallBackList(Generic * list , int Compare(void *,void *),void * data);
//Liberar lista 
void FreeList(Generic * list);



#endif
