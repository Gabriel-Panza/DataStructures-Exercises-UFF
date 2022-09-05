#include<stdio.h>
#include<stdlib.h>

int checkPermutacao(int a, int b);
void main()
{
    int check, a, b;

    printf("Digite dois números separados por espaco: ");
    printf("\na: ");
    scanf("%d", &a);
    printf("\nb: ");
    scanf("%d", &b);
    
    check = checkPermutacao(a,b);

    if (check == 0)
        printf("O numero de 'a' eh permutacao de 'b'");
    if (check == 1)
        printf("O numero de 'a' nao eh permutacao de 'b'");
}