#include <stdio.h>
#include <stdlib.h>
#include "TG/TG.h"

int nv(TG *g)
{
    if (!g)
        return 0;
    
    int qntd=0;
    while (g->prox_no)
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
        if (i>0)
            TG_ins_aresta(g,i-1,i);    
    }

    int qntd = nv(g);
    printf("Quantidade de Arestas: %d", qntd);

    TG_libera(g);
}