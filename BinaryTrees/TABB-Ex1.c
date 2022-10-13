#include <stdlib.h>
#include <string.h>
#include "TABB.h"

int len(TABB *a, int N){
    if (!a)
        return 0;

    int len_vetor = 0;
    if(a->info < N)
        len_vetor += 1;

    if(a->esq && a->esq->info < N)
        len_vetor += len(a->esq, N);

    if(a->dir && a->dir->info < N)
        len_vetor += len(a->dir, N);
    
    return len_vetor;
}

void add_no_vetor(int* vetor, TABB* a, int N, int *t)
{
    if(!a)
        return;

    if(a->info == N)
    {
        add_no_vetor(vetor, a->esq, N, t);
        add_no_vetor(vetor, a->dir, N, t);
    }
    if(a->info < N)
    {
        vetor[*t] = a->info;
        *t = *t + 1;
        add_no_vetor(vetor, a->esq, N, t);
        add_no_vetor(vetor, a->dir, N, t);
    }
    if(a->info > N) 
        add_no_vetor(vetor, a->esq, N, t);
}

int *mN(TABB*a, int N, int tam_vetor)
{
    int *vetor = (int *)malloc(tam_vetor*sizeof(int));
    int t = 0;
    add_no_vetor(vetor, a, N, &t);
    return vetor;
}

int main(void)
{
    TABB *a = TABB_cria(5, NULL, NULL);
    a = TABB_insere(a, 2);
    a = TABB_insere(a, 3);
    a = TABB_insere(a, 4);
    a = TABB_insere(a, 6);
    a = TABB_insere(a, 7);
    a = TABB_insere(a, 8);
    a = TABB_insere(a, 9);

    int N;
    printf("Digite o valor de N: ");
    scanf("%d", &N);

    int tam_vetor = len(a, N);
    int *vetor_menores = mN(a, N, tam_vetor);
    printf("Tamanho do vetor: %d\n", tam_vetor);

    printf("Os elementos menores são: ");
    for(int i=0; i<tam_vetor;i++)
    {
        printf(" %d ", vetor_menores[i]);
    }

    TABB_libera(a);
}