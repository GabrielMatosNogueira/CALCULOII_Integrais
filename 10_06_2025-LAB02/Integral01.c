    #include <stdio.h>
    #include <stdbool.h>
    #include <math.h>

    /*
    Derivando a equacao
    1 (x=1, y=4) nao e ponto critico
    2 (x=2, y=-2) e ponto critico
    3 (x=0, y=1) e ponto critico

    Tanto derivada_x e derivada_y precisam resultar em 0 para existir ponto critico
    */

    double calc_Critic_Point(int x, int y)
    {

        double D=0.0;
        double funcao_dxx=0.0;
        double funcao_dxy=0.0;
        double funcao_dyy=0.0;

        funcao_dxx=60*pow(x,4)-468*pow(x,2)+432;
        funcao_dxy=0.0;
        funcao_dyy=60*pow(x,4)-468*pow(x,2)+432;
    }

    bool derivada_x(double funcao_dx, int x, int y)
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

    double derivada_dxx()
    {

    }

    int main (void)
    {
        int x=1;
        int y=4;
        int x2=2;
        int y2=-2;
        bool verification=false;

        double funcao_dx=0.0;
        double funcao_dy=0.0;

        funcao_dx= (12*pow(x,5)-156*pow(x,3)+432);
        funcao_dy= (pow(y,6)+pow(y,5)-101*pow(y,2)+200*y-202*pow(y,3));

        if ( verification = derivada_x(funcao_dx, x, y) && verification = derivada_y (funcao_dy, x, y))
        {

        }
        
        else
        {
            printf("\nNao existe ponto critico em ou ou ambos os intervalos");
        }

    }

    /*
        funcao_dy= (pow(y,6)+pow(y,5)-101*pow(y,2)+200*y-202*pow(y,3));
        derivada_y(funcao_dy, x, y);
        derivada_y(funcao_dy, x2, y2);
    */
