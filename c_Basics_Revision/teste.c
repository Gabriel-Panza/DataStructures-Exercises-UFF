#include<stdio.h>
 
void main() 
{
    int num, i, resultado = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for (i = 2; i <= num / 2; i++) 
    {
        if (num % i == 0) 
        {
            resultado++;
            break;
        }
    }

    if (resultado == 0)
        printf("%d é um numero primo\n", num);
    else
        printf("%d não é um numero primo\n", num);
}