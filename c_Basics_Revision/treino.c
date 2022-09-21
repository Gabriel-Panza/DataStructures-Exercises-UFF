#include <stdio.h>
#include <stdlib.h>

typedef struct Lista
{
    int info;
    struct Lista *prox;
}TL;

TL *insere_ini(TL *li, int num)
{
    TL *novo = (TL*) malloc(sizeof(TL));
    if (!novo)
        exit(1);
    novo->info = num;
    novo->prox = li;

    return novo;
}

TL *insere_fim(TL *li, int num)
{
    TL *novo = (TL*) malloc(sizeof(TL));
    if (!novo)
        exit(1);
    novo->info = num;
    novo->prox = NULL;
    
    TL *aux=li;
    TL *auxAnt = li;
    while (aux->prox!=NULL)
    {
        auxAnt = aux;
        aux=aux->prox;
    }
    if (auxAnt!=NULL)
        auxAnt->prox = novo;
    else
        li = novo;
    return li;
}

void imp(TL *li)
{
    TL *aux;
    for (aux=li;aux!=NULL;aux=aux->prox)
    {
        printf("%d", aux->info);
    }
    free(aux);
}


void main()
{
    TL *l;

    l = insere_ini(l,1);
    l = insere_ini(l,2);
    //l = insere_fim(l,3);
    imp(l);
    free(l);
}