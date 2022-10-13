#include <stdio.h>
#include <stdlib.h>
#include "TG/TG.h"

int nao_tem_mesma_cor(TG *g)
{
    if (!g || !g->prox_no)
        return 2;
    
    int verif = nao_tem_mesma_cor(g->prox_no);
    if (verif==1)
        return 1;
    if (g->cor != g->prox_no->cor)
        return 1;
    return 0;
}

void main()
{
    TG *g=NULL;
    for (int i=0;i<10;i++)
    {
        g=TG_ins_no(g,i);
        g->cor=i;
        if (i>0)
            TG_ins_aresta(g,i-1,i);    
    }

    int verif = nao_tem_mesma_cor(g);
    if (verif==1)
        printf("Vizinhos tem cor diferente!");
    else if (verif==0)
        printf("Vizinhos tem cor iguais!");
    else
        printf("Error! Grafo invalido!");

    TG_libera(g);
}