/*
Classe sala (abstrata)
Atributos:
numero_da_sala (int).
andar (int).
lista_de_empresas_locatarias (std::vector<empresa>).
Métodos:
set_numero / get_numero: Define e obtém o número da sala.
set_andar / get_andar: Define e obtém o andar da sala.
get_empresas: Retorna as empresas associadas à sala.
calcula_preco: Método virtual puro.
Ordenação das empresas por idade (empresas mais antigas aparecem primeiro).
Sobrecarga do operador <: Salas são comparadas pelo andar (salas em andares inferiores vêm
primeiro).
Sobrecarga dos operadores + e -:
+: Adiciona uma empresa à lista de uma sala.
-: Remove uma empresa da lista.

*/

#ifndef ROOM_H
#define ROOM_H

#include "Enterprise.h"
#include <list>
#include <algorithm>

using std::list;

class Room {
    int number;
    int floor;
    list<Enterprise> list_of_tenant_companies;
public:
    // Construtor
    Room(int n, int f);
    // Destrutor
    virtual ~Room();

    // Gets e set
    void set_number(int n);
    int get_number() const;

    void set_floor(int f);
    int get_floor() const;

    list<Enterprise> get_list() const;

    void order_list(); // Função para ordenar a lista
    virtual void show_list() = 0; // Função abstrata para exibir a lista

    virtual double calculates_price() const = 0; // Função abstrata para calcular o preço

    bool operator<(const Room& r); // Sobrecarga do operador <

    void operator+(const Enterprise& e); // Sobrecarga do operador +
    void operator-(const string& n); // Sobrecarga do operador -
};

#endif