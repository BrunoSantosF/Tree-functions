#include <stdlib.h>
#include <stdio.h>
#include "Arvore.h"
#include <string.h>


int main(){
    Generico * lista = CriarArvoreVaziaPrincipal();
    
    lista =  InseriNaArvorePrincipal("bruno", 3,
             InseriNaArvorePrincipal("luca", 2,CriarArvoreVaziaPrincipal(),CriarArvoreVaziaPrincipal()),
             InseriNaArvorePrincipal("joao", 1,CriarArvoreVaziaPrincipal(),CriarArvoreVaziaPrincipal())
    );
    
    Imprimir(lista);

    Busca2(lista ,"j");

    return 0;
}