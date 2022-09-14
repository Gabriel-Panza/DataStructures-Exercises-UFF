#include <stdio.h>
#include "TAB/TAB.h"

TAB* copia (TAB *a)
{
  /*Code is going to be here*/
}

void main()
{
    TAB *a;
    int x = 10;
    a = TAB_inicializa();
    a = TAB_cria(x,NULL,NULL);
    copia(a);
}