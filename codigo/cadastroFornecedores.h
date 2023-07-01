#ifndef CADASTROFORNECEDORES_H_INCLUDED
#define CADASTROFORNECEDORES_H_INCLUDED

#define TAM 100

struct infoFornecedor {
    int codigo;
    char nomeBuffet[TAM];
    double telefone;
};

struct infoFornecedor fornecedor;

void cadastrarFornecedor();
void lerArquivoFornecedores();


#endif // CADASTROFORNECEDORES_H_INCLUDED
