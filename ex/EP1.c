#include <stdio.h>
#include <math.h>
#define TRUE 1
#define FALSE 0


void menu();
int isPrime(int num);

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

            printf("%i\n", N);
            break;
        default:
            break;
        }
        printf("\n"); 
    }
    return 0;
}

/*  */
void menu()
 {
     printf("  1) Escolha o número para a sequência\n");
     printf("  2) Sair\n");
     printf("Digite a opção desejada: ");
}

/**
 * Essa função checa números primos
 * @param num numero a ser checado
 * @return TRUE para primos, FALSE para não primos
 */
int isPrime(int num){
    int i;
    if(num < 2)
        return FALSE;
    for (i = 2; i <= sqrt(num); i++)
        if(num % i == 0)
            return FALSE;
    return TRUE;
}