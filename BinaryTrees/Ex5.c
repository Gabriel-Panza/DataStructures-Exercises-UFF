#include <stdio.h>
#include "TAB/TAB.h"

void colore (TAB* arv)
{
    /* Code to color */
}

TAB* colore_arv (TAB* arv)
{
    if (arv)
        return arv;
}

void main()
{
    TAB *a, *comCor;

    int x1 = 10, x2=4, x3=16;
    a = TAB_cria(x1,NULL,NULL);
    a->esq = TAB_cria(x2,NULL,NULL);
    a->dir = TAB_cria(x3,NULL,NULL);

    comCor = colore_arv(a);
    TAB_imp_ident(comCor);
}