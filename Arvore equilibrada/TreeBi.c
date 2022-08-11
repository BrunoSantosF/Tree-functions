#include <stdlib.h>
#include <stdio.h>
#include "TreeBi.h"


struct treebi {
    TreeBi * left;
    TreeBi * right;
    int id;
};

//Cria a arvore com null 
TreeBi * CreateTreeBi(int valor){
    return NULL;
}

//Funçao para printar a arvore
void PrintTree(TreeBi * tree){
    
    printf("< ");
    if (tree){
        printf("%d ",tree->id);
        PrintTree(tree->left);
        PrintTree(tree->right);
    }

}

TreeBi * SearchBi(TreeBi * tree,int chave){
    
    if (tree == NULL){
        return NULL;
    }

    if (tree->id == chave){
        return tree;
    }
    else {
        //Precisa de retorno pois toda recursao  precisa de retorno
        TreeBi * left = SearchBi(tree->right,chave);
        TreeBi * right = SearchBi(tree->left,chave);

        if (left){
            return left;
        }
        if (right){
            return right;
        }

        return NULL;
    }

}

TreeBi * InsertInTree(TreeBi * tree, int key ){
    if (tree == NULL){
        return NULL;
    }

    if(tree->id < key){
        InsertInTree(tree->right,key);
    }
}

