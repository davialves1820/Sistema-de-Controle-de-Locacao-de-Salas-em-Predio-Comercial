/*
sala_compartilhada: Atributo adicional: numero_de_estacoes_de_trabalho_disponiveis (int).
Sobrescrever calcula_preco().
*/


#ifndef SHAREDROOM_H
#define SHAREDROOM_H

#include "Room.h"

class Shared_room : public Room {
    int number_of_workstations_available;
public:
    // Construtor
    Shared_room(int n, int f, int n_w_a);

    // Get e set
    void set_number_workstations(int n);

    int get_number_workstations() const;

    // Sobreescrita das funções abstratas
    void show_list() override;
    double calculates_price() const override;

    friend std::ostream& operator<<(std::ostream& out, const Shared_room& s); // Sobrecarga do operador <<
};

#endif