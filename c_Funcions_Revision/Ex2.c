#include<stdio.h>
#include<stdlib.h>

void main()
{
    int i, grau, tamP, tamIt, tamDv;

    do
    {
        printf("\nDiga o grau do polinomio: ");
        scanf("%d", &grau);
        if (grau<=0)
            break;
        
        // Definimos os tamanhos dos polinomios com base no maior coeficiente
        tamP = grau+1;
        int *p = (int*) malloc(tamP * sizeof(int));
        
        tamIt = grau+2;
        int *it = (int*) malloc(tamIt * sizeof(int));

        tamDv = grau;
        int *dv = (int*) malloc(tamDv * sizeof(int));

        // Definimos o polinomio base
        for (i=0;i<grau+1;i++)
        {
            printf("\nDigite o coeficiente de grau %d do polinomio: ", i);
            scanf("%d", &p[i]);
        }

        /* Letra a */
        printf("O coeficiente de maior grau do polinomio eh o: %d", p[grau]);

        /* Letra b */
        //calculo a integral
        for (i=0;i<grau+1;i++)
        {
            it[i] = p[i]/(i+1);
        }
        //calculo a derivada
        for (i=0;i<grau+1;i++)
        {
            dv[i] = p[i]*i;
        }

        /* Letra c */
        printf("\nOs coeficientes da integral do polinomio sao: ");
        for (i=0;i<tamIt;i++)
        {
            if (i==0)
                printf("%d ", 0);
            else
                printf("%d ", it[i-1]);
        }
        printf("\nOs coeficientes da derivada do polinomio sao: ");
        for (i=1;i<tamDv+1;i++)
        {
            printf("%d ", dv[i]);
        }
    } while (1);
    
}