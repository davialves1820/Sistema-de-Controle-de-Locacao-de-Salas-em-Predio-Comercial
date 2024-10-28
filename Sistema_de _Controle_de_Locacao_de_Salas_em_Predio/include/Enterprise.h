/*
Classe empresa
Atributos:
nome_da_empresa (string).
idade_da_empresa (int), em anos de mercado.
Métodos:
set_nome / get_nome: Define e obtém o nome da empresa.
set_idade / get_idade: Define e obtém a idade da empresa.
Exceções: O método construtor e o método set_idade devem lançar uma exceção caso um valor
negativo seja passado como parâmetro.
Sobrecarga do operador <: Duas empresas são comparadas pela idade (empresas mais antigas
vêm primeiro).
*/

#ifndef ENTERPRISE_H
#define ENTERPRISE_H

#include <iostream>
#include <string>
#include <stdexcept>

using std::cout;
using std::endl;
using std::string;

// Classe para tratar exceção em relação a idade negativa
class Negative_age_exception : public std::exception {
public:
    const char* what() const noexcept override;
};

class Enterprise {
    string name;
    int age;
public:
    // Construtor
    Enterprise(const string& n, int a = 0);
    
    // Gets e sets
    void set_name(const string& n);
    string get_name() const;

    void set_age(int a);
    int get_age() const;

    friend bool operator<(const Enterprise& e1, const Enterprise& e2); // Sobrecarga do operador <
    friend std::ostream& operator<<(std::ostream& out, const Enterprise& e); // Sobrecarga do operador <<
};

#endif