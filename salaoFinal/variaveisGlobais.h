#ifndef VARIAVEISGLOBAIS_H_INCLUDED
#define VARIAVEISGLOBAIS_H_INCLUDED

//Variável global para nome dos arquivos
#define nomeArqCliente "files/Clientes.dat"
#define nomeArqContrato "files/Contratos.dat"
#define nomeArqFesta "files/Festas.dat"
#define nomeArqFornecedor "files/Fornecedores.dat"

//Ponteiro para arquivos
FILE *arqCliente;
FILE *arqContrato;
FILE *arqFesta;
FILE *arqFornecedor;

/*Função para abrir arquivos - Use o ponteiro do arquivo no
  primeiro parâmetro e seu nome que já foi definido nesse usuário
  abrirArquivos(&arqCliente, nomeArqCliente); */

void abrirArquivos(FILE** ponteiroDoArquivo, const char* nomeDoArquivo);

#endif // VARIAVEISGLOBAIS_H_INCLUDED
