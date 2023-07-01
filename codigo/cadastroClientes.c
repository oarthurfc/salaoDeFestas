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

void cadastrarCliente()
{
    setlocale(LC_ALL, "portuguese");

    abrirArquivos(&arqCliente, nomeArqCliente); // Função para abrir o arquivo cliente


    fseek(arqCliente, 0, SEEK_END); // Posiciona o ponteiro no final do arquivo
    long tamanhoArquivo = ftell(arqCliente); // Obtém o tamanho do arquivo em bytes
    int numClientes = tamanhoArquivo / sizeof(cliente);

    cliente.codigo = numClientes + 1;

    // Armazenar os dados do cliente
    printf("Cliente [%d]\n", cliente.codigo);
    printf("Nome: ");
    scanf(" %[^\n]", cliente.nome);
    getchar(); // Limpar o buffer de entrada

    printf("Endereço: ");
    scanf(" %[^\n]", cliente.endereco);
    getchar(); // Limpar o buffer de entrada

    int  valido = 0;

    verificarTelefones(&cliente.telefone, &valido);
    if(valido == 0){
        return 0;
    }

    printf("Data de Nascimento: ");
    scanf(" %[^\n]", cliente.dataNascimento);
    getchar(); // Limpar o buffer de entrada

    printf("\nCliente cadastrado com sucesso!\n");

    // Escrever os dados do cliente no arquivo
    fwrite(&cliente, sizeof(cliente), 1, arqCliente);

    fclose(arqCliente);
}

void lerArquivoClientes()
{
    setlocale(LC_ALL, "portuguese");

    abrirArquivos(&arqCliente, nomeArqCliente); // Função para abrir o arquivo cliente

    printf("\nClientes cadastrados:\n");

    while (fread(&cliente, sizeof(cliente), 1, arqCliente) == 1)
    {
        printf("Código: %d\n", cliente.codigo);
        printf("Nome: %s\n", cliente.nome);
        printf("Endereço: %s\n", cliente.endereco);
        printf("Telefone: %.0lf\n", cliente.telefone);
        printf("Data de Nascimento: %s\n", cliente.dataNascimento);
        printf("---------------------\n");
    }

    fclose(arqCliente);
}
