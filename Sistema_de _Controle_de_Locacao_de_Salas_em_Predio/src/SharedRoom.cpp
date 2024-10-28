#include "SharedRoom.h"

Shared_room::Shared_room(int n, int f, int n_w_a) : Room(n, f), number_of_workstations_available(n_w_a) {}

void Shared_room::set_number_workstations(int n) { number_of_workstations_available = n; }

int Shared_room::get_number_workstations() const { return number_of_workstations_available; }

double Shared_room::calculates_price() const { return 75; }

void Shared_room::show_list() {
    cout << *this;
}

std::ostream& operator<<(std::ostream& out, const Shared_room& s) {
    out << "Shared Room" << endl;
    out << "Number: " << s.get_number() << endl;
    out << "Floor: " << s.get_floor() << endl;
    out << "Number of workstations available: " << s.number_of_workstations_available << endl;
    out << "Price: " << s.calculates_price() << endl;
    out << "List of enterprise" << endl;
    if (s.get_list().empty()) { // Caso a lista estiver vazia informa ao usuario
        out << "None enterprise" << endl;
        return out;
    }
    for (const auto& it : s.get_list()) {
        out << it;
    }
    return out;
}