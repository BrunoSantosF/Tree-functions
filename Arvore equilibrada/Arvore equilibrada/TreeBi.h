#ifndef TREE
#define TREE

typedef struct treebi TreeBi;

TreeBi * CreateTreeBi();

void PrintTree(TreeBi * tree);

TreeBi * SearchBi(TreeBi * tree,int chave);

TreeBi * InsertInTree(TreeBi * tree, int id,char nome);

char ReturnName(TreeBi * tree);

int ReturnId(TreeBi * tree);

//Retirar nó
TreeBi * RemoveNode(TreeBi * tree , int id);

#endif