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
    * 3.1 [Requisitos e Restrições de Usabilidade (RUS)](#31-requisitos-e-restrições-de-usabilidade-rus)			
    * 3.2 [Requisitos e Restrições de Plataforma de Software (RPSW)](#35-requisitos-e-restrições-de-plataforma-de-software-rpsw)	
* 4. [Casos de Uso e Requisitos Funcionais](#4-casos-de-uso-e-requisitos-funcionais)	
    * 4.1 [Diagramas de Caso de Uso e Lista de casos de uso](#41-diagramas-de-caso-de-uso-e-lista-de-casos-de-uso)	
    * 4.2 [Descrição de Casos de Uso](#42-descrição-de-casos-de-uso)	
* 5. [Bibliografia](#8-bibliografia)	
* 6. [Anexos](#9-anexos)	

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

## 5. Bibliografia
---------------------------------------------

[1] Ronaldo Lopes de Oliveira, EOR – Modelo de Documento de Especificação de Objetivos e Requisitos de Software, Versão 2.0, abril de 2014.
Meta-Modelo usado como guia para definição do formato e conteúdo deste documento.

## 6. Anexos 
---------------------------------------------

