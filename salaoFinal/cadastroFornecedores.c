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


void cadastrarFornecedor()
{
    setlocale(LC_ALL, "portuguese");

    abrirArquivos(&arqFornecedor, nomeArqFornecedor); //Função para abrir o arquivo Fornecedor

    fseek(arqFornecedor, 0, SEEK_END); // Posiciona o ponteiro no final do arquivo
    long tamanhoArquivo = ftell(arqFornecedor); // Obtém o tamanho do arquivo em bytes
    int numFornecedores = tamanhoArquivo / sizeof(fornecedor);

    fornecedor.codigo = numFornecedores + 1;

    // Armazenar os dados do fornecedor
    printf("Fornecedor [%d]\n", fornecedor.codigo);
    printf("Nome do Buffet: ");
    scanf(" %[^\n]", fornecedor.nomeBuffet);
    getchar(); // Limpar o buffer de entrada
    int valido = 0;
    verificarTelefones(&fornecedor.telefone, &valido);
    if(valido == 0)
    {
        return 0;
    }

    printf("\nFornecedor cadastrado com sucesso!\n");

    // Escrever os dados do fornecedor no arquivo
    fwrite(&fornecedor, sizeof(fornecedor), 1, arqFornecedor);

    fclose(arqFornecedor);
}

void lerArquivoFornecedores()
{
    setlocale(LC_ALL, "portuguese");

    abrirArquivos(&arqFornecedor, nomeArqFornecedor); //Função para abrir o arquivo Fornecedor

    printf("\nFornecedores cadastrados:\n");

    while (fread(&fornecedor, sizeof(fornecedor), 1, arqFornecedor) == 1)
    {
        printf("Código: %d\n", fornecedor.codigo);
        printf("Nome do Buffet: %s\n", fornecedor.nomeBuffet);
        printf("Telefone: %.0lf\n", fornecedor.telefone);
        printf("---------------------\n");
    }

    fclose(arqFornecedor);
}

