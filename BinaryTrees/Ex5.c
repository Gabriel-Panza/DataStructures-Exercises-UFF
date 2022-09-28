#include <stdio.h>
#include "TAB/TAB.h"

void colore (TAB* arv)
{
    if (!arv)
        return;
    colore(arv->esq);
    colore(arv->dir);
    if (arv->esq || arv->dir){
        if (arv->esq){
            if (arv->esq->cor == 1) 
                arv->cor = 0;
            else 
                arv->cor = 1;
        }else{
            if (arv->dir->cor == 1) 
                arv->cor = 0;
            else 
                arv->cor = 1;
        }
    }
    else
        arv->cor = 1;
    return;
}

void main()
{
    TAB *a;

    int x1 = 10, x2=4, x3=16;
    a = TAB_cria(x1,NULL,NULL);
    a->esq = TAB_cria(x2,NULL,NULL);
    a->dir = TAB_cria(x3,NULL,NULL);

    colore(a);    
    TAB_imp_ident(a);
}