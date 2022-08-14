#include <stdlib.h>
#include <stdio.h>
#include "TreeBi.h"


struct treebi {
    TreeBi * left;
    TreeBi * right;
    char nome;
    int id;
};

//Cria a arvore com null 
TreeBi * CreateTreeBi(){
    return NULL;
}

//Funçao para printar a arvore
void PrintTree(TreeBi * tree){
    
    printf(" <");
    if (tree){
        
        printf("[%d]%c ",tree->id,tree->nome);
        PrintTree(tree->left);
        PrintTree(tree->right);
    }
    printf("> ");

}
//Procurar e retornar o nó da arvore
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
//Inserir nó na Arvore
TreeBi * InsertInTree(TreeBi * tree, int id,char nome){
    
    if (tree == NULL){
        tree = malloc(sizeof(TreeBi));
        tree->id = id;
        tree->nome = nome;
        tree->right = NULL;
        tree->left = NULL;
    }
    else if (tree->id < id){
        tree->right = InsertInTree(tree->right,id,nome);
    }
    else {
        tree->left = InsertInTree(tree->left,id,nome);
    }
    
    return tree; //Se não tiver arvore

}

TreeBi * RemoveNode(TreeBi * tree , int id){
     
    if (tree == NULL){
        return NULL;
    }
    else if (tree->id < id){
        tree->right = RemoveNode(tree->right,id);
    }
    else if(tree->id > id){
        tree->left = RemoveNode(tree->left,id);
    }
    else {
        if (tree->left == NULL && tree->right == NULL){ //Se for uma folha
            free(tree);
            return NULL;
        }
        else if (tree->left != NULL && tree->right != NULL){ //nó comum
            //quando tem dois filhos troca e depois elimina
            TreeBi * aux = tree->left; 
            while (aux->right != NULL){
                aux = aux->right;
            }

            char n = tree->nome;
            int i = id;
            tree->id = aux->id;
            tree->nome = n;
            aux->id = id;
            aux->nome = n;

            tree->left = RemoveNode(tree->left,id);

        }
        else if (tree->left != NULL && tree->right == NULL){ //no com direita vazia
            TreeBi * aux = tree->left; 
            free(tree);
            return aux;
        }
        else if (tree->left == NULL && tree->right != NULL){//no com esquerda vazia
            TreeBi * aux = tree->right; 
            free(tree);
            return aux;
        }

    }


    return tree;

}






char ReturnName(TreeBi * tree){
    return tree->nome;
}

int ReturnId(TreeBi * tree){
    return tree->id;
}
