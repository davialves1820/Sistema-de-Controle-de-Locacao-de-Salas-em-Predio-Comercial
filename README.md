# Sistema de Controle de Locação de Salas em Prédio Comercial

Este projeto é um Sistema de Controle de Locação de Salas em Prédio Comercial desenvolvido em C++. 
O sistema permite adicionar, remover e listar salas, além de gerenciar empresas associados a essas salas. As salas podem ser de diferentes tipos, como privadas e compartilhadas.

## Funcionalidades

- **Gerenciamento de empresas:** As empresas podem ser adicionadas às salas, e suas idades e nomes são armazenados.
- **Controle de salas:** Salas privativas e compartilhadas podem ser gerenciadas individualmente, com cálculos específicos para o preço de cada tipo de sala.
- **Controle de prédio comercial:** O prédio comercial gerencia a lista de salas, permitindo a adição, remoção e exibição ordenada por andar.

## Estrutura do Projeto

- **`src/: Contém os arquivos de implementação (.cpp).
- **`include/: Contém os arquivos de cabeçalho (.h).
- **`obj/: Diretório gerado pelo Makefile para armazenar arquivos objeto (.o).
- **`build/: Diretório gerado pelo Makefile para o executável final.
- **`Makefile: Script para automatizar o processo de compilação.

## Classes Principais

- **`Enterprise`**: Classe que implementa a funcionalidade do objeto empresa
- **`Room`**: Classe base abstrata para todos os tipos de sala.
- **`Private_room`**, **`Shared_room`**: Classes derivadas que implementam a funcionalidade específica de cada tipo de sala.
- **`CommercialBuilding`**: Classe responsável por gerenciar as salas.

## Compilação e Execução

Para compilar o projeto no terminal execute: 

```bash
make
```
Para executar o programa no terminal execute:
```bash
./build/my_program
```
