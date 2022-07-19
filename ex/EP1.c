#include <stdio.h>
#include <math.h>
#define TRUE 1
#define FALSE 0

void primoT(int valorT);
void menu();
int isPrime(int num);
int dialogo(char* texto, int valorMaiorQue);

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
            primoT(dialogo("Digite um número (0 < n < 10^8): ", 1));
            break;
        case 3:
            return 0;
        case 2:
            for (size_t i = 0; i < 1000; i++)
                primoT(i);
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
     printf("  2) Sequencia\n");
     printf("  3) Sair\n");
     printf("Digite a opção desejada: ");
}

/**
 * Essa função checa números primos
 * @param num numero a ser checado
 * @return TRUE para primos, FALSE para não primos
 */
int isPrime(int num)
{
    int i;
    if(num < 2)
        return FALSE;
    for (i = 2; i <= sqrt(num); i++)
        if(num % i == 0)
            return FALSE;
    return TRUE;
}

void primoT(int valorT)
{
    int i, j = 0;
    int w = 5, x = 3, y = 2, z = 0;
    int resultado = 0;

    for (; valorT > resultado;)
    {
        z = y;
        y = x;
        x = w;
        j = w;
        while(1)
            if(isPrime(++j))
                break;
        w = j;
        resultado = w*w + x*x + y*y + z*z; 
    }
    
    if (valorT == resultado)
        printf ("%d = %i^2 + %i^2 + %i^2 + %i^2\n", valorT, w, x, y, z);
    else
        {
            printf("Nao existem 4 primos consecutivos cujos quadrados somam %i\n", valorT);
            printf("O próximo numero que possui essa caracteristica é %d\n", resultado);
            printf ("%d = %i^2 + %i^2 + %i^2 + %i^2\n", resultado, w, x, y, z);
        }
}

int dialogo(char* texto, int valorMaiorQue)
{
    int N;
    do
    {
        printf("%s", texto);
        scanf("%i", &N);
    } while (N < valorMaiorQue);
    return N;
}
