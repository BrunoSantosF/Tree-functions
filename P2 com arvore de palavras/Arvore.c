#include <stdio.h>
#include <stdlib.h>
#include "Arvore.h"
#include <string.h>

struct arvore {
    char * palavra;
    int id;
    int frequencia;
    Arvore * esquerda;
    Arvore * direita;    

};


//Cria uma árvore vazia
Arvore* Arvore_criavazia (){
    return NULL;
}

Arvore * InsereNaArvore(Arvore * arvore,char * string){
    
    if (arvore == NULL){
        arvore = malloc(sizeof(Arvore));
        arvore->id = CriaId(string);
        arvore->frequencia = 1;
        arvore->palavra = strdup(string);
        arvore->direita = arvore->esquerda = NULL;
    }
    else if (arvore->id == CriaId(string) && !strcmp(string,RetornaNome(arvore))){
        arvore->frequencia++;
    }
    else if (arvore->id < CriaId(string)){
        arvore->direita = InsereNaArvore(arvore->direita,string);
    }
    else {
        arvore->esquerda = InsereNaArvore(arvore->esquerda,string);
    }
   
   return arvore;

}
//Retornando o id da arvore
int RetornaId(Arvore * arvore){
    return arvore->id;
}


//Cria o id da palavra e retorna o numero
int CriaId(char * string){
    int resultado = 0;
    int i = 0;
    for (i; string[i] != '\0';i++){
        resultado += string[i];
    }

    return resultado;

}

//Retorna o nome
char * RetornaNome(Arvore * arvore){
    return arvore->palavra;
}

//imprime as informações dos nós da árvore
void Arvore_imprime (Arvore* arvore){
    if (arvore){
        printf("%s %d\n",RetornaNome(arvore),arvore->frequencia);
        Arvore_imprime(arvore->direita);
        Arvore_imprime(arvore->esquerda);
        
    }

}

int MaiorFrequencia(Arvore * arvore){
    int atual = 0,esquerda =0,direita = 0;

    atual = RetornaFrequencia(arvore);
    
    if (arvore->direita != NULL){
        direita = MaiorFrequencia(arvore->direita);

        if(direita > atual){
            atual = direita;
        }
    }    

    if (arvore->esquerda != NULL){
        esquerda = MaiorFrequencia(arvore->esquerda);

        if(esquerda > atual){
            atual = esquerda;
        }
    }

    return atual;

}

int RetornaFrequencia(Arvore * arvore){
    return arvore->frequencia;
}

//Retorna o numero de nó que a na arvore , que seria o numero de palavras distintas
int PalavrasDistintas(Arvore * arvore){
    if (arvore == NULL){
        return 0;
    }
    return 1 + PalavrasDistintas(arvore->direita) + PalavrasDistintas(arvore->esquerda);
}

//Palvras totais
int PalavrasTotais(Arvore * arvore){
    int i = 0;
    if (arvore == NULL){
        return 0;
    }
    
    return  RetornaFrequencia(arvore) + PalavrasTotais(arvore->direita) + PalavrasTotais(arvore->esquerda);
   
}


Arvore * VerificaSePertence(Arvore * arvore,int frequencia){
    Arvore * esquerda,*direita;
    if (arvore == NULL){
        return NULL;
    }
    else {
        if (arvore->frequencia == frequencia){
            return arvore;
        }
        else {
            esquerda = VerificaSePertence(arvore->esquerda,frequencia);
            direita = VerificaSePertence(arvore->direita,frequencia);

            if (esquerda){
                return esquerda;
            }
            if (direita){
                return direita;
            }

            return  NULL;
        }
        
    }
    
}





/*

//cria uma árvore com a informação do nó raiz c, e
//com subárvore esquerda e e subárvore direita d
Arvore* Arvore_cria (char c, Arvore* e, Arvore* d){
    Arvore * arvore = malloc(sizeof(Arvore));
    arvore->caractere = c;
    arvore->direita = d;
    arvore->esquerda = e;

    return arvore; 
}

//libera o espaço de memória ocupado pela árvore a
Arvore* Arvore_libera (Arvore* a);

//retorna true se a árvore estiver vazia e false
//caso contrário
int Arvore_vazia (Arvore* a);

//indica a ocorrência (1) ou não (0) do caracter c
int Arvore_pertence (Arvore* a, char c);

//imprime as informações dos nós da árvore
void Arvore_imprime (Arvore* a);



//retorna a mãe de um dado no
Arvore* Arvore_pai (Arvore* a, char c);

//retorna a quantidade de folhas de uma Arvoreore binaria
int folhas (Arvore* a);

//retorna o numero de ocorrencias de um dado caracter na Arvoreore
int ocorrencias (Arvore* a, char c);

//retorna o campo informacao de um dado no
char info (Arvore* a);

//retorna a altura da árvore
int altura (Arvore* a); 


*/












