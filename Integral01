#include <stdio.h>
#include <math.h>


double f(double x)
{
    return 2 * sqrt(36- (x * x));
}

double area(double a, double b, int n)
{
    double h= (b - a) / n;          // H = deltaX | Resultado = 0.006
    double sum=0.0;

    for (int i=0; i<n; i=i+1)
    {
        double x1 = a + i * h;
        sum = sum + (2*f(x1));
    }
    return (h) * sum;  
}

/*
---------------------------------------------------------------------------------------------------
METODO 01

     [6]                    n
    ∫ 2 * srqtr(36-x^2)dx = Σ (fxi)* Δx
[-6]                       i=1

    xi = a+ i * Δx
    Δx = (b-a)/n
        

---------------------------------------------------------------------------------------------------
*/

int main (void)
{
    // identificacao
    printf("%s\n", "\nCalcular a primeira integral\n");

    // Declaracao de variaveis
    int a=0;            // Limite inferior
    int b=6;            // Limite superior

    int n=1000;            // Numero de divisoes delinitada pelo sistema operacional

    double resultado=0.0;

    resultado=area(a,b,n);

    printf("%lf", resultado);

    // encerramento
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();

    return 0;
}
