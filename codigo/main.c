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

int main()
{
    setlocale(LC_ALL, "portuguese"); // Adicionando caracteres especiais / Língua portuguesa

    int opcao;

    do
    {
        printf("\nSelecione uma opção:\n");
        printf("1 - Cadastrar\n");
        printf("2 - Pesquisar\n");
        printf("3 - Atualizar Contrato\n");
        printf("4 - Relatorios\n");
        printf("0 - Sair \n");
        printf("Opção: ");

        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            cadastrar();
            break;
        case 2:
            pesquisa();
            break;
        case 3:
            atualizarStatusContrato();
            break;
        case 4:
            relatorio();
            break;
        case 0:
            return 0;
        default:
            printf("Opção inválida!\n");
            break;
        }
    }
    while (opcao != 0);

    return 0;
}

