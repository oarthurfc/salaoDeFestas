#ifndef BIBLIOTECACLIENTES_H_INCLUDED
#define BIBLIOTECACLIENTES_H_INCLUDED

#define TAM 100

struct infoCliente {
    int codigo;
    char nome[TAM];
    char endereco[TAM];
    double telefone;
    char dataNascimento[TAM];
};

struct infoCliente cliente;

void cadastrarCliente();
void lerArquivoClientes();

#endif // BIBLIOTECACLIENTES_H_INCLUDED
