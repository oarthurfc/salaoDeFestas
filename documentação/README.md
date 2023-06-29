Trabalho Prático Interdisciplinar
Salão de Festas Patati Patatá
===================

Índice Analítico
-----------------

* 1. [Introdução](#1-introdução)	
    * 1.1 [Objetivos](#11-objetivos)	
    * 1.2 [Público Alvo](#12-público-alvo)	
    * 1.3 [Organização do documento](#13-organização-do-documento)	
    * 1.4 [Definição de Siglas e Nomenclaturas](#14-definição-de-siglas-e-nomenclaturas)	
* 2. [Descrição do problema e do sistema](#2-descrição-do-problema-e-do-sistema)
    * 2.1 [Identificação e missão do Sistema](#21-identificação-e-missão-do-sistema)	
    * 2.2 [Domínio do problema e contexto de sua aplicação](#22-domínio-do-problema-e-contexto-de-sua-aplicação)	
    * 2.3 [Descrição dos interessados do sistema](#23-descrição-dos-interessados-do-sistema)	
* 3. [Requisitos e restrições não funcionais](#3-requisitos-e-restrições-não-funcionais)
    * 3.1 [Requisitos e Restrições de Usabilidade (RUS)](#31-requisitos-e-restrições-de-usabilidade-rus)	
    * 3.2 [Requisitos e Restrições de Interface Homem-Computador (RHIC)](#32-requisitos-e-restrições-de-interface-homem-computador-rhic)	
    * 3.3 [Requisitos e Restrições de Interface Externa (RIEX)](#33-requisitos-e-restrições-de-interface-externa-riex)	
    * 3.4 [Requisitos e Restrições de Plataforma de Hardware (RPHW)](#34-requisitos-e-restrições-de-plataforma-de-hardware-rphw)	
    * 3.5 [Requisitos e Restrições de Plataforma de Software (RPSW)](#35-requisitos-e-restrições-de-plataforma-de-software-rpsw)	
    * 3.6 [Requisitos e Restrições de Desempenho (RDES)](#36-requisitos-e-restrições-de-desempenho-rdes)	
    * 3.7 [Requisitos e restrições de disponibilidade (RDIS)](#37-requisitos-e-restrições-de-disponibilidade-rdis)	
    * 3.8 [Requisitos e Restrições de Segurança (RSEG)](#38-requisitos-e-restrições-de-segurança-rseg)	
    * 3.9 [Requisitos e Restrições de Manutenibilidade (RMAN)](#39-requisitos-e-restrições-de-manutenibilidade-rman)	
    * 3.10 [Requisitos e Restrições de Documentação (RDOC)](#310-requisitos-e-restrições-de-documentação-rdoc)
* 4. [Casos de Uso e Requisitos Funcionais](#4-casos-de-uso-e-requisitos-funcionais)	
    * 4.1 [Diagramas de Caso de Uso e Lista de casos de uso](#41-diagramas-de-caso-de-uso-e-lista-de-casos-de-uso)	
    * 4.2 [Descrição de Casos de Uso](#42-descrição-de-casos-de-uso)	
* 5. [Requisitos Futuros (RFUT)](#5-requisitos-futuros-rfut)	
* 6. [Referências cruzadas complementares](#6-referências-cruzadas-complementares)	
* 7. [Aprovação Formal](#7-aprovação-formal)	
* 8. [Bibliografia](#8-bibliografia)	
* 9. [Anexos](#9-anexos)	

## 1. Introdução

O presente documento apresenta um detalhamento de um código em C que permitirá aos usuários realizar a gestão de um salão de festas.

Neste documento, serão apresentados detalhes sobre a estrutura do código, as funcionalidades implementadas, as principais bibliotecas 
utilizadas e a lógica por trás das diferentes partes do programa. Além disso, serão fornecidas instruções para compilar e executar o 
código, bem como informações sobre possíveis melhorias e futuras implementações. Ao longo deste documento, o sistema desenvolvido será 
descrito de forma clara e objetiva, destacando suas principais características e benefícios.

### 1.1 Objetivos

Este documento tem os seguintes objetivos:	
•	Apresentar um detalhamento de um código em C para a gestão de um salão de festas;
•	Descrever o projeto desenvolvido para as disciplinas Fundamentos de Engenharia de Software e Algoritmo e Estrutura de Dados 1;	
•	Informar sobre o propósito do projeto, que é criar um programa de cadastro de dados em C para o salão de festas Patati Patatá;	
•	Destacar as funcionalidades implementadas no programa, como o gerenciamento de clientes, fornecedores, festas e pagamentos;	
•	Apresentar o documento de forma clara e objetiva, facilitando a compreensão e o uso do código desenvolvido;

### 1.2 Público Alvo

Este documento tem os seguintes públicos alvo:	
•.	Estudantes de Engenharia de Software: O projeto foi desenvolvido como parte do curso de Engenharia de Software, portanto, é direcionado aos estudantes dessa área que desejam aprender e aprimorar suas habilidades em programação na linguagem C;
•.	Professores e acadêmicos de disciplinas relacionadas: Além dos estudantes, o projeto também pode ser interessante para professores e acadêmicos que lecionam ou pesquisam disciplinas relacionadas à engenharia de software, algoritmos, estrutura de dados e desenvolvimento de software;

Identificar o público alvo do documento, isto é, todos os perfis de pessoas que terão interesse na sua leitura. Os interesses de cada perfil na leitura do documento também devem ser descritos.

### 1.3 Organização do documento

Descrever suscintamente a organização do documento em seções e o conteúdo de cada seção. Não há necessidade de descer ao nível de subseções.

### 1.4 Definição de Siglas e Nomenclaturas

Definir e explicar sucintamente siglas e nomencalturas utilizadas neste documento.

## 2. Descrição do problema e do sistema
-----------------------------------------

Nesta seção o sistema objeto da especificação de requisitos deve ser descrito. O domínio do problema que deverá ser resolvido pelo sistema deve ser explicado e também as características específicas do problema no contexto da empresa em que o sistema deverá ser utilizado. As subseções seguintes podem ser colocadas no documento EOR para separar cada conteúdo específico, mas também pode ser usado um estilo de texto sem separação de subseções desde que todo o conteúdo seja coberto.

### 2.1 Identificação e missão do Sistema

Identificar o sistema objeto da especificação de requisitos e definir em poucas palavras qual é a missão do sistema que está sendo considerado neste documento.

### 2.2 Domínio do problema e contexto de sua aplicação

A descrição do domínio do problema deve complementar e detalhar a visão geral do domínio do problema identificando o contexto deste problema no ambiente alvo (ambiente do cliente alvo).
Exemplo:
Suponha que o domínio do problema seja a venda de produtos em um comércio varejista. Esta seção deverá explicar em que consiste o problema de vender produtos em uma empresa que atua no comércio varejista, ou seja, descrever genericamente quais são os processos de negócio envolvidos e seus objetivos. Além disso, o problema deve ser contextualizado mostrando as características específicas do problema na empresa alvo.

### 2.3 Descrição dos interessados do sistema

Descrever os perfis de cada interessado envolvido com o sistema.

| Interessado(s) 	| Descrição 	|
|:----------------:	|---------	|
| Nome do perfil do interessado. Por exemplo: (cliente, atendente, vendedor, gerente comercial, etc.) | Descrever o perfil do interessado e como se espera que seja sua interação com o sistema direta ou indiretamente. Por exemplo, o vendedor da loja é a pessoa que atende os clientes e registra as vendas que são feitas. |

## 3. Requisitos e restrições não funcionais 
--------------------------------------------

Elaborar uma lista de todos os requisitos não funcionais. Considerar requisitos de informação, de interface, de projeto, de arquitetura de software, de plataforma de hardware, de plataforma de software, de plataforma de comunicação, de desempenho, de disponibilidade, de segurança, de manutenibilidade, de portabilidade e de documentação. A lista poderá ser dividida por tipo de requisito, mas é importante que os requisitos tenham uma identificação única para que possam ser referenciados sem ambigüidades no futuro.

### 3.1 Requisitos e Restrições de Usabilidade (RUS)

Elaborar uma lista de todas as necessidades de informação que o software não pode deixar de atender. Esta lista deverá ser classificada em informações cadastrais e informações gerenciais. Por exemplo, para um software de vendas existem, entre outras, as seguintes necessidades de informação:
Exemplo:

| Ref. 	|              Descrição                                               	| Caso de Uso     	|
|------	|-------------------------------------------------------------------	|-----------------	|
| RINFx | Descrição do requisito RINFx  | CSUy, CSUm ...  |

Estes requisitos de informação são importantes para verificar a qualidade da modelagem de dados que for feita.       

### 3.2	Requisitos e Restrições de Interface Homem-Computador (RHIC)

Definir os aspectos de Interface Homem Computador (IHC) como: conteúdo de informações, fatores ergonômicos, dispositivos de interação, formato de apresentação, tipo de diálogo, e mecanismos de ajuda alocados a cada perfil/grupo/tarefa de usuário. Descrever, em particular, os requisitos de usabilidade para cada perfil/grupo/tarefa de usuário. Por exemplo, pode-se definir como requisito que as opções de menu do sistema tenham teclas de atalho associadas. 
Exemplo:

| Ref.  	|                          Descrição                       	| Caso de Uso |
|-------	|----------------------------------------------------------	|---------------|
| RIHCx 	| Descrição do requisito RIHCx | CSUy, CSUm ... |

### 3.3 Requisitos e Restrições de Interface Externa (RIEX)

Identificar e descrever as interfaces com outros softwares/sistemas que o software deverá prover. Por exemplo, um software comercial deve gerar informações para o Sistema de Arrecadação da Secretaria da Fazenda Estadual. O formato dessas informações e o protocolo de envio são definidos pela própria secretaria, e atender essas definições é um requisito do software.
Exemplo:

| Ref.  	|                          Descrição                       	| Caso de Uso |
|-------	|----------------------------------------------------------	|---------------|
| RIEXx 	| Descrição do requisito RIEXx | CSUy, CSUm ...	|

### 3.4 Requisitos e Restrições de Plataforma de Hardware (RPHW)

Identificar e descrever requisitos e restrições relacionadas com a plataforma de hardware que será utilizada pelo software:
Exemplo:

| Ref.  	|                          Descrição                       	| Caso de Uso |
|-------	|----------------------------------------------------------	|---------------|
| RPHWx	| Descrição do requisito RPHWx | CSUy, CSUm ... |

### 3.5 Requisitos e Restrições de Plataforma de Software (RPSW)

Se o software tiver que ser executado em plataformas de software específicas, essas plataformas de software deverão ser definidas:
1. Sistema Operacional: identificar e descrever o sistema operacional em que o software deverá ser executado;
2. Softwares Básicos: identificar SGBD, linguagem de programação, ferramentas CASE e outros.
Se houver mais de uma plataforma de software, deve-se especificar qual a plataforma principal e em que situações as outras plataformas podem ser utilizadas.
Exemplo:

| Ref.  	|                          Descrição                       	| Caso de Uso |
|-------	|----------------------------------------------------------	|---------------|
| RPSWx | Descrição do requisito RSPWx | CSUy, CSUm ... |

### 3.6 Requisitos e Restrições de Desempenho (RDES)

Identificar e descrever os requisitos e restrições de desempenho do software.
Exemplo:

| Ref.  	|                          Descrição                       	| Caso de Uso |
|-------	|----------------------------------------------------------	|---------------|
| RDESx | Descrição do requisito RDESx | CSUy, CSUm ... |

### 3.7 Requisitos e restrições de disponibilidade (RDIS).

Especificar os requisitos de disponibilidade necessários para o software de uma forma global:
1. Período de disponibilidade: horário comercial, 24 horas por dia, etc.
2. Período máximo para recuperação do software em caso de falha.
Devem ser definidos os tipos de falha e a tolerância aceitável para cada tipo de falha. Os tipos de falha podem ser definidos em função dos requisitos funcionais e de dados, mas não se restringem a estes. Por exemplo: a função “Registrar Venda” deve ter um tempo para recuperação de falha de no máximo uma hora (o que significa que esta função não poderá ficar mais do que uma hora indisponível para o usuário em nenhuma circunstância). 
Exemplo:

| Ref.  	|                          Descrição                       	| Caso de Uso |
|-------	|----------------------------------------------------------	|---------------|
| RDISx	| Descrição do requisito RDISx | CSUy, CSUm ... |

### 3.8 Requisitos e Restrições de Segurança (RSEG)

Especificar os requisitos de segurança necessários para controle de acesso ao software. Definir a necessidade, por exemplo, de:
1. Verificação de senha;
2. Criptografia de dados;
3. Registro das operações efetuadas;
4. Habilitação de funções por perfil de usuário;
5. Acesso seletivo aos dados e funções.
Exemplo:

| Ref.  	|              Descrição                      	| Caso de Uso 	|
|-------	|------------------------------------------	|-------------	|
| RSEGx | Descrição do requisito RSEGx | CSUy, CSUm ... |

### 3.9 Requisitos e Restrições de Manutenibilidade (RMAN)

Especificar os requisitos que visam facilitar a manutenção posterior do software, tais como:
1. Requisitos de reutilização (exemplo: uso de implementação orientada a objetos; bibliotecas de classes e padrões de projeto);
2. Requisitos de modularização (exemplo: valores para métricas de acoplamento entre módulos; máximo de pontos de função por módulo);
3. Requisitos de configuração (exemplo: regras para controle de versões);
4. Requisitos de documentação (exemplo: documentação de programa)
Exemplo:

| Ref.  	|                          Descrição                       	| Caso de Uso |
|-------	|----------------------------------------------------------	|---------------|
| RMANx	| Descrição do requisito RMANx | CSUy, CSUm ... |

### 3.10 Requisitos e Restrições de Documentação (RDOC)

Especificar os requisitos de documentação do produto de software que será desenvolvido. 
Exemplo:

| Ref.  	|                          Descrição                       	| Caso de Uso |
|-------	|----------------------------------------------------------	|---------------|
| RDOCx | Descrição do requisito RDOCx | CSUy, CSUm ... |

## 4. Casos de Uso e Requisitos Funcionais
---------------------------------

### 4.1 Diagramas de Caso de Uso e Lista de casos de uso

![](http://postimg.org/image/skrz04i6x/)

### 4.2 Descrição de Casos de Uso

**CSU1**- Definir compasso
	Ator(es): Usuário
	Descrição: Neste caso de uso, o usuário define a divisão quantitativa de pulsos e repousos em uma composição musical.
	Requisitos Funcionais:

| Ref.     |                          Descrição                       	| Categoria | Prioridade |
|-------|----------------------------------------------------------|---------------|---------------|
| RFUN 1.1 | Possibilitar ao usuário definir os padrões de pulsos e repousos. | Evidente |Alta  |

**CSU2**- Definir velocidade do compasso do metrônomo
	Ator(es): Usuário
	Descrição: Este caso de uso ocorre quando o usuário precisa modificar a velocidade dos batimentos do metrônomo, sendo estes medidos em BPM (batidas por minuto).
	Requisitos Funcionais:

| Ref.     |                          Descrição                       	| Categoria | Prioridade |
|-------|----------------------------------------------------------|---------------|---------------|
| RFUN 2.1 | Possibilitar ao usuário modificar a velocidade com que as batidas ocorrem antes de iniciar as batidas. | Evidente |Alta  |
| RFUN 2.2 | O usuário pausa os batimentos para regular o intervalo das batidas | Oculta |Média  |

**CSU3**- Definir som do compasso
	Ator(es): Usuário
	Descrição: O usuário tem a possibilidade de selecionar alguns sons pré-definidos. Estes sons estarão já no “.apk”, de forma que o usuário possa selecionar o que mais lhe agradar. 
	Requisitos Funcionais:

| Ref.     |                          Descrição                       	| Categoria | Prioridade |
|-------|----------------------------------------------------------|---------------|---------------|
| RFUN 3.1 | Possibilitar ao usuário selecionar uma melodia de batida para tocar em um loop na velocidade selecionada. | Evidente |Alta  |

**CSU4**- Colocar timer de funcionamento do metrônomo
	Ator(es): Usuário
	Descrição: O usuário tem a possibilidade de definir um tempo de duração das batidas.
	Requisitos Funcionais:

| Ref.     |                          Descrição                       	| Categoria | Prioridade |
|-------|----------------------------------------------------------|---------------|---------------|
| RFUN 4.1 | Possibilitar que o usuário defina o tempo de duração das batidas, sendo este medido em minutos. | Evidente | Média |
| RFUN 4.2 | O usuário pode optar por pausar os batimentos antes do tempo pré-determinado. | Evidente | Média |

**CSU5**- Escolher figura rítmica
	Ator(es): Usuário
	Descrição: A figura rítmica é uma parte fundamental para o funcionamento de um metrônomo, sendo este o responsável por definir a duração do compasso.
	Requisitos Funcionais:

| Ref.     |                          Descrição                       	| Categoria | Prioridade |
|-------|----------------------------------------------------------|---------------|---------------|
| RFUN 5.1 | O usuário tem a opção de selecionar uma figura  rítmica para definir o compasso. | Evidente | Alta|

**CSU6**- Visualizar informações sobre o aplicativo
	Ator(es): Usuário
	Descrição: Dentro das configurações será disponibilizado para o usuário algumas informações a respeito do sistema “DroidMetronome”. 
	Requisitos Funcionais:

| Ref.     |                          Descrição                       	| Categoria | Prioridade |
|-------|----------------------------------------------------------|---------------|---------------|
| RFUN 6.1 | O usuário tem a possibilidade de consultar as informações a respeito do sistema “DroidMetronome”. | Evidente | Média |

**CSU7**- Definir modo vibratório
	Ator(es): Usuário
	Descrição: O sistema contará com a possibilidade de além dos sons das batidas, o aparelho poderá vibrar de forma a acompanhar os batimentos.
	Requisitos Funcionais:

| Ref.     |                          Descrição                       	| Categoria | Prioridade |
|-------|----------------------------------------------------------|---------------|---------------|
| RFUN 7.1 | Possibilitar que o usuário ative o modo vibratório, onde o aparelho vibrará a cada batimento. | Evidente | Baixa |

**CSU8**- Definir modo LED
	Ator(es): Usuário
	Descrição: Descrição: O sistema contará com a possibilidade de além dos sons das batidas e das vibrações do aparelho, o aparelho poderá acender e desligar a luz LED do aparelho de forma a acompanhar os batimentos.
	Requisitos Funcionais:

| Ref.     |                          Descrição                       	| Categoria | Prioridade |
|-------|----------------------------------------------------------|---------------|---------------|
| RFUN 8.1 | Possibilitar que o usuário ative o modo LED, onde o aparelho acenderá e deligará a luz LED do aparelho a cada batimento. | Evidente | Baixa |

**CSU9**- Definir modo Auto-Lock
	Ator(es): Usuário
	Descrição: Durante a reprodução do aplicativo, o usuário tem a opção de bloquear o aplicativo para que a tela não seja bloqueada.
	Requisitos Funcionais:

| Ref.     |                          Descrição                       	| Categoria | Prioridade |
|-------|----------------------------------------------------------|---------------|---------------|
| RFUN 9.1 | O usuário tem a possibilidade de ativar e desativar o modo Auto-Lock, no qual impede que o sistema entre em modo de descanso. | Evidente | Média|

**CSU10**- Integrar com redes sociais
	Ator(es): Usuário
	Descrição: O usuário tem a possibilidade de divulgar que está usando o sistema “DroidMetronome” para as redes sociais como Twitter, Facebook, Whattsapp entre outros.
	Requisitos Funcionais:

| Ref.     |                          Descrição                       	| Categoria | Prioridade |
|-------|----------------------------------------------------------|---------------|---------------|
| RFUN 10.1 | O usuário pode compartilhar nas redes sociais que está utilizando o sistema “DroidMetronome”. | Evidente | Média|

**CSU11**- Reproduzir compasso
	Ator(es): Usuário
	Descrição: Neste caso de uso, inicia-se as batidas do metrônomo com as configurações selecionadas pelo usuário.
	Requisitos Funcionais:

| Ref.     |                          Descrição                       	| Categoria | Prioridade |
|-------|----------------------------------------------------------|---------------|---------------|
| RFUN 11.1 | Quando as configurações do metrônomo são definidas, o usuário inicia as batidas. | Evidente | Alta|

## 5. Requisitos Futuros (RFUT)
---------------------------------

Este espaço é reservado para o surgimento de futuros requisitos.

| Ref.|   Descrição | Caso de Uso |
|-------|------------|---------------|
|  | |   |

## 6. Referências cruzadas complementares 
---------------------------------------------

Nesta seção são colocadas algumas referências cruzadas que podem ajudar o rastreamento futuro dos requisitos. Estes mapeamentos podem ser feitos em forma de matrizes de rastreabilidade como mostram os exemplos a seguir:

|Requisitos Funcionais | Requisitos Não-Funcionais|
|---------------------|--------------------------|
|Colocar identificação do requisito funcional|Colocar a identificação do requisito não funcional vinculado|

|Requisitos Funcionais | Origem do Requisito |
|---------------------|--------------------------|
| Colocar identificação dos requisitos funcionais | Colocar a origem do requisito. Pode ser uma entrevista, um questionário, ou outra técnica qualquer de elicitação de requisito aplicada. |

|Requisitos Não-Funcionais | Origem do Requisito |
|---------------------|--------------------------|
| Colocar identificação dos requisitos não-funcionais | Colocar a origem do requisito. Pode ser uma entrevista, um questionário, ou outra técnica qualquer de elicitação de requisito aplicada. |

| Casos de Uso | Origem do Caso de Uso |
|---------------------|--------------------------|
| Colocar a identificação do requisito funcional | 
Colocar a origem do caso de uso. Pode ser uma entrevista, um questionário, ou outra técnica  qualquer de elicitação de requisito aplicada. |

## 7. Aprovação Formal 
---------------------------------------------

Por meio deste documento, confirmo que os requisitos aqui presentes abordam todas as áreas do sistema a ser desenvolvido e de requisitos futuros (sejam elas melhorias ou novas funcionalidades), de forma a desenvolver um software com qualidade e segurança. Confirmo também que este documento aborda todos os requisitos e funcionalidades de forma correta e clara ao que foi solicitado e ao que foi dito e pedido nas entrevistas, etnografias e questionários. Confirmo também que não há requisitos extras neste documento, todos os requisitos aqui citados foram requeridos e atendem à alguma funcionalidade necessária.

## 8. Bibliografia
---------------------------------------------

[1] Ronaldo Lopes de Oliveira, EOR – Modelo de Documento de Especificação de Objetivos e Requisitos de Software, Versão 2.0, abril de 2014.
Meta-Modelo usado como guia para definição do formato e conteúdo deste documento.

## 9. Anexos 
---------------------------------------------

