#include <stdio.h>

int main()
{
double enesimo,soma=0;
int i;
for (i=1;i<=100;i++)
{
enesimo=1.0/(i*i);
soma+=enesimo;
printf("i=%d, enesimo=%e, soma=%f\n",i,enesimo,soma);
}
}
