# Sistema de Controle de Locação de Salas em Prédio Comercial

Este projeto implementa um sistema de controle de locação para gerenciar salas comerciais em um prédio. Empresas locatárias podem ser associadas a diferentes salas, com opção de adicionar ou remover empresas e salas utilizando um menu interativo. Cada sala possui atributos específicos como número e andar, e pode ser privada ou compartilhada. O sistema utiliza herança, composição e polimorfismo e permite manipulação e ordenação dos dados de maneira prática.

## Funcionalidades
- **Adicionar e remover** salas (privativas ou compartilhadas) em um prédio comercial.
- **Associar empresas** a salas e definir atributos como nome e idade no mercado.
- **Exibir informações** das salas e das empresas associadas de forma organizada e ordenada.


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
