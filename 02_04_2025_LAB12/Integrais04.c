/*
Nome do Programa:   ED
Data:               //2025
Nome:               Gabriel Matos Nogueira
Codigo de Pessoa:   1563147
Matricula:          870863
Versao:             1.0

---------------------------------------------------------------------------------------------------

Como executar o programa no terminal:
1.0 - Certifique-se que o compilador GCC esteja instalado e presente nas variaveis de ambiente 
da sua maquina

2.0 - Adentre a pasta para executar o programa:
cd 1563147_Gabriel_Matos_Nogueira (Windows, Linux e macOS)

    2.1 - Compile o programa
    Windows:    gcc -o  .c
    Linux:      gcc -o  .c
    macOS:      gcc -o  .c


    2.2 - Execute o programa
    Windows:     ED
    Linux:      ./ED
    macOS:      ./

---------------------------------------------------------------------------------------------------
*/

// Declaracao de biblioteca(s)
#include "io.h"

// Declaracao dos metodos utilizados
void method_00();
void method_01();
void method_02();
void method_03();
void method_04();
void method_05();
void method_06();
void method_07();
void method_08();
void method_09();
void method_10();
void method_11();
void method_12();


// Funcao Principal
int main(void)
{
    // armazenar a opcao do usuario
    int opcao = 0;
    IO_id("\n\tOpcoes de Metodos:");

    // Menu de opcoes do usuario
    do
    {
        IO_print("\n0 - Parar");
        IO_print("\n1 - Volume por casca cilindrica e rotacao em torno do eixo y");
        IO_print("\n3 - Volume por casca cilindrica com deslocamento e rotacao em torno do eixo y");
        IO_print("\n2 - Volume por metodo dos discos e rotacao em torno do eixo y");
        IO_print("\n4 - Volume por metodo dos discos com deslocamento e rotacao em torno do eixo y");
        IO_print("\n5 - Volume por casca cilindrica e rotacao em torno do eixo x");
        IO_print("\n7 - Volume por casca cilindrica com deslocamento e rotacao em torno do eixo x");
        IO_print("\n6 - Volume por metodo dos discos e rotacao em torno do eixo x");
        IO_print("\n8 - Volume por metodo dos discos com deslocamento e rotacao em torno do eixo x");

        opcao = IO_readint("\nDigite uma opcao: ");
        switch(opcao)
        {
            case 0:
                    method_00();
                    break;

                case 1:
                    method_01();
                    break;

                case 2:
                    method_02();
                    break;

                case 3:
                    method_03();
                    break;

                case 4:
                    method_04();
                    break;

                case 5:
                    method_05();
                    break;

                case 6:
                    method_06();
                    break;

                case 7:
                    method_07();
                    break;

                case 8:
                    method_08();
                    break; 
        }
    } while (opcao!=0);
}
// Funcoes do programa

