Trabalho Prático Interdisciplinar
Salão de Festas Patati Patatá
===================

Índice Analítico
-----------------

* 1. [Introdução](#1-introdução)	
    * 1.1 [Objetivos](#11-objetivos)	
    * 1.2 [Público Alvo](#12-público-alvo) 
* 2. [Descrição do problema e do sistema](#2-descrição-do-problema-e-do-sistema)
    * 2.1 [Identificação e missão do Sistema](#21-identificação-e-missão-do-sistema)	
    * 2.2 [Domínio do problema e contexto de sua aplicação](#22-domínio-do-problema-e-contexto-de-sua-aplicação)
    * 2.3 [Descrição dos interessados do sistema](#23-descrição-dos-interessados-do-sistema)	
* 3. [Requisitos e restrições não funcionais](#3-requisitos-e-restrições-não-funcionais)
    * 3.1 [Requisitos e Usabilidade](#31-requisitos-e-usabiliade)			
    * 3.2 [Restrição de tecnologia](#32-restrição-de-tecnologia)
* 4. [Backlog do Produto](#4-backlog-do-produto) 
* 5. [Casos de Uso e Requisitos Funcionais](#5-casos-de-uso-e-requisitos-funcionais)	
    * 5.1 [Diagramas de Caso de Uso e Lista de casos de uso](#51-diagramas-de-caso-de-uso-e-lista-de-casos-de-uso)	
    * 5.2 [Descrição de Casos de Uso](#52-descrição-de-casos-de-uso)	
* 6. [Bibliografia](#6-bibliografia)	
* 7. [Anexos](#5-anexos)	

## 1. Introdução

O presente documento apresenta um detalhamento de um código em C que permitirá aos usuários 
realizar a gestão de um salão de festas.

Neste documento, serão apresentados detalhes sobre a estrutura do código, as funcionalidades 
implementadas, as principais bibliotecas utilizadas e a lógica por trás das diferentes partes 
do programa. Ao longo deste documento,o sistema desenvolvido será descrito de forma clara e 
objetiva, destacando suas principais características e benefícios.

### 1.1 Objetivos

Este documento tem os seguintes objetivos:	
-	Apresentar um detalhamento de um código em C para a gestão de um salão de festas;
-	Descrever o projeto desenvolvido para as disciplinas Fundamentos de Engenharia de Software e Algoritmo e Estrutura de Dados 1;	
-	Informar sobre o propósito do projeto, que é criar um programa de cadastro de dados em C para o salão de festas Patati Patatá;	
-	Destacar as funcionalidades implementadas no programa, como o gerenciamento de clientes, fornecedores, festas e pagamentos;	
-	Apresentar o documento de forma clara e objetiva, facilitando a compreensão e o uso do código desenvolvido.

### 1.2 Público Alvo

Este documento tem os seguintes públicos alvo:	
-	Empresas do ramo de salões de festas: Empresas do setor de eventos, especificamente salões de festas, podem se beneficiar
desse projeto como uma solução de software para auxiliar na gestão de suas operações. O documento apresenta uma proposta de sistema
que pode ser adaptada e implementada para atender às necessidades específicas de tais empresas.

## 2. Descrição do problema e do sistema
-----------------------------------------

O problema abordado neste projeto interdisciplinar é a falta de um sistema de gestão eficiente 
para um salão de festas. No qual enfrenta dificuldades na organização de gerenciamento de clientes,
controle de festas e pagamentos. A ausência de um sistema automatizado resulta em processos manuais, 
propensos a erros e ineficiências.

O sistema proposto oferece registro de informações relevantes, como dados pessoais dos clientes, 
datas e horários de eventos, detalhes sobre os serviços contratados, histórico de pagamentos e 
outras informações relacionadas à gestão do salão de festas. Além disso, o sistema possibilitará
a realização de consultas, fornecendo informações precisas e atualizadas para a tomada de decisões gerenciais.

### 2.1 Identificação e missão do Sistema

#### Identificação do Sistema:
-	Nome: Sistema de Gestão do Salão de Festas Patati Patatá 
-	Versão: 1.0
#### Missão do Sistema:
-	A missão do Sistema de Gestão do Salão de Festas Patati Patatá é proporcionar uma solução eficiente e automatizada para a gestão das atividades do salão, visando aprimorar a organização, o controle e a satisfação dos clientes. O sistema tem como objetivo principal facilitar o gerenciamento de reservas, clientes, eventos e pagamentos, otimizando os processos operacionais e fornecendo informações precisas para a tomada de decisões gerenciais.

### 2.2 Domínio do problema e contexto de sua aplicação

O domínio do problema abordado neste projeto é a gestão de um salão de festas chamado Patati Patatá, situado no contexto do ramo de eventos e entretenimento. O objetivo é desenvolver um sistema de gestão que automatize e melhore os processos envolvidos na administração do salão, atendendo às necessidades específicas dessa empresa.

As características específicas do problema na empresa Patati Patatá podem incluir:

-	Cadastro de clientes: É necessário manter um registro atualizado dos clientes,
contendo informações pessoais, preferências, histórico de eventos realizados e histórico de pagamentos.
-	Gestão de datas e horários: O salão precisa gerenciar a disponibilidade do espaço
para diferentes datas e horários, evitando conflitos e permitindo a programação eficiente de eventos.
-	Controle de pagamentos: É necessário acompanhar os pagamentos feitos pelos clientes,
gerar faturas, controlar inadimplências e oferecer opções de pagamento adequadas.
-	Emissão de relatórios: A geração de relatórios precisos e abrangentes é essencial para
a análise de desempenho do salão, incluindo dados sobre reservas, faturamento, ocupação do
espaço e outros indicadores relevantes.

O contexto de aplicação é o ambiente do salão de festas Patati Patatá, onde o sistema
de gestão será implementado. A empresa busca uma solução que otimize seus processos, 
reduza erros, melhore a organização e proporcione uma experiência aprimorada tanto para
a equipe do salão quanto para os clientes. O sistema deve ser capaz de lidar com as demandas
específicas do salão de festas, permitindo um controle eficiente das operações e auxiliando 
na tomada de decisões estratégicas para o crescimento do negócio.

### 2.3 Descrição dos interessados do sistema

Descrever os perfis de cada interessado envolvido com o sistema.

| Interessado(s) 	| Descrição 	|
|:----------------:	|---------	|
| Administrador do sistema | É o responsável pela operação e manutenção do sistema de gestão do salão de festas. Esse perfil é encarregado de configurar e gerenciar o sistema, realizar tarefas de manutenção, garantir a segurança dos dados e tomar decisões relacionadas ao sistema. |
| Cliente | Refere-se às pessoas ou organizações que contratam os serviços do salão de festas. Esse perfil utiliza o sistema para fazer reservas, fornecer informações pessoais, selecionar serviços e fornecedores, acompanhar o histórico de pagamentos e acessar informações sobre eventos anteriores. |
| Fornecedor | São as empresas ou indivíduos que oferecem serviços para o salão de festas, como catering, decoração, música, fotografia, entre outros. Os fornecedores utilizam o sistema para acessar informações relevantes, como detalhes dos eventos contratados, datas, horários e requisitos específicos. |

## 3. Requisitos e restrições não funcionais 
--------------------------------------------

### 3.1 Requisitos e Usabilidade

| Entradas |       Classes validas   	|   Resultado esperado 	|
|------	|------------------------------	|-----------------	|
| Numeros Inteiros | Opção escolhida entre X a Y sendo que X e Y são apresentados como forma de menu intuitiva  | Acessar a função da opção digitada |

#### Exemplo:

![image](https://github.com/oarthurfc/salaoDeFestas/assets/113954562/81308b5c-2084-4360-a597-058e9a9a9c6f)


### 3.2 Restrição de tecnologia

O sistema de gestão do salão de festas apresenta as seguintes restrições de tecnologia:

- 	Reconhecimento limitado do strptime: Alguns compiladores podem não reconhecer a função strptime, utilizada para converter strings em formato de data/hora em valores estruturados. É importante verificar a compatibilidade do compilador utilizado para garantir o correto funcionamento dessa funcionalidade.
- 	Correspondência exata do nome do cliente: Para pesquisar um cliente pelo nome, o usuário precisa inserir o nome exatamente como foi cadastrado no sistema. Não são realizadas correspondências parciais ou insensíveis a maiúsculas/minúsculas. Essa restrição deve ser considerada ao realizar consultas de clientes por nome.
- 	Validação do telefone: O sistema requer que os números de telefone informados pelos clientes sejam válidos. Embora não seja especificado como essa validação é feita, é importante garantir que os números de telefone fornecidos estejam em um formato correto e sejam aceitos pelo sistema.

## 4. Backlog do Produto

- ![image](https://github.com/oarthurfc/salaoDeFestas/assets/113954562/8d659746-0ad6-4266-84f2-321642edce98)
- ![image](https://github.com/oarthurfc/salaoDeFestas/assets/113954562/0e480e01-be07-436e-9421-08bf4c648981)

## 5. Casos de Uso e Requisitos Funcionais
---------------------------------

### 5.1 Diagramas de Caso de Uso e Lista de casos de uso

![](http://postimg.org/image/skrz04i6x/)

### 5.2 Descrição de Casos de Uso

#### 1- Cadastrar:
Descrição: Esse caso de uso permite ao usuário registrar um novo cliente ou um fornecedor ou uma festa no sistema.

Ator Principal: Administrador do sistema.

##### Fluxo básico:

-	1. O administrador seleciona a opção de cadastrar no menu.
-	2. O sistema solicita se o cadastro é para cliente, fornecedor ou para festa ou se quer sair do menu.
-	3. O administrador insere o objetivo.
-	4. O sistema valida e entra na função de cadastro do que foi solicitado.
-	5. O sistema solicita informações sobre o topico escolhido.
-	6. O sistema exibe uma mensagem de confirmação do cadastro.

##### Fluxo alternativo:

No passo 5, se houver algum erro de validação nas informações inseridas, o sistema exibe uma mensagem de erro e solicita ao administrador que corrija as informações incorretas.

#### 2- Pesquisar:
Descrição: Esse caso de uso permite ao usuário pesquisar detalhes de clientes, fornecedor ou uma festa no sistema.

Ator Principal: Administrador do sistema.

##### Fluxo básico:

-	1. O administrador seleciona a opção de pesquisar no menu.
-	2. O sistema solicita se o quer pesquisar clientes, fornecedores ou uma festa ou se quer sair do menu.
-	3. O administrador insere o objetivo.
-	4. O sistema valida e entra na função de pesquia do que foi solicitado.
-	5. O sistema solicita informações sobre o codigo do qual é a pesquisa .
-	6. O sistema exibe os dados encontrados e retoma ao topico 2.

##### Fluxo alternativo:

No passo 5, se houver algum erro de validação nas informações inseridas, o sistema exibe uma mensagem de erro e solicita ao administrador que corrija as informações incorretas.

#### 3- Atualizar contrato:
Descrição: Esse caso de uso permite ao usuário atualizar o contrato no sistema.

Ator Principal: Administrador do sistema.

##### Fluxo básico:

-	1. O administrador seleciona a opção de atualizar contrato no menu.
-	2. O sistema solicita o codigo do contrato que foi gerado ao cadastrar uma festa.
-	3. O administrador insere o novo status do contrato.
-	4. O sistema valida e arquiva os status do contrato.
-	5. O sistema exibe atualização com sucesso e retoma ao menu principal.

#### 4- Relatórios:
Descrição: Esse caso de uso permite ao usuário pesquisar relatórios no sistema.

Ator Principal: Administrador do sistema.

##### Fluxo básico:

-	1. O administrador seleciona a opção de relatório no menu.
-	2. O sistema solicita qual relatório quer olhar, tendo as seguintes opções: por cliente, data, lista de todos clientes, lista de todos fornecedores, lista de todas as festas, lista de todos os contratos e sair do menu.
-	3. O administrador insere qual o tipo de relatório ele deseja.
-	3.5 Dependendo do relatório buscado será solicitado informações para serem digitadas.
-	4. O sistema valida e apresenta o relatório do que foi solicitado e retoma ao topico 2.

## 6. Bibliografia
---------------------------------------------

[1] Ronaldo Lopes de Oliveira, EOR – Modelo de Documento de Especificação de Objetivos e Requisitos de Software, Versão 2.0, abril de 2014.
Meta-Modelo usado como guia para definição do formato e conteúdo deste documento.

## 7. Anexos 
---------------------------------------------
-   [Clique aqui](https://www.youtube.com/watch?v=pWXVsG4rj7k0) para ver o video apresentando o sistema.
-   [Clique aqui](https://docs.google.com/document/d/1hvlVd_w5hOYzA_fIY5bYgsYL1WLetDSQTHfUy5AL5YE/edit?usp=sharing) para ver casos de teste.

