#include <stdio.h>
#include "TAB/TAB.h"

int igual (TAB* a1, TAB* a2)
{
    if (!a1 || !a2)
        return 0;
    
    return 2;
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
    if (ehIgual==1)
        printf("Elas sao iguais!");
    else if(ehIgual==0)
        printf("Elas nao sao iguais!");
    else
        printf("Houve um problema na criação da(s) Árvore(s)");
}