#include "Room.h"

Room::Room(int n, int f) : number(n), floor(f) {}
Room::~Room() {}

void Room::set_number(int n) { number = n; }

int Room::get_number() const { return number; }

void Room::set_floor(int f) { floor = f; } 

int Room::get_floor() const { return floor; }

list<Enterprise> Room::get_list() const { return list_of_tenant_companies; }

void Room::order_list() {
    // Duas empresas são comparadas pela idade, empresas mais antigas vêm primeiro
    list_of_tenant_companies.sort(); // Ordena em ordem crescente
    list_of_tenant_companies.reverse(); // Inverte a ordem ficando descrescente
}

bool Room::operator<(const Room& r) {
    return (floor < r.floor);
}

void Room::operator+(const Enterprise& e) {
    list_of_tenant_companies.push_back(e);
    order_list();
}

void Room::operator-(const string& name) {
    for (auto it = list_of_tenant_companies.begin(); it != list_of_tenant_companies.end(); ++it) {
        if (name == it->get_name()) { // Procura uma empresa de mesmo nome que selecionada pelo usuario
            list_of_tenant_companies.erase(it);
            return;
        }
    }
}