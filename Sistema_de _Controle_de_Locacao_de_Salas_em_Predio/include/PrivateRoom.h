/*
sala_privativa: Atributo adicional: capacidade_maxima_de_pessoas (int). Sobrescrever
calcula_preco().
*/

#ifndef PRIVATEROOM_H
#define PRIVATEROOM_H

#include "Room.h"

class Private_room : public Room{
    int maximum_capacity;
public:
    // Construtor
    Private_room(int n, int f, int m_c);

    // Get e set
    void set_maximum(int m);
    int get_maximum() const;

    // Sobreescrita das funções abstratas
    void show_list() override;
    double calculates_price() const override; 

    friend std::ostream& operator<<(std::ostream& out, const Private_room& p); // Sobrecarga do operador <<
};

#endif