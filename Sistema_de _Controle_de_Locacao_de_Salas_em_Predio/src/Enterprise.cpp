#include "Enterprise.h"

const char* Negative_age_exception::what() const noexcept {
    return "Negative age";
}

Enterprise::Enterprise(const string& n, int a) : name(n), age(a) {
    if (age < 0) { // Verifica se a idade é negativa
        age = 0;
        throw Negative_age_exception(); // Solta uma exceção se for negativa
    }
}

void Enterprise::set_name(const string& n) { name = n; }

string Enterprise::get_name() const { return name; }

void Enterprise::set_age(int a) { 
    if (a < 0) { // Verifica se a idade é negativa
        throw Negative_age_exception(); // solta uma exceção se for negativa
    }
    age = a; 
}

int Enterprise::get_age() const { return age; }

bool operator<(const Enterprise& e1, const Enterprise& e2) {
    return (e1.age < e2.age);
}

std::ostream& operator<<(std::ostream& out, const Enterprise& e) {
    out << "Enterprise" << endl;
    out << "Name: " << e.name << endl;
    out << "Age: " << e.age << endl;
    return out;
}