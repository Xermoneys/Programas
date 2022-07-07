#include <stdio.h>

int calculaT(int valorIn)

void menu()

int main(void)
{
    int i;
    int N, opcao;

    printf ("EP1: Soma de quadrados de primos consecutivos\n");
    while(1)
    {
        menu();
        scanf("%i", &opcao);
        switch (opcao)
        {
        case 1:
            do
            {
                printf("Digite um número (0 < n < 10^8): \n");
                scanf("%i", &N);
            } while (N < 0);
            break;
        case 2:
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
        printf("  1) Escolha o número para a sequência\n");
        printf("  2) Sair\n");
        printf("Digite a opção desejada: ");
    }

int calculaT(int valorIn)
{
    int i = 0;
    int a = 2, b = 3, c = 5, d = 7;
    int print = 87;
    for ( i = 0; i <= valorIn; i++)
    {
        print = a^2 + b^2 + c^2 + d^2;
        d = c;
        c = b;
        b = a; 
        d = print;
    }  
        return print;
}

