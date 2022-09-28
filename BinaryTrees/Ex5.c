#include <stdio.h>
#include "TAB/TAB.h"

void colore (TAB* arv)
{
    arv->cor= 0;
    arv->esq->cor=1;
    arv->dir->cor=1;
}

void main()
{
    TAB *a, *comCor;

    int x1 = 10, x2=4, x3=16;
    a = TAB_cria(x1,NULL,NULL);
    a->esq = TAB_cria(x2,NULL,NULL);
    a->dir = TAB_cria(x3,NULL,NULL);

    colore(a);
    TAB_imp_ident(comCor);
}