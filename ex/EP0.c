#include <stdio.h>

int main(void)
{
    int N, print = 0;
    do
    {
        printf("Digite um número inteiro maior ou igual a 0\n");
        scanf("%i", &N);
    } while (N < 0);
    if (N <= 2)
        print = 0;
    else if(N == 3)
        print = 1;
    else
    {
        for (N = 4; N >= 4; N++)
        {
            N = N-1 + N-2 + N-3 + N-4;
            printf("N = %i", N);
        }
    }
    printf("T%i = %i\n", N, print);
    return 0;
} 