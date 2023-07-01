# Documentação das funções

## Função Global

### void abrirArquivos(FILE** ponteiroDoArquivo, const char* nomeDoArquivo);
    * Função para criar e abrir arquivos
    * @param ponteiroDoArquivo Ponteiro para o arquivo a ser aberto
    * @param nomeDoArquivo Nome do arquivo

## Funções Cliente

### void cadastrarCliente();
    * Função para cadastrar cliente

### void lerArquivoClientes();
    * Função para ler arquivos dos clientes cadastrados

## Funções Contrato

### void valorPagarFesta();
    * Função para calcular a valor da festa e se vai haver desconto após o cadastro da festa

### int cadastrarContrato(int *codigoFesta, int *qntConvidados, int diaSemana);
    * @param codigoFesta Um ponteiro para o atributo codigoFesta na estrutura de dados de Festas
    * @param diaSemana Dia da semana referente a data que o usuário digitou anteriormente

## Funções Festa

### void cadastrarFesta();
    * Função para cadastrar festa

### void lerArquivoFestas();
    * Função para ler arquivos das festas cadastradas

### int pesquisaCliente(int codigoCliente);
    * Localizar se existe o cliente no arquivo Clientes
    * @param codigoCliente Código do cliente que deseja cadastrar a festa digitado pelo usuário

### int pesquisaFornecedor(int codigoFornecedor);
    * Localizar se existe o fornecedor no arquivo Fornecedores
    * @param codigoFornecedor Código do fornecedor que deve ser vinculado a festa

### int obterDiaDaSemana(const char* data);
    * @param data Um ponteiro para o atributo dataFesta na estrutura de dados de Festas

### int verificarData(char *dataFesta, char *inicioFesta);
    * @param dataFesta Um ponteiro para o atributo dataFesta na estrutura de dados de Festas
    * @param inicioFesta Um ponteiro para o atributo inicioFesta na estrutura de dados de Festas

## Funções Fornecedor

### void cadastrarFornecedor();
    * Função para cadastar fornecedor
    
### void lerArquivoFornecedores();
    * Função para ler arquivos dos fornecedores cadastrados