/*
---------------------------------------------------------------------------------------------------
METODO 00
- Encerramento do programa
---------------------------------------------------------------------------------------------------
*/
void method_00(void)
{
    // Identificacao
    printf("%s\n", "\nMetodo 00\n");

    // Mensagem de encerramento
    IO_print ("ENCERRANDO O PROGRAMA...\n");

    // Encerramento
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

/*
---------------------------------------------------------------------------------------------------
METODO 01                       [b]
- Formula da casca cilindrica 2π∫ ( r(x) * h(x) )dx 
                              [a]
   - Onde:
    .[a] =      limite inferior
    .[b] =      limite superior
    .[h] =      altura
    .[r(x)] =   funcao que representa a distancia do eixo ate a casca cilindrica
    .[h(x)] =   funcao que representa a altura casca cilindrica   

---------------------------------------------------------------------------------------------------
*/

void method_01(void)
{
    // identificacao
    printf("%s\n", "\nVolume por casca cilindrica\n");

    // Declaracao de variaveis
    int a=0;
    int b=0;

    // Leitura das variaveis
    a=IO_readint("Digite o valor do limite inferior: ");
    b=IO_readint("Digite o valor do limite superior: ");    

    // encerramento
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

/*
---------------------------------------------------------------------------------------------------
METODO 02                       [b]
- Formula da casca cilindrica 2π∫ ( r(x) * h(x) )dx 
                              [a]
   - Onde:
    .[a] =      limite inferior
    .[b] =      limite superior
    .[h] =      altura
    .[r(x)] =   funcao que representa a distancia do eixo ate a casca cilindrica
    .[h(x)] =   funcao que representa a altura casca cilindrica   
---------------------------------------------------------------------------------------------------
*/

void method_02(void)
{
    // Identificacao
    printf("%s\n", "\nMetodo 02\n");

    // Encerrament
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

/*
---------------------------------------------------------------------------------------------------
METODO 03
- 
---------------------------------------------------------------------------------------------------
*/

void method_03(void)
{
    // Identificacao
    printf("%s\n", "\nMetodo 03\n");

    // Encerramento
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

/*
---------------------------------------------------------------------------------------------------
METODO 04
- 
---------------------------------------------------------------------------------------------------
*/

void method_04(void)
{
    // Identificacao
    printf("%s\n", "\nMetodo 04\n");

    // Encerramento
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

/*
---------------------------------------------------------------------------------------------------
METODO 05
- 
---------------------------------------------------------------------------------------------------
*/

void method_05(void)
{
    // Identificacao
    printf("%s\n", "\nMetodo 05\n");

    // Encerramento
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

/*
---------------------------------------------------------------------------------------------------
METODO 06
- 
---------------------------------------------------------------------------------------------------
*/

void method_06(void)
{
    // Identificacao
    printf("%s\n", "\nMetodo 06\n");

    // Encerramento
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

/*
---------------------------------------------------------------------------------------------------
METODO 07
- 
---------------------------------------------------------------------------------------------------
*/

void method_07(void)
{
    // Identificacao
    printf("%s\n", "\nMetodo 07\n");

    // Encerramento
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

/*
---------------------------------------------------------------------------------------------------
METODO 08
- 
---------------------------------------------------------------------------------------------------
*/

void method_08(void)
{
    // Identificacao
    printf("%s\n", "\nMetodo 08\n");

    // Encerramento
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

/*
---------------------------------------------------------------------------------------------------
METODO 09
- 
---------------------------------------------------------------------------------------------------
*/

void method_09(void)
{
    // Identificacao
    printf("%s\n", "\nMetodo 09\n");

    // Encerramento
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

/*
---------------------------------------------------------------------------------------------------
METODO 10
- 
---------------------------------------------------------------------------------------------------
*/

void method_10(void)
{
    // Identificacao
    printf("%s\n", "\nMetodo 10\n");

    // Encerramento
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

/*
---------------------------------------------------------------------------------------------------
METODO 11
- 
---------------------------------------------------------------------------------------------------
*/

void method_11(void)
{
    // Identificacao
    printf("%s\n", "\nMetodo 11\n");

    // Encerramento
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

/*
---------------------------------------------------------------------------------------------------
METODO 12
- 
---------------------------------------------------------------------------------------------------
*/

void method_12(void)
{
    // Identificacao
    printf("%s\n", "\nMetodo 12\n");

    // Encerramento
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

/*-------------------------------------------------------------------------------------------------
DOCUMENTACAO
-------------------------------------------------------------------------------------------------

1.0 - DOCUMENTACAO COMPLEMENTAR

- Sem observacoes

---------------------------------------------------------------------------------------------------

2.0 - TESTES

*Method_00: OK
- Sem observacoes

*Method_01:
-

*Method_02:
-

*Method_03:
-

*Method_04:
-

*Method_05:
-

*Method_06:
-

*Method_07:
-

*Method_08:
-

*Method_09:
-

*Method_10:
-

*Method_11:
-

*Method_12:
-
---------------------------------------------------------------------------------------------------
*/
