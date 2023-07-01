#ifndef CADASTROFESTAS_H_INCLUDED
#define CADASTROFESTAS_H_INCLUDED

#include <stdio.h>

struct infoFesta
{
     int codigoFesta;
     int qntConvidados;
     char dataFesta[11];
     char inicioFesta[7];
     char temaFesta[30];
     int codigoCliente;
     int codigoFornecedor;
};

typedef struct infoFesta festa;

extern const char diasSemana[7][4];  // Declaração do vetor de dias da semana

void cadastrarFesta();
void lerArquivoFestas();
int pesquisaCliente(int codigoCliente);
int pesquisaFornecedor(int codigoFornecedor);
int obterDiaDaSemana(const char* data);
int verificarData(char *dataFesta, char *inicioFesta);

#endif // CADASTROFESTAS_H_INCLUDED
