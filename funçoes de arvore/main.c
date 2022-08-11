#include <stdlib.h>
#include <stdio.h>
#include "Arvore.h"


int main(){

    Arvore * arvore = IniciandoArvore();

    arvore  = CriaArvore('A',1,
                    CriaArvore('B',2,CriaArvore('D',4,IniciandoArvore(),IniciandoArvore()),
                                     CriaArvore('E',5,IniciandoArvore(),IniciandoArvore())),
                    CriaArvore('C',3,CriaArvore('F',6,IniciandoArvore(),IniciandoArvore()),
                                     CriaArvore('G',7,CriaArvore('H',8,IniciandoArvore(),IniciandoArvore()),
                                                      CriaArvore('I',9,IniciandoArvore(),IniciandoArvore())))
    );
    printf("\nArvore :\n");
    PrintarArvore(arvore);
    printf("\n");


    Arvore * arv = VerificaSePertence(arvore,'a');
    printf("\nProcurando Letra : ");
    PrintNome(arv);
    

    printf("\nQuantida de folhas da arvore : %d\n\n",QuantidadeFolhas(arvore));

    Arvore * arv1 = RetornaNoPai(arvore ,'D');
    printf("Nó pai da letra F : ");
    PrintNome(arv1);

    printf("\nQuantida de vezes que aparece a letra T: %d \n\n",QuantidadeDeFrequencias(arvore,'B'));

    LimparMemoria(arvore);

    return 0;
}