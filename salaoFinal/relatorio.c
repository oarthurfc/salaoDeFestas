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


void relatorioCliente()
{
    if ((arqFesta = fopen(nomeArqFesta, "r+b")) == NULL) //Abrindo arquivo de fornecedores como leitura
    {
        printf("Erro ao abrir o arquivo de Festa!\n");
        exit(1);
    }
    if ((arqContrato = fopen(nomeArqContrato, "r+b")) == NULL) //Abrindo arquivo de fornecedores como leitura
    {
        printf("Erro ao abrir o arquivo de Contrato!\n");
        exit(1);
    }

    setlocale(LC_ALL, "portuguese");

    int codigoCliente;

    festa party;

    printf ("\n--- RELATÓRIO DE FESTAS POR CLIENTE ---\n\n");

    printf("Digite o código do cliente a ser consultado: ");
    fflush(stdin);
    scanf ("%d", &codigoCliente);

    while (fread(&party, sizeof(party), 1, arqFesta) == 1) //Percorrendo o arquivo de festa
    {

        if (party.codigoCliente == codigoCliente) //Cliente encontrado - Imprima seus respectivos dados
        {

            printf ("\n--- FESTA %i --- \n\n", party.codigoFesta);

            printf("Código da Festa: %d\n", party.codigoFesta);
            printf("Qntd. convidados: %d\n", party.qntConvidados);
            printf("Data: %s\n", party.dataFesta);
            printf("Horário de início: %s\n", party.inicioFesta);
            printf("Tema: %s\n", party.temaFesta);
            printf("Código fornecedor da festa: %d\n", party.codigoFornecedor);

            while (fread(&contrato, sizeof(contrato), 1, arqContrato) == 1) //Percorrendo o arquivo de contrato
            {
                if (contrato.codigoContrato == party.codigoFesta) //verificar se o codigo da festa e o mesmo do contrato
                {
                    printf("Valor total da festa: R$%.2f\n", contrato.valorFesta);
                    printf("Desconto aplicado R$%.2f\n", contrato.desconto);
                    printf("Valor final da festa com desconto R$%.2f\n", contrato.totalFinal);
                    printf("Status do contrato: %s\n", contrato.status);

                    printf("\n------------------------------\n");

                }
            }

        }
    }

    fclose(arqFesta);
}
int pesquisarFestaPorData()
{

    if ((arqFesta = fopen(nomeArqFesta, "r+b")) == NULL) //Abrindo arquivo de fornecedores como leitura
    {
        printf("Erro ao abrir o arquivo de Festa!\n");
        exit(1);
    }
    if ((arqContrato = fopen(nomeArqContrato, "r+b")) == NULL) //Abrindo arquivo de fornecedores como leitura
    {
        printf("Erro ao abrir o arquivo de Contrato!\n");
        exit(1);
    }
    festa fe;

    int retorno=1, count=0;
    char dataFesta[11];

    printf ("\n--- CONSULTA DE FESTA ---\n\n");

    printf("Digite a data da festa a ser consultada: ");
    fflush(stdin);
    scanf("%10[^\n]", dataFesta);
    while (fread(&fe, sizeof(fe), 1, arqFesta) == 1) //Percorrendo o arquivo de festas
    {
        if (strcmp(fe.dataFesta, dataFesta) == 0) //Comparar se a data digitada e igual a da festa
        {
            printf ("\n--- INFORMACOES DA FESTA %i --- \n\n", fe.codigoFesta);

            printf("Código da Festa: %d\n", fe.codigoFesta);
            printf("Qntd. convidados: %d\n", fe.qntConvidados);
            printf("Data: %s\n", fe.dataFesta);
            printf("Horário de início: %s\n", fe.inicioFesta);
            printf("Tema: %s\n", fe.temaFesta);
            printf("Código responsável da festa: %d\n", fe.codigoCliente);
            printf("Código fornecedor da festa: %d\n", fe.codigoFornecedor);

            while (fread(&contrato, sizeof(contrato), 1, arqContrato) == 1) //Percorrendo o arquivo de contrato
            {
                if (contrato.codigoContrato == fe.codigoFesta) //verificar se o codigo da festa e o mesmo do contrato
                {
                    printf("Valor total da festa: R$%.2f\n", contrato.valorFesta);
                    printf("Desconto aplicado R$%.2f\n", contrato.desconto);
                    printf("Valor final da festa com desconto R$%.2f\n", contrato.totalFinal);
                    printf("Status do contrato: %s\n", contrato.status);

                    printf("\n------------------------------\n");

                }
            }
            retorno = 0;
        }
    }

    fclose(arqContrato);
    fclose(arqFesta);
    return retorno;
}

