#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <locale.h>
#include <time.h>

#include "variaveisGlobais.h"
#include "cadastroFestas.h"
#include "cadastroClientes.h"
#include "cadastroFornecedores.h"
#include "cadastroContratos.h"


//Localizar se existe o cliente no arquivo Clientes
int pesquisaCliente(int codigoCliente)
{

    if ((arqCliente = fopen(nomeArqCliente, "r+b")) == NULL)
    {
        printf("Erro ao abrir o arquivo de clientes!\n");
        exit(1);
    }

    fseek(arqCliente, 0, SEEK_SET);

    int posicao = 0;

    while (fread(&cliente, sizeof(cliente), 1, arqCliente) == 1)
    {

        if (cliente.codigo == codigoCliente)
        {
            // Cliente encontrado
            printf("Cliente %i - %s encontrado!\n", codigoCliente, cliente.nome);
            posicao = 1;
            break; // Interrompe o loop, pois o cliente foi encontrado
        }
    }

    fclose(arqCliente);

    return posicao;
}

//Localizar se existe o fornecedor no arquivo Fornecedor
int pesquisaFornecedor(int codigoFornecedor)
{
    if ((arqFornecedor = fopen(nomeArqFornecedor, "r+b")) == NULL)
    {
        printf("Erro ao abrir o arquivo de clientes!\n");
        exit(1);
    }

    fseek(arqFornecedor, 0, SEEK_SET);

    int posicao = -1;

    while (fread(&fornecedor, sizeof(fornecedor), 1, arqFornecedor) == 1)
    {

        if (fornecedor.codigo == codigoFornecedor)
        {
            // Cliente encontrado
            printf("Fornecedor %i encontrado!\n", fornecedor.codigo);
            posicao = 1;
            break; // Interrompe o loop, pois o fornecedor foi encontrado
        }
    }

    fclose(arqFornecedor);

    return posicao;
}


