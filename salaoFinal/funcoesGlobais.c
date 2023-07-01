#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <locale.h>

#include "variaveisGlobais.h"
#include "cadastroFestas.h"
#include "cadastroClientes.h"
#include "cadastroFornecedores.h"
#include "cadastroContratos.h"

/*Fun��o para abrir arquivos - Use o ponteiro do arquivo no
  primeiro par�metro e seu nome que j� foi definido nesse usu�rio
  abrirArquivos(&arqCliente, nomeArqCliente); */


void abrirArquivos(FILE** ponteiroDoArquivo, const char* nomeDoArquivo)
{

    if ((*ponteiroDoArquivo = fopen(nomeDoArquivo, "r+b")) == NULL) // arquivo existe
    {
        if ((*ponteiroDoArquivo = fopen(nomeDoArquivo, "a+b")) == NULL) //arq n�o existe
        {
            printf("Erro na cria��o do arquivo!!\n");
            exit(1);
        }
    }
}


void cadastrar()
{
    int opcao;
    do
    {

        printf("\nO que deseja cadastrar?\n");
        printf("1 - Cliente\n");
        printf("2 - Fornecedor\n");
        printf("3 - Festa\n");
        printf("0 - Sair\n");
        printf("Op��o: ");

        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            cadastrarCliente();
            break;
        case 2:
            cadastrarFornecedor();
            break;
        case 3:
            cadastrarFesta();
            break;
        case 0:
            return 0;
        default:
            printf("Op��o inv�lida!\n");
            break;
        }
    }
    while(opcao != 0);
}


void relatorio()
{
    setlocale(LC_ALL, "portuguese");

    int op;

    do
    {
        printf ("\n------------------------- RELATORIO -------------------------\n\n");

        printf ("1 - Relat�rio de festas por Cliente\n");
        printf ("2 - Relat�rio de festas por Data\n");
        printf ("3 - Lista de todos os clientes\n");
        printf ("4 - Lista de todos os fornecedores\n");
        printf ("5 - Lista de todas as festas\n");
        printf ("6 - Lista de todos os contratos\n");
        printf ("0 - Sair\n");

        printf("Informe a op��o desejada: ");

        scanf ("%d", &op);

        switch (op)
        {
        case 1:
            relatorioCliente();
            break;
        case 2:
            pesquisarFestaPorData();
            break;
        case 3:
            lerArquivoClientes();
            break;
        case 4:
            lerArquivoFornecedores();
            break;
        case 5:
            lerArquivoFestas();
            break;
        case 6:
            lerArquivoContratos();
            break;
        case 0:
            return;
        default:
            printf ("Op��o inv�lida!");
            break;
        }
    }
    while (op != 0);

}


void pesquisa()
{
    setlocale(LC_ALL, "portuguese");

    int op;

    do
    {
        printf ("\n------------------------- PESQUISA -------------------------\n\n");

        printf ("1 - Pesquisar detalhes de clientes\n");
        printf ("2 - Pesquisar detalhes de fornecedores\n");
        printf ("3 - Pesquisar valores de uma festa\n");
        printf ("0 - Sair\n\n");

        printf("Informe a op��o desejada: ");

        scanf ("%d", &op);

        switch (op)
        {
        case 1:
            buscarCliente();
            break;
        case 2:
            buscarFornecedor();
            break;
        case 3:
            pesquisarValorFesta();
            break;
        case 0:
            return;
        default:
            printf ("Op��o inv�lida!");
            break;
        }
    }
    while (op != 0);
}


void verificarTelefones(double *telefone, int *telefoneValido)
{
    *telefoneValido = 0;
    while (*telefoneValido != 1)
    {
        printf("Telefone: ");
        scanf("%lf", telefone);

        if (*telefone < 10000000000 || *telefone > 99999999999)
        {
            printf("N�mero inv�lido.\n 1-Continuar\n 0-Sair\n");
            int opcao;
            scanf("%d", &opcao);

            switch(opcao)
            {
            case 0:
                return 0;
            case 1:
                printf("Digite novamente!\n");
            }
        }
        else
        {
            *telefoneValido = 1;
        }
        getchar(); // Limpar o buffer de entrada
    }
}

//Loop para digitar o c�digo novamente ou sair
int digitarCodigoNovamente()
{
    int opcao, codigoValidado=1;
    do
    {
        printf ("1 - Digitar c�digo novamente\n");
        printf ("0 - Sair\n");

        printf("Escolha como continuar: ");
        scanf ("%i", &opcao);

    switch (opcao)
        {
        case 1:
            codigoValidado = 0;
            opcao = 0;
            break;
        case 0:
            codigoValidado = 1;
            opcao = 0;
            return codigoValidado;
            break;
        default:
            printf ("Digite uma op��o v�lida!\n");
            break;
        }
    }
    while (opcao != 0);

    return codigoValidado;
}
