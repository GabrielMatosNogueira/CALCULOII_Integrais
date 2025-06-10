#include <stdio.h>
#include <math.h>

#define PI 3.141592
double f(double x)
{
    return (4.0*PI*x*sqrt(16-(36-12*x+(x*x))));
}

double area(double a, double b, double n)
{
    double h= (b - a) / n;
    double x1=0.0;
    int i=0;

    double soma=0.0;
    for (i=1; i<n; i=i+1)
    {
        double x1 = a + i * h;
        soma = soma + f(x1);
    }
    return (h) * soma;  
}

int main (void)
{
    // Declaracao de variaveis
    double a=2.0;
    double b=10.0;
    double n=1000.0;

    double resultado=0.0;

    // Chamar a funcao
    resultado=area(a,b,n);

    printf("%lf", resultado);

}