void cadastrarFesta()
{
    setlocale(LC_ALL, "portuguese");

    abrirArquivos(&arqFesta, nomeArqFesta); //Fun��o para abrir o arquivo Festas

    festa f; //Criando uma vari�vel local pro struct de festa

    // Gerando c�digo da festa
    fseek(arqFesta, 0, SEEK_END); // Posiciona o ponteiro no final do arquivo
    long tamArqFesta = ftell(arqFesta); // Obt�m o tamanho do arquivo em bytes
    int codFesta = tamArqFesta / sizeof(festa);
    f.codigoFesta = codFesta + 1;

    int diaSemana=0;
    int inicioParty, fimFesta;
    int codigoValidado=0;

    do
    {
        printf("Digite o c�digo do cliente: ");     // Para cadastrar uma festa, o sistema deve receber
        fflush(stdin);                              // do usu�rio o c�digo do cliente que deseja realizar a festa
        scanf("%d", &f.codigoCliente);

        if (pesquisaCliente(f.codigoCliente))       // Fun��o que confere a exist�ncia do cliente
        {
            do
            {
                printf("Quantidade de convidados (1-100): ");
                fflush(stdin);
                scanf("%d", &f.qntConvidados);

                if (f.qntConvidados < 1 || f.qntConvidados > 100)   //Conferir se o n�mero de convidados � v�lido
                {
                    printf ("Quantidade de convidados inv�lida. Digite novamente (1-100)\n");
                    codigoValidado=1;
                }
                else
                {
                    codigoValidado=0;
                }

            }
            while (codigoValidado != 0);

            printf("Data da festa (dd/mm/aaaa): ");
            fflush(stdin);
            scanf("%10[^\n]", f.dataFesta);

            diaSemana = obterDiaDaSemana(&f.dataFesta);   // Fun��o para identificar dia da semana, sendo retornado 1 - 7

            int retorno;

            do
            {
                if (diaSemana == 6 )   //Restri��o para dias de s�bado
                {
                    int opcao;
                    char horario1[7]= "12:00", horario2[7] = "18:00";

                    do
                    {
                        printf("Qual hor�rio deseja sua festa no s�bado?\n");
                        printf("1 - 12:00 �s 16:00?\n");
                        printf("2 - 18:00 �s 22:00?\n");
                        printf("0 - Sair\n");
                        fflush(stdin);

                        printf("Digite sua op��o: ");

                        scanf("%d", &opcao);

                        switch (opcao)
                        {
                        case 1:
                            strcpy(f.inicioFesta, horario1);
                            opcao = 0;
                            break;
                        case 2:
                            strcpy(f.inicioFesta, horario2);
                            opcao = 0;
                            break;
                        case 0:
                            return 0;
                        default:
                            printf("Digite uma op��o v�lida (1, 2 ou 0): ");
                        }
                    }
                    while (opcao != 0);
                }
                else
                {
                    do {
                    printf("Hor�rio da festa (hh:mm): ");
                    fflush(stdin);
                    scanf("%5[^\n]", f.inicioFesta);
                    } while (validacaoHoras(&f.inicioFesta) != 1);
                }

                retorno = verificarData(&f.dataFesta, &f.inicioFesta);
                if (retorno == 0)
                {
                    printf ("Digite um novo hor�rio!\n");
                }
            }
            while (retorno != 1);

            printf("Tema da festa (Marvel): ");
            fflush(stdin);
            gets(f.temaFesta);

            printf("Digite o c�digo do fornecedor: ");
            fflush(stdin);
            scanf("%d", &f.codigoFornecedor);

            while (pesquisaFornecedor(f.codigoFornecedor) != 1)   // Fun��o de conferir a exist�ncia do fornecedor e ler do usu�rio at� encontra-lo
            {
                scanf("%d", &f.codigoFornecedor);
            }

            cadastrarContrato(&f.codigoFesta, &f.qntConvidados, diaSemana); // Fun��o para criar contrato
            printf("\n--- Festa cadastrada com sucesso!---\n");
            codigoValidado=1;
        }
        else
        {
            printf("Cliente %d n�o foi encontrado nos cadastros!\n", f.codigoCliente);
            codigoValidado = digitarCodigoNovamente(); //Loop para digitar o c�digo novamente ou sair
        }

    }

    while (codigoValidado != 1);

    fseek(arqFesta, 0, SEEK_END); // posicionado o arquivo no final
    fwrite(&f, sizeof(f), 1, arqFesta); // gravando os dados
    fflush(arqFesta);

    fclose(arqFesta);
}

int verificarData(char* dataFesta, char* horario)
{
    setlocale(LC_ALL, "portuguese");

    festa fes; //Criando uma vari�vel local pro struct de festa

    int retorno=1;
    int horas, minutos, inicioSegundaFesta;

    sscanf(horario, "%d:%d", &horas, &minutos); //Convertendo o char de horas em minutos e segundos inteiros
    horas *= 3600; //Transformando horas em segundos
    minutos *= 60; //Transformando minutos em segundos
    inicioSegundaFesta = horas + minutos; //Hor�rio desejado de in�cio da festa em segundos do dia


    fseek(arqFesta, 0, SEEK_SET); // Posiciona o ponteiro no final do arquivo


    //Percorrer arquivo festas e conferir se as datas s�o iguais
    while (fread(&fes, sizeof(fes), 1, arqFesta) == 1)
    {

        if (strcmp(dataFesta, fes.dataFesta)==0)   //Data igual, logo devemos conferir os hor�rios
        {
            int horasPrimeiraFesta, minutosPrimeiraFesta, inicioPrimeiraFesta, fimPrimeiraFesta, fimSegundaFesta;

            sscanf(fes.inicioFesta, "%d:%d", &horasPrimeiraFesta, &minutosPrimeiraFesta); //Convertendo o char de horas em minutos e segundos inteiros
            horasPrimeiraFesta *= 3600;
            minutosPrimeiraFesta *= 60; //Transformando horas e minutos em segundos
            inicioPrimeiraFesta = horasPrimeiraFesta + minutosPrimeiraFesta; //Hor�rio da festa j� marcada em segundos do dia
            fimPrimeiraFesta = inicioPrimeiraFesta + 14400; //Hor�rio do fim da segunda festa (que tem dura��o de 4h = 14400s)
            fimSegundaFesta = inicioSegundaFesta + 14400;

            if ((inicioSegundaFesta > inicioPrimeiraFesta) && (inicioSegundaFesta < fimPrimeiraFesta) || (fimSegundaFesta >= inicioPrimeiraFesta) && (fimSegundaFesta <= fimPrimeiraFesta) )
            {
                printf ("Infelizmente esse hor�rio n�o est� dispon�vel\n");
                retorno = 0;
            }
            else
            {
                printf ("Esse hor�rio est� dispon�vel!\n");
            }

            break;
        }
    }

    return retorno;
}

