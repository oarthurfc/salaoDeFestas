#ifndef CONTRATOFESTA_H_INCLUDED
#define CONTRATOFESTA_H_INCLUDED

struct infoContrato {
    int codigoContrato;
    float valorFesta;
    float desconto;
    float totalFinal;
    char formaPagamento[50];
    char status[50];
    int codigoFesta;
};
struct infoContrato contrato;

void valorPagarFesta();
int cadastrarContrato(int *codigoFesta, int *qntConvidados, int diaSemana);

#endif
