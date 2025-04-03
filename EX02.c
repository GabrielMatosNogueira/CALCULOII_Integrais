/*
Nome do Programa:   EX01
Data:               02/04/2025
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
    Windows:    gcc -o EX01 EX01.c
    Linux:      gcc -o EX01 EX01.c
    macOS:      gcc -o EX01 EX01.c


    2.2 - Execute o programa
    Windows:     EX01
    Linux:      ./EX01
    macOS:      ./EX01

---------------------------------------------------------------------------------------------------
*/

// Declaracao de biblioteca(s)
#include "io.h"

// Declaracao dos metodos utilizados
void method_00();
void method_01();

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
        IO_print("\n1 - Volume com casca cilindrica e deslocamento");

        opcao = IO_readint("\nDigite uma opcao: ");
        switch (opcao)
        {
        case 0:
            method_00();
            break;

        case 1:
            method_01();
            break;
        }
    } while (opcao != 0);
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
    IO_print("ENCERRANDO O PROGRAMA...\n");

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
    printf("%s\n", "\nMetodo 01\n"); 

    // Declaracao de variaveis
    int opcao=              0;
    int a=                  0;
    int b=                  0;
    double altura=          0.0;
    double comprimento=     0.0;
    double deslocamentoX=   0.0;
    double deslocamentoY=   0.0;
    double posicaoX=        0.0;
    double posicaoY=        0.0;

    // Leitura dos limties
    a=IO_readint("Digite o limite inferior da integral: ");
    b=IO_readint("Digite o limite superior da integral: ");

    // Leitura para deslocamentos
    // Leitura para deslocamento no eixo x
    opcao=IO_readint("Ha deslocamento horizontal?\n[0]- Sim\n[1]- Nao?");

    if(opcao==0)
    {

        posicaoX=IO_readdouble("Digite a posicao no eixo [X]: ");
        deslocamentoX= posicaoX - 0.0;

    }
    else
    {
        // Leitura para deslocamento no eixo y
        opcao=IO_readint("Ha deslocamento vertical?\n[0]- Sim\n[1]- Nao?");

        if(opcao==0)
        {
            posicaoY=IO_readdouble("Digite a posicao no eixo [X]: ");
            deslocamentoY= posicaoX - 0.0;            
        }
    }

    // encerramento
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
---------------------------------------------------------------------------------------------------
*/