void lerArquivoFestas()
{
    setlocale(LC_ALL, "portuguese");

    festa fe;

    if ((arqFesta = fopen(nomeArqFesta, "r+b")) == NULL)
    {
        printf("Arquivo n�o encontrado!\n");
        return;
    }

    printf("\n--- Festas cadastradas ---\n\n");

    while (fread(&fe, sizeof(fe), 1, arqFesta) == 1)
    {
        printf("C�digo da Festa: %d\n", fe.codigoFesta);
        printf("Qntd. convidados: %d\n", fe.qntConvidados);
        printf("Data: %s\n", fe.dataFesta);
        printf("In�cio: %s\n", fe.inicioFesta);
        printf("Tema: %s\n", fe.temaFesta);
        printf("C�digo respons�vel da festa: %d\n", fe.codigoCliente);
        printf("C�digo fornecedor da festa: %d\n", fe.codigoFornecedor);
        printf("---------------------\n");
    }

    fclose(arqFesta);
}

int obterDiaDaSemana(const char* data)
{
    int dia, mes, ano;
    sscanf(data, "%d/%d/%d", &dia, &mes, &ano);

    // Ajuste para o formato esperado pela fun��o tm
    int tm_mes = mes - 1; // Os meses em struct tm come�am em 0 (janeiro � 0)
    int tm_ano = ano - 1900; // Anos em struct tm s�o contados a partir de 1900

    struct tm tm_data = { 0 };
    tm_data.tm_mday = dia;
    tm_data.tm_mon = tm_mes;
    tm_data.tm_year = tm_ano;

    time_t t_data = mktime(&tm_data);

    struct tm* tm_info = localtime(&t_data);

    return tm_info->tm_wday;
}

/*
int calcularFimFesta(char *inicioFesta)
{
    int inicioParty, fimFesta;

    sscanf(horario, "%d:%d", &horas, &minutos); //Convertendo o char de horas em minutos e segundos inteiros
    horas *= 3600; //Transformando horas em segundos
    minutos *= 60; //Transformando minutos em segundos
    inicioParty = horas + minutos; //Hor�rio desejado de in�cio da festa em segundos do dia

    fimFesta = inicioParty + 14400;

    /*
    if (fimFesta > 345.600) // Se a festa acabar no outro dia
    {
        fimFesta = inicioParty - fimFesta;
    }

    f.fimFesta = f.inicioFesta + 14400; // Se passar por todas as restri��es, defina o hor�rio final da festa

}*/



int validacaoHoras (char* horario) {

    int conferido=1;

    int horas, minutos, soma;

    sscanf(horario, "%d:%d", &horas, &minutos);

    if (horas > 23 || minutos > 59)
    {
        printf ("Digite um hor�rio v�lido no formato HH:mm\n");  //Validando hor�rio real
        conferido = 0;
    }
    return conferido;
}

