#include <stdio.h>
#include <stdlib.h>
#include "TG/TG.h"

int nn(TG *g)
{
    if (!g)
        return 0;
    
    int qntd=0;
    while (g)
    {
        g=g->prox_no;
        qntd+=1;
    }
    return qntd;
}

void main()
{
    TG *g=NULL;
    for (int i=0;i<10;i++)
    {
        g=TG_ins_no(g,i);
    }
    
    int qntd = nn(g);
    printf("Quantidade de nos: %d", qntd);

    TG_libera(g);
}