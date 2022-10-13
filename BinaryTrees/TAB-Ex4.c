#include <stdio.h>
#include "TAB/TAB.h"

TAB* retira_pares (TAB* arv, int info)
{
    if(!arv)
        return arv;
    if(info%2==0)
    {
        arv->esq = TABB_retira_pares(arv->esq, info); 
        arv->dir = TABB_retira(arv->dir, arv->dir->info);
    }
    else //info encontrada
    {
        if((!arv->esq) && (!arv->dir)) //CASO (1)
        {
            free(arv);
            arv = NULL;
        }
        else if((!arv->esq) || (!arv->dir)) //CASO (2)
        {
            TAB *temp = arv;
            if(!arv->esq) arv = arv->dir;
            else arv = arv->esq;
            free(temp); 
        }
        else //CASO (3)
        {
            TAB *filho = arv->esq;
            while(filho->dir) filho = filho->dir;
            arv->info = filho->info;
            filho->info = info;
            arv->esq = TAB_retira_pares(arv->esq, info);
        }
  }
  return arv; 
}

void main()
{
    TAB *a, *semPar;

    int x1 = 10, x2=4, x3=16;
    a = TAB_cria(x1,NULL,NULL);
    a->esq = TAB_cria(x2,NULL,NULL);
    a->dir = TAB_cria(x3,NULL,NULL);

    semPar = retira_pares(a,a->info);
    TAB_imp_ident(semPar);
}