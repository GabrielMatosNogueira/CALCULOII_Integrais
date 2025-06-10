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

    double calc_Critic_Point(double x, double y)
    {


    }

    double derivada_x(double funcao_dx, double x, double y)
    {
        double resultado=0.0;
        bool exist=false;

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

    double derivada_y(double funcao_dy, double x, double y)
    {
        double resultado=0.0;
        bool exist=false;

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
        double x=1.0;
        double y=4.0;
        //double x2=2.0;
        //double y2=-2.0;
        int verification=0;

        double a=0.0;
        double b=0.0;
        double c=0.0;

        double funcao_dxx=(60*pow((double)x,4)-460*pow((double)x,2)+432);;
        double funcao_dxy=0.0;
        double funcao_dyy=(6*pow((double)y,5)+5*pow((double)y,4)-202*(double)y+200-202*pow((double)y,3));

        double D=0.0;
        double funcao_dx=0.0;
        double funcao_dy=0.0;

        funcao_dx= (12*pow((double)x,5)-156*pow((double)x,3)+432);
        funcao_dy= (pow((double)y,6)+pow((double)y,5)-101*pow((double)y,2)+200*(double)y-202*pow((double)y,3));

        if ( verification == derivada_x(funcao_dx, x, y) && verification == derivada_y (funcao_dy, x, y))
        {
            a=funcao_dxx;
            b=funcao_dyy;
            c= 0;
            D= a * b - pow(c,2);
            printf("\n%.2lf", D);
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
