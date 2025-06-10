    #include <stdio.h>
    #include <stdbool.h>
    #include <math.h>

    /*
    Derivando a equacao
    1 (x=1, y=4) nao e ponto critico
    2 (x=2, y=-2) e ponto critico e ponto de sela
    3 (x=0, y=1) e ponto critico e ponto de sela

    Tanto derivada_x e derivada_y precisam resultar em 0 para existir ponto critico

    D= fxx * fyy - (fxy)^2

    Se D<0, ponto de sela
    Se D>0 e fxx>0 é ponto minimo local     ()
    Se D>0 e fxx<0 é ponto máximo local     ()
    */

    double calc_Critic_Point(int x, int y)
    {


    }

    double derivada_x(double funcao_dx, int x, int y)
    {
        double resultado=0.0;
        double exist=false;

        resultado = (12*pow(x,5)-156*pow(x,3)+432);

        if (resultado == 0)
        {
            exist = true;
        }
        else
        {
            printf("\nNao exite ponto critico neste intervalo fx (x,y)");
            exist = false;
        }

        return exist;
    }

    double derivada_y(double funcao_dy, int x, int y)
    {
        double resultado=0.0;
        double exist=false;

        resultado = (pow(y,6)+pow(y,5)-101*pow(y,2)+200*y-202*pow(y,3));

        if (resultado == 0)
        {
            exist=true;
        }
        else
        {
            printf("\nNao exite ponto critico neste intervalo fy (x,y)");
            exist = false;
        }

        return exist;
    }

    int main (void)
    {
        int x=1;
        int y=4;
        int x2=2;
        int y2=-2;
        int verification=0;

        double a=0.0;
        double b=0.0;
        double c=0.0;

        double funcao_dxx=0.0;
        double funcao_dxy=0.0;
        double funcao_dyy=0.0;

        double D=0.0;
        double funcao_dx=0.0;
        double funcao_dy=0.0;

        funcao_dx= (12*pow(x,5)-156*pow(x,3)+432);
        funcao_dy= (pow(y,6)+pow(y,5)-101*pow(y,2)+200*y-202*pow(y,3));

        if ( verification == derivada_x(funcao_dx, x, y) && verification == derivada_y (funcao_dy, x, y))
        {
            a=funcao_dxx(60*pow(x,4)-460*pow(x,2)+432)
            b=funcao_dyy(6*pow(y,5)+5*pow(y,4)-202*y+200-202*pow(y,3));
            c= 0;
            D= a * b - pow(c,2);

        }
        
        else
        {
            printf("\nNao existe ponto critico em ou ou ambos os intervalos");
        }

        return 0;
    }

    /*
        funcao_dy= (pow(y,6)+pow(y,5)-101*pow(y,2)+200*y-202*pow(y,3));
        derivada_y(funcao_dy, x, y);
        derivada_y(funcao_dy, x2, y2);
    */
