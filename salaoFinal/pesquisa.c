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


int buscarCliente()
{
    if ((arqCliente = fopen(nomeArqCliente, "r+b")) == NULL) //Abrindo arquivo de cliente como leitura
    {
        printf("Erro ao abrir o arquivo de clientes!\n");
        exit(1);
    }

    int op, codigoCliente, retorno=1;
    char nomeCliente[TAM];

    do
    {
        printf ("\n--- PESQUISA CLIENTE ---\n\n");

        printf ("1 - Pesquisar cliente por código\n");
        printf ("2 - Pesquisar cliente por nome\n");
        printf ("0 - Retornar\n\n");

        printf("Informe a opção desejada: ");

        scanf ("%d", &op);

        switch (op)
        {
        case 1: //Pesquisa por código

            printf ("\n--- PESQUISA CLIENTE POR CÓDIGO ---\n\n");

            printf("Digite o código do cliente: ");
            fflush(stdin);
            scanf ("%d", &codigoCliente);

            while (fread(&cliente, sizeof(cliente), 1, arqCliente) == 1) //Percorrendo o arquivo de cliente
            {

                if (cliente.codigo == codigoCliente) //Cliente encontrado - Imprima seus respectivos dados
                {
                    printf("\nCliente %i encontrado!\n", codigoCliente);

                    printf ("\n--- DADOS DO CLIENTE --- \n\n");

                    printf("Código: %d\n", cliente.codigo);
                    printf("Nome: %s\n", cliente.nome);
                    printf("Endereço: %s\n", cliente.endereco);
                    printf("Telefone: %.0lf\n", cliente.telefone);
                    printf("Data de Nascimento: %s\n", cliente.dataNascimento);

                    printf("\n------------------------------\n");

                    retorno=0;
                    op=0;

                    break; // Interrompe o loop, pois o cliente foi encontrado
                }
            }

            break;

        case 2:
            printf ("\n--- PESQUISA CLIENTE POR NOME ---\n\n");

            printf("Digite o nome do cliente: ");
            fflush(stdin);
            gets(nomeCliente);

            while (fread(&cliente, sizeof(cliente), 1, arqCliente) == 1) //Percorrendo o arquivo de cliente
            {

                if (strcmp(cliente.nome, nomeCliente)==0) // Cliente encontrado - Imprima seus respectivos dados
                {
                    printf("\nCliente %s encontrado!\n", cliente.nome);

                    printf ("\n--- DADOS DO CLIENTE --- \n\n");

                    printf("Código: %d\n", cliente.codigo);
                    printf("Nome: %s\n", cliente.nome);
                    printf("Endereço: %s\n", cliente.endereco);
                    printf("Telefone: %.0lf\n", cliente.telefone);
                    printf("Data de Nascimento: %s\n", cliente.dataNascimento);

                    printf("\n------------------------------\n");
                    retorno=0;
                    op=0;

                    break; // Interrompe o loop, pois o cliente foi encontrado
                }
            }
            break;
        case 0: // Retornar
            return 0;
        default:
            printf ("Opção inválida! Digite novamente");
        }

    }
    while (op != 0);

    fclose(arqCliente);
    return retorno;
}


int buscarFornecedor()
{

    if ((arqFornecedor = fopen(nomeArqFornecedor, "r+b")) == NULL) //Abrindo arquivo de fornecedores como leitura
    {
        printf("Erro ao abrir o arquivo de fornecedores!\n");
        exit(1);
    }

    int codigoFornecedor, retorno=1;

    printf ("\n--- PESQUISA FORNECEDOR ---\n\n");

    printf("Digite o código do fornecedor: ");
    fflush(stdin);
    scanf ("%d", &codigoFornecedor);

    while (fread(&fornecedor, sizeof(fornecedor), 1, arqFornecedor) == 1) //Percorrendo o arquivo de cliente
    {
        if (fornecedor.codigo == codigoFornecedor) //Fornecedor encontrado - Imprima seus respectivos dados
        {
            printf("\nFornecedor %i encontrado!\n", codigoFornecedor);

            printf ("\n--- DADOS DO FORNECEDOR --- \n\n");

            printf("Código: %d\n", fornecedor.codigo);
            printf("Nome do Buffet: %s\n", fornecedor.nomeBuffet);
            printf("Telefone: %.0lf\n", fornecedor.telefone);

            printf("\n------------------------------\n");

            retorno=0;

            break; // Interrompe o loop, pois o cliente foi encontrado
        }
    }
    fclose(arqFornecedor);
    return retorno;
}

int pesquisarValorFesta()
{

    if ((arqContrato = fopen(nomeArqContrato, "r+b")) == NULL) //Abrindo arquivo de fornecedores como leitura
    {
        printf("Erro ao abrir o arquivo de Contratos!\n");
        exit(1);
    }

    int codigoFesta, retorno=1;

    printf ("\n--- CONSULTA DE FESTA ---\n\n");

    printf("Digite o código da festa a ser consultada: ");
    fflush(stdin);
    scanf ("%d", &codigoFesta);

    while (fread(&contrato, sizeof(contrato), 1, arqContrato) == 1) //Percorrendo o arquivo de contrato
    {
        if (contrato.codigoFesta == codigoFesta) //Festa encontrada - Imprima seus respectivos dados
        {

            printf ("\n--- VALORES DA FESTA %i --- \n\n", codigoFesta);

            printf("Valor total da festa: R$%.2f\n", contrato.valorFesta);
            printf("Desconto aplicado R$%.2f\n", contrato.desconto);
            printf("Valor final da festa com desconto R$%.2f\n", contrato.totalFinal);

            printf("\n------------------------------\n");
            retorno = 0;
        }
    }

    fclose(arqContrato);

    return retorno;
}

