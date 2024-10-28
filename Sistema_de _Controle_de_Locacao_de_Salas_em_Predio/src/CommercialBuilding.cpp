#include "CommercialBuilding.h"

Commercial_building::~Commercial_building() {
    for (auto it : list_of_rooms) {
        delete it; // Liberar a memoria dos ponteiros
    }
    list_of_rooms.clear(); // Limpa a lista
}

void Commercial_building::add_room(Room* room) {
    *this + room;
}

void Commercial_building::remove_room(Room* room) {
    *this - room;
}

Room* Commercial_building::get_room(int number) {
    for (auto it = list_of_rooms.begin(); it != list_of_rooms.end(); it++) {
        if ((*it)->get_number() == number) { // Procura uma sala de mesmo numero que selecionada pelo usuario
            return (*it);
        }
    }
    // Caso não encontre imprime uma mensagem e retorna o ponteiro vazio
    cout << "Room not found" << endl;
    return nullptr;
}

void Commercial_building::order_list() {
    list_of_rooms.sort(); // Salas são comparadas pelo andar, salas em andares inferiores vêm primeiro
}

void Commercial_building::show_list() {
    if (list_of_rooms.empty()) { // Caso a lista estiver vazia exibe uma mensagem
        cout << "List empty" << endl;
        return;
    }
    order_list(); // Ordena a lista antes de exibir
    for (const auto& it : list_of_rooms) {
        it->show_list();
    }
}

void Commercial_building::operator+(Room* room) {
    list_of_rooms.push_back(room);
}

void Commercial_building::operator-(Room* room) {
    for (auto it = list_of_rooms.begin(); it != list_of_rooms.end(); it++) {
        if ((*it)->get_number() == room->get_number()) { // Procura uma sala de mesmo numero que selecionada pelo usuario
            delete *it;
            list_of_rooms.erase(it);
            return;
        }
    }
}