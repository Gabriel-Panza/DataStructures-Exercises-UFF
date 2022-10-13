#include <stdio.h>
#include "TAB/TAB.h"

TAB* espelho (TAB *a)
{
    if (!a)
        return a;
    return TAB_cria(a->info,espelho(a->dir),espelho(a->esq));
}
void main()
{
    TAB *a, *esp;

    int x1 = 10, x2=4, x3=16;
    a = TAB_cria(x1,NULL,NULL);
    a->esq = TAB_cria(x2,NULL,NULL);
    a->dir = TAB_cria(x3,NULL,NULL);

    esp = espelho(a);
    TAB_imp_ident(esp);
}