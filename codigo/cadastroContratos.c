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



void valorFinal () // Tabela_2 (perguntar forma de pagamento e calcular se é passivo de desconto ou nao)
{
    int opcaoFormaPagamento, verificadorOpcaoPagamento = 1;

    printf("\n--- Calcular valor final da festa---\n\n");
    printf("Formas de pagamaneto:\n");
    printf("1 - À vista\n");
    printf("2 - Dividir de 2 vezes\n");
    printf("3 - Dividir de 3 vezes\n");
    printf("4 - Dividir de 4 ou mais vezes\n");
    printf("Escolha a opção desejada: ");


    while (verificadorOpcaoPagamento == 1)  // verifica se o que usuario digitou é valido
    {
        scanf("%i", &opcaoFormaPagamento);
        switch (opcaoFormaPagamento)
        {
        case 1:
            contrato.desconto = 0.10 * (contrato.valorFesta);
            contrato.totalFinal = contrato.valorFesta - contrato.desconto;
            strcpy(contrato.formaPagamento, "À vista");
            verificadorOpcaoPagamento = 0; // validação aprovada
            break;
        case 2:
            contrato.desconto = 0.05 * (contrato.valorFesta);
            contrato.totalFinal = contrato.valorFesta - contrato.desconto;
            strcpy(contrato.formaPagamento, "2 vezes");
            verificadorOpcaoPagamento = 0; // validação aprovada
            break;
        case 3:
            contrato.desconto = 0.02 * (contrato.valorFesta);
            contrato.totalFinal = contrato.valorFesta - contrato.desconto;
            strcpy(contrato.formaPagamento, "3 vezes");
            verificadorOpcaoPagamento = 0; // validação aprovada
            break;
        case 4:
            contrato.desconto = 0.0 * (contrato.valorFesta);
            contrato.totalFinal = contrato.valorFesta - contrato.desconto;
            verificadorOpcaoPagamento = 0; // validação aprovada
            strcpy(contrato.formaPagamento, "4 ou mais vezes");
            break;
        default:
            printf("Opcao invalida.\nDigite a opcao novamente: ");  // invalidação
        }
    }

    printf("\nDesconto: R$%.2f\n", contrato.desconto);
    printf("Valor final: R$%.2f\n", contrato.totalFinal);
}

int verificarCodigoFestaValido(int codigoFesta)
{
    festa fest;

    if ((arqFesta = fopen(nomeArqFesta, "r+b")) == NULL)
    {
        printf("Erro ao abrir o arquivo de festas!\n");
        exit(1);
    }

    fseek(arqFesta, 0, SEEK_SET);

    int posicao = 0;

    while (fread(&fest, sizeof(fest), 1, arqFesta) == 1)
    {

        if (fest.codigoFesta == codigoFesta)// Festa encontrado
        {
            posicao = 1;
            break; // Interrompe o loop, pois o cliente foi encontrado
        }
    }

    fclose(arqFesta);

    return posicao;
}


int cadastrarContrato(int *codigoFesta, int *qntConvidados, int diaSemanal)
{
    abrirArquivos(&arqContrato, nomeArqContrato); // Abrir arquvivo de contratos

    fseek(arqContrato, 0, SEEK_END); // Posiciona o ponteiro no final do arquivo

    contrato.codigoContrato = *codigoFesta; // Definindo código do contrato igual ao código da festa
    contrato.codigoFesta = *codigoFesta; // Registrando código da festa no contrato

    int quantidadeConvidados = *qntConvidados;

    if (diaSemanal > 1 && diaSemanal < 6) {  // Segunda a quinta
        diaSemanal = 1;
    } else { //Sexta a domingo
        diaSemanal = 2;
    }

    // Conferindo requisitos e atribuindo valor pré-estabelecido pela tabela_1
    if (quantidadeConvidados >= 1 && quantidadeConvidados <= 30)
    {
        if (diaSemanal == 1)
        {
            contrato.valorFesta = 1899.0;
        }
        else if (diaSemanal == 2)
        {
            contrato.valorFesta = 2099.0;
        }
    }
    else if (quantidadeConvidados >= 31 && quantidadeConvidados <= 50)
    {
        if (diaSemanal == 1)
        {
            contrato.valorFesta = 2199.0;
        }
        else if (diaSemanal == 2)
        {
            contrato.valorFesta = 2299.0;
        }
    }
    else if (quantidadeConvidados >= 51 && quantidadeConvidados <= 80)
    {
        if (diaSemanal == 1)
        {
            contrato.valorFesta = 3199.0;
        }
        else if (diaSemanal == 2)
        {
            contrato.valorFesta = 3499.0;
        }
    }
    else if (quantidadeConvidados >= 81 && quantidadeConvidados <= 100)
    {
        if (diaSemanal == 1)
        {
            contrato.valorFesta = 3799.0;
        }
        else if (diaSemanal == 2)
        {
            contrato.valorFesta = 3999.0;
        }
    }

    printf("\nValor total: R$%.2f\n", contrato.valorFesta);

    valorFinal();

    strcpy(contrato.status, "A pagar");

    int i = 0;

    fwrite(&contrato, sizeof(contrato), 1, arqContrato);

    fclose(arqContrato);
}

void lerArquivoContratos()
{
    setlocale(LC_ALL, "portuguese");

    abrirArquivos(&arqContrato, nomeArqContrato); // Função para abrir o arquivo cliente

    printf("\nContratos cadastrados:\n");

    while (fread(&contrato, sizeof(contrato), 1, arqContrato) == 1)
    {
        printf("Código do contrato: %d\n", contrato.codigoContrato);
        printf("Valor do contrato: R$%.2f\n", contrato.valorFesta);
        printf("Valor do desconto: R$%.2f\n", contrato.desconto);
        printf("Valor total final: R$%.2f\n", contrato.totalFinal);
        printf("Forma de pagamento: %s\n", contrato.formaPagamento);
        printf("Status do contrato: %s\n", contrato.status);
        printf("Código da festa: %d\n", contrato.codigoFesta);
        printf("---------------------\n");
    }
    fclose(arqCliente);
}

void atualizarStatusContrato()
{
    int codigoContrato;
    printf("Digite o código do contrato que deseja atualizar: ");
    scanf("%d", &codigoContrato);

    abrirArquivos(&arqContrato, nomeArqContrato); // Abrir arquivo de contratos

    fseek(arqContrato, 0, SEEK_SET); // Posiciona o ponteiro no início do arquivo
    int encontrado = 0;

    while (fread(&contrato, sizeof(contrato), 1, arqContrato) == 1)
    {
        if (contrato.codigoContrato == codigoContrato)
        {
            encontrado = 1;
            break;
        }
    }

    if (encontrado)
    {
        printf("Contrato encontrado!\n");

        printf("Digite o novo status do contrato:\n");
        printf("1 - Pago\n");
        printf("2 - Cancelado\n");

        int opcao;
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            strcpy(contrato.status, "Pago");
            break;
        case 2:
            strcpy(contrato.status, "Cancelado");
            break;
        default:
            printf("Opção inválida.\n");
            break;
        }

        fseek(arqContrato, -sizeof(contrato), SEEK_CUR); // Retorna ao registro anterior

        fwrite(&contrato, sizeof(contrato), 1, arqContrato);
        printf("Status do contrato atualizado com sucesso.\n");
    }
    else
    {
        printf("Contrato não encontrado.\n");
    }

    fclose(arqContrato);
}
