#include <stdlib.h>
#include <stdio.h>
#include "TreeBi.h"



int main(){

    

    TreeBi * tree = CreateTreeBi();
    tree = InsertInTree(tree,40,'a');

    tree = InsertInTree(tree,45,'b');
    tree = InsertInTree(tree,30,'c');
    tree = InsertInTree(tree,50,'d');
    tree = InsertInTree(tree,20,'e');
    tree = InsertInTree(tree,35,'f');
    tree = InsertInTree(tree,48,'g');
    tree = InsertInTree(tree,55,'h');

    PrintTree(tree);

    
    TreeBi * aux1 =  SearchBi(tree, 20);
    TreeBi * aux2 =  SearchBi(tree, 50);

    printf("\n\n");
    printf("\n============Busca de função ==============\n");
    printf("letra : %c \n",ReturnName(aux1));
    printf("letra : %c \n",ReturnName(aux2));
    
    TreeBi * teste =  RemoveNode(tree , 30);
    printf("\n============Retirada de função ==============\n");
    PrintTree(tree);
    printf("\n\n");


    

    return 0;
}