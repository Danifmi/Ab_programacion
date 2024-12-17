#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>
#include <string>
#include "../Ab_programacion1/include/Paciente.h"
#include "../Ab_programacion1/include/Medico.h"
#include "../Ab_programacion1/include/Cita.h"


void mostrarMenu() {
    std::cout << "\n--- Menu ---\n";
    std::cout << "1. Agregar paciente\n";
    std::cout << "2. Agregar medico\n";
    std::cout << "3. Agendar cita\n";
    std::cout << "4. Mostrar pacientes\n";
    std::cout << "5. Mostrar medicos\n";
    std::cout << "6. Mostrar citas\n";
    std::cout << "0. Salir\n";
    std::cout << "Seleccione una opcion: ";
}

int main() {
    std::map<int, Paciente> pacientes;
    std::unordered_map<int, Medico> medicos;
    std::vector<Cita> citas;

    int opcion;
    do {
        mostrarMenu();
        std::cin >> opcion;

        switch (opcion) {
        case 1: {
            // Agregar paciente
            int id;
            std::string nombre, fechaIngreso;
            std::cout << "Ingrese ID del paciente: ";
            std::cin >> id;
            std::cin.ignore();  // Limpiar el buffer
            std::cout << "Ingrese nombre del paciente: ";
            std::getline(std::cin, nombre);
            std::cout << "Ingrese fecha de ingreso (DD-MM-YYYY): ";
            std::getline(std::cin, fechaIngreso);

            Paciente p(id, nombre, fechaIngreso);
            pacientes[id] = p;
            std::cout << "Paciente agregado con exito.\n";
            break;
        }
        case 2: {
            // Agregar medico
            int id;
            std::string nombre, especialidad;
            bool disponibilidad;
            std::cout << "Ingrese ID del medico: ";
            std::cin >> id;
            std::cin.ignore();  // Limpiar el buffer
            std::cout << "Ingrese nombre del medico: ";
            std::getline(std::cin, nombre);
            std::cout << "Ingrese especialidad del medico: ";
            std::getline(std::cin, especialidad);
            std::cout << "¿Esta disponible? (1 para si, 0 para no): ";
            std::cin >> disponibilidad;

            Medico m(id, nombre, especialidad, disponibilidad);
            medicos[id] = m;
            std::cout << "Medico agregado con exito.\n";
            break;
        }
        case 3: {
            // Agendar cita
            int pacienteID, medicoID, urgencia;
            std::string fecha;
            std::cout << "Ingrese ID del paciente: ";
            std::cin >> pacienteID;
            std::cout << "Ingrese ID del medico: ";
            std::cin >> medicoID;
            std::cin.ignore();  // Limpiar el buffer
            std::cout << "Ingrese fecha de la cita (DD-MM-YYYY): ";
            std::getline(std::cin, fecha);
            std::cout << "Ingrese nivel de urgencia (1-5): ";
            std::cin >> urgencia;

            // Crear y agregar la cita
            Cita cita(pacienteID, medicoID, fecha, urgencia);
            citas.push_back(cita);
            std::cout << "Cita agendada con exito.\n";
            break;
        }
        case 4: {
            // Mostrar pacientes
            std::cout << "\n--- Pacientes ---\n";
            for (const auto& p : pacientes) {
                p.second.mostrarPaciente();
            }
            break;
        }
        case 5: {
            // Mostrar Medicos
            std::cout << "\n--- Medicos ---\n";
            for (const auto& m : medicos) {
                m.second.mostrarMedico();
            }
            break;
        }
        case 6: {
            // Mostrar citas
            std::cout << "\n--- Citas ---\n";
            for (const auto& cita : citas) {
                cita.mostrarCita();
            }
            break;
        }
        case 0:
            std::cout << "Saliendo...\n";
            break;
        default:
            std::cout << "Opcion no valida. Intente nuevamente.\n";
            break;
        }

    } while (opcion != 0);

    return 0;
}
