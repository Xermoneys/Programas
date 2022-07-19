#include<stdio.h>
#include <math.h>

int main() 
{
int calculaT(int valorT)
{
    int i = 2;
    int w = 2, x = 3, y = 5, z = 7;
    int resultado = 0;
   for ( i = 0; i <= valorT ; i++)
   {
        resultado = w*w + x*x + y*y + z*z; 
        z = y;
        y = x;
        x = w;
        w = resultado;
   }
}
}