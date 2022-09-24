#include <stdio.h>
#include "TAB/TAB.h"

TAB* retira_pares (TAB* arv)
{
    if (arv)
        return arv;
}

void main()
{
    TAB *a, *semPar;

    int x1 = 10, x2=4, x3=16;
    a = TAB_cria(x1,NULL,NULL);
    a->esq = TAB_cria(x2,NULL,NULL);
    a->dir = TAB_cria(x3,NULL,NULL);

    semPar = retira_pares(a);
    TAB_imp_ident(semPar);
}