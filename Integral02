#include <stdio.h>
#include <math.h>

#define PI 3.141592
double f(void)
{
    return (32.0*PI);
}

double area(double a, double b, double n)
{
    double h= (b - a) / n;
    int i=0;

    double soma=0.0;
    for (i=1; i<n; i=i+1)
    {
        double x1 = a + i * h;
        soma = soma + f();
    }
    return (h) * soma;  
}

int main (void)
{
    // Declaracao de variaveis
    double a=0.0;
    double b=8.0;
    double n=1000.0;

    double resultado=0.0;

    // Chamar a funcao
    resultado=area(a,b,n);

    printf("%lf", resultado);

    return 0;
}
