#include<stdio.h>

void main()
{
    int g;

    do
    {
        printf("Diga o grau do polinômio: ");
        scanf("%d", &g);
        if (g<=0)
            break;
        printf("Digite o polinomio de grau %d", g);
        // usuario digita o polinomio
    } while (1);
    
}