#include <stdio.h>
#include "TAB/TAB.h"

int igual (TAB* a1, TAB* a2)
{
    if (!a1 || !a2)
        return 2;
    
    int ehIgual;
    while (a1 && a2)
    {
        if ((a1->info)==(a2->info))
        {
            ehIgual = igual(a1->esq,a2->esq);
            if (ehIgual==1)
                return 1;
            else if (ehIgual==2)
                return 2;
            ehIgual = igual(a1->dir,a2->dir);
            if (ehIgual==1)
                return 1;
            else if (ehIgual==2)
                return 2;
            else
                return 0;
        }
        else
        {
            return 1;
        }
    }
}
void main()
{
    TAB *a, *b;
    int ehIgual;

    int x1 = 10, x2=4, x3=16;
    a = TAB_cria(x1,NULL,NULL);
    a->esq = TAB_cria(x2,NULL,NULL);
    a->dir = TAB_cria(x3,NULL,NULL);
    b = TAB_cria(x1,NULL,NULL);
    b->esq = TAB_cria(x2,NULL,NULL);
    b->dir = TAB_cria(x3,NULL,NULL);

    ehIgual = igual(a, b);
    TAB_imp_ident(a);
    TAB_imp_ident(b);
    if (ehIgual==0)
        printf("Elas sao iguais!");
    else if(ehIgual==1)
        printf("Elas nao sao iguais!");
    else
        printf("Houve um problema na criação da(s) Árvore(s)");
}