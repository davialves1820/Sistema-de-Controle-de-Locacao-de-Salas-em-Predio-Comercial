/*
Classe predio_comercial
Atributo:
lista_de_salas (std::vector<sala*>).
Métodos:
adicionar_sala / remover_sala: Manipula a lista de salas do prédio.
Ordenação das salas pelo andar.
Sobrecarga dos operadores + e -:
+: Adiciona uma sala ao prédio.
-: Remove uma sala do prédio.
*/

#ifndef COMMERCIALBUILDING_H
#define COMMERCIALBUILDING_H

#include "PrivateRoom.h"
#include "SharedRoom.h"

class Commercial_building {
    list<Room*> list_of_rooms;
public:
    // Destrutor
    ~Commercial_building();

    void add_room(Room* room); // Adicionar sala
    void remove_room(Room* room); // Remover sala

    Room* get_room(int number); // Get de uma sala

    void order_list(); // Ordenar a lista
    void show_list(); // Exibir a lista

    void operator+(Room* r); // Sobrecarga do operador +
    void operator-(Room* room); // Sobrecarga do operador -
};

#endif