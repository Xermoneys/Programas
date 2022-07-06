#include <stdio.h>

int calculaT(int valorIn);

void menu();

int main(void)
{
    int i;
    int N, opcao;
    char lucas = 'd';

    printf("||||||||EP0||||||||\n");
    while (1)
    {
        menu();
        scanf("%i", &opcao);
        switch (opcao)
        {
        case 1:
            do
            {
                printf("Digite um número inteiro maior ou igual a 0\n");
                scanf("%i", &N);
            } while (N < 0);
            printf("T%i = %i\n", N, calculaT(N));
            break;
        case 2:
            do
            {
                printf("Escolha o tamanho da sequencia: ");
                scanf("%i", &N);
            } while (N < 0);
            for (i = 0; i < N; i++)
            {
                // if(i != 0)// 0|, 246|, 515|, 264
                //    printf(", ");
                printf("T%i = %i\n", i, calculaT(i)); 
                // if(i < N-1) // 0, |246, |515, |264
                //    printf(", ");
            }
            printf("\n");
            break;
        case 3:
            return 0;
            break;
        default:
            break;
        }
        printf("\n");
    }
    return 0;
}

void menu()
{
    printf("  1) Escolha o TN\n");
    printf("  2) Escolha o tamanho da sequencia\n");
    printf("  3) Sair\n");
    printf("Digite a opcao desejada: ");
}

int calculaT(int valorIn)
{
    int i = 0;
    int a = 0, b = 0, c = 0, d = 1;
    int print = 0;
    if (valorIn <= 2)
        return 0;
    else if (valorIn == 3)
        return 1;
    else
    {
        for (i = 4; i <= valorIn; i++)
        {
            print = d + c + b + a;
            a = b;
            b = c;
            c = d;
            d = print;
        }
        return print;
    }
}