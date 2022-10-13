#include <stdio.h>
#include "TAB/TAB.h"

TAB* copia (TAB *a)
{
  if (!a)
    return a;
  return TAB_cria(a->info,copia(a->esq),copia(a->dir));
}

void main()
{
    TAB *a, *cop;

    int x1 = 10, x2=4, x3=16;
    a = TAB_cria(x1,NULL,NULL);
    a->esq = TAB_cria(x2,NULL,NULL);
    a->dir = TAB_cria(x3,NULL,NULL);

    cop = copia(a);
    TAB_imp_ident(cop);
}