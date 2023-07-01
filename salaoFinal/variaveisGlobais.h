#ifndef VARIAVEISGLOBAIS_H_INCLUDED
#define VARIAVEISGLOBAIS_H_INCLUDED

//Vari�vel global para nome dos arquivos
#define nomeArqCliente "files/Clientes.dat"
#define nomeArqContrato "files/Contratos.dat"
#define nomeArqFesta "files/Festas.dat"
#define nomeArqFornecedor "files/Fornecedores.dat"

//Ponteiro para arquivos
FILE *arqCliente;
FILE *arqContrato;
FILE *arqFesta;
FILE *arqFornecedor;

/*Fun��o para abrir arquivos - Use o ponteiro do arquivo no
  primeiro par�metro e seu nome que j� foi definido nesse usu�rio
  abrirArquivos(&arqCliente, nomeArqCliente); */

void abrirArquivos(FILE** ponteiroDoArquivo, const char* nomeDoArquivo);

#endif // VARIAVEISGLOBAIS_H_INCLUDED
