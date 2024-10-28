#include "CommercialBuilding.h"

using std::cin;

// Menu de opções do usuário
void show_menu() {
    cout << "Menu" << endl;
    cout << "1-Add Room in Commercial building" << endl;
    cout << "2-Remove Room in Commercial building" << endl;
    cout << "3-Add Enterprise in commercial building" << endl;
    cout << "4-Remove Enterprise in commercial building" << endl;
    cout << "5-Show rooms" << endl;
    cout << "6-Show enterprises of room" << endl;
    cout << "0-Exit" << endl;
    cout << "Option: ";
}

int main(void) {

    Commercial_building c_b;
    int op;

    do {
        cout << endl;
        show_menu();
        cin >> op;
        cout << endl;

        switch (op) {
            case 1: { // Adicionar uma nova sala
                int n, f, o;
                cout << "Number of room: ";
                cin >> n;
                cout << "Floor of room: ";
                cin >> f;
                cout << "Private room(1) or Shared room(2): ";
                cin >> o;
                if (o == 1) { // Caso selecionou sala privada
                    int m_c;
                    cout << "Maximum capacity: ";
                    cin >> m_c;
                    Private_room* p_r = new Private_room(n, f, m_c);
                    c_b.add_room(p_r);
                    cout << "Room add" << endl;
                    break;
                } else if (o == 2) { // Caso selecionou sala compartilhada
                    int n_w_a;
                    cout << "Number of workstations available: ";
                    cin >> n_w_a;
                    Shared_room* s_r = new Shared_room(n, f, n_w_a);
                    c_b.add_room(s_r);
                    cout << "Room add" << endl;
                    break;
                } else { // Caso não selecionou nenhum dos dois volta para o menu
                    cout << "Invalid option" << endl;
                    break;
                }
            }

            case 2: { // Remover sala
                int n;
                cout << "Number of the room you want to remove: ";
                cin >> n;
                Room* room = c_b.get_room(n);
                if (room == nullptr) { // Caso a sala desejada não foi encontrada
                    cout << "Room not found" << endl;
                    break;
                }
                c_b.remove_room(room);
                cout << "Room deleted" << endl;
                break;
            }

            case 3: { // Adicionar empresa a sala
                try {
                string name;
                int n, age;
                cin.ignore();
                cout << "Name of enterprise: ";
                std::getline(cin, name);
                cout << "Age of enterprise: ";
                cin >> age;
                cout << "Number of room: ";
                cin >> n;
                Enterprise enterprise(name, age);
                Room* room = c_b.get_room(n);
                if (room == nullptr) { // Caso a sala desejada não foi encontrada
                    cout << "Room not found" << endl;
                    break;
                }
                (*room) + enterprise;
                cout << "Enterprise add" << endl;

                } catch (const Negative_age_exception& e) { // Captura exceção caso a idade da empresa for negativa
                    cout << "Exception: " << e.what() << endl;
                }
                break;
            }

            case 4: { // Remover empresa de uma sala
                string name;
                int n;
                cin.ignore();
                cout << "Name of enterprise: ";
                std::getline(cin, name);
                cout << "Number of room: ";
                cin >> n;
                Room* room = c_b.get_room(n);
                if (room == nullptr) { // Caso a sala desejada não foi encontrada
                    cout << "Room not found" << endl;
                    break;
                }
                (*room) - name;
                cout << "Enterprise deleted" << endl;
                break;
            }
            
            case 5: // Exibir as informações de todas as salas
                c_b.show_list();
                break;

            case 6: { // Exibir as informações de uma sala especifica
                int n;
                cout << "Number of room: " << endl;
                cin >> n;
                Room* room = c_b.get_room(n);
                if (room == nullptr) { // Caso a sala desejada não foi encontrada
                    cout << "Room not found" << endl;
                    break;
                }
                room->show_list();
                break;
            }        

            case 0:
                cout << "Exit..." << endl;
                break;

            default:
                cout << "Invalid option" << endl;
                break;
        }

    } while (op != 0);

    return 0;

}