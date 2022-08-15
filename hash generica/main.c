#include <stdio.h>
#include "TadHashGen.h"
#include "Aluno.h"

int main(){
    Aluno * matheus = inicializa_aluno("Matheus", 12345);
    Aluno * caio = inicializa_aluno("Caio", 54321);
    Aluno * afonso = inicializa_aluno("Afonso", 11111);
    Aluno * thamya = inicializa_aluno("Thamya", 22222);

    TabelaHash tabela;
    limpa_tabela(tabela);

    insere_tabela(tabela, matheus, hash_aluno);
    insere_tabela(tabela, caio, hash_aluno);
    insere_tabela(tabela, afonso, hash_aluno);
    insere_tabela(tabela, thamya, hash_aluno);
    
    printf("\n");

    imprime_tabela(tabela, imprime_aluno);

    printf("\n");

    Aluno * aluno_buscado = busca_tabela(tabela, thamya, hash_aluno, compara_aluno);
    if (aluno_buscado) imprime_aluno(aluno_buscado);

    libera_aluno(matheus);
    libera_aluno(caio);
    libera_aluno(afonso);
    libera_aluno(thamya);

    return 0;
}