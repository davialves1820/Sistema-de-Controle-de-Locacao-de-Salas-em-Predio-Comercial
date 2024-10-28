#include "PrivateRoom.h"

Private_room::Private_room(int n, int f, int m_c) : Room(n, f), maximum_capacity(m_c) {}

void Private_room::set_maximum(int m) { maximum_capacity = m; }

int Private_room::get_maximum() const { return maximum_capacity; }

double Private_room::calculates_price() const { return 100; }

void Private_room::show_list() {
    cout << *this;
}

std::ostream& operator<<(std::ostream& out, const Private_room& p) {
    out << "Private room" << endl;
    out << "Number: " << p.get_number() << endl;
    out << "Floor: " << p.get_floor() << endl;
    out << "Maximum capacity: " << p.maximum_capacity << endl;
    out << "Price: " << p.calculates_price() << endl;
    out << "List of enterprise" << endl;
    if (p.get_list().empty()) { // Caso a lista estiver vazia informa ao usuario
        out << "None enterprise" << endl;
        return out;
    }
    for (const auto& it : p.get_list()) {
        out << it;
    }
    return out;
}