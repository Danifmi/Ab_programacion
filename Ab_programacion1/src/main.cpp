#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>
#include <string>
#include "../Ab_programacion1/include/Paciente.h"
#include "../Ab_programacion1/include/Medico.h"
#include "../Ab_programacion1/include/Cita.h"


void static mostrarMenu() {
    std::cout << "\n--- Menu ---\n";
    std::cout << "1. Pacientes\n";
    std::cout << "2. Medicos\n";
    std::cout << "3. Citas\n";
    std::cout << "0. Salir\n";
    std::cout << "Seleccione una opcion: ";
}

int main() {
    std::map<int, Paciente> pacientes;
    std::unordered_map<int, Medico> medicos;
    std::unordered_map<int, Cita> citas;

    int opcion;
    do {
        mostrarMenu();
        std::cin >> opcion;

        switch (opcion) {
        case 1: {  // Submenú de Pacientes
            int opcionSubmenu;
            do {
                std::cout << "\n--- Submenu Pacientes ---\n";
                std::cout << "1. Agregar paciente\n";
                std::cout << "2. Buscar paciente por ID\n";
                std::cout << "3. Eliminar paciente\n";
                std::cout << "4. Listar pacientes\n";
                std::cout << "5. Modificar paciente\n";
                std::cout << "0. Volver al menu principal\n";
                std::cout << "Seleccione una opcion: ";
                std::cin >> opcionSubmenu;

                switch (opcionSubmenu) {
                case 1: {
                    // Agregar paciente
                    int id;
                    std::string nombre, fechaIngreso;
                    std::cin.ignore();  // Limpiar el buffer de entrada 

                    do {
                        std::cout << "Ingrese nombre del paciente: ";
                        std::getline(std::cin, nombre);  // Leer nombre
                    } while (!Paciente().validarNombre(nombre));  // Validación de nombre 

                    do {
                        std::cout << "Ingrese fecha de ingreso (DD-MM-YYYY): ";
                        std::getline(std::cin, fechaIngreso);  // Leer fecha de ingreso
                    } while (!Paciente().validarFecha(fechaIngreso)); // Validación de fecha

                    Paciente p(nombre, fechaIngreso);
                    pacientes[p.getID()] = p;
                    std::cout << "Paciente agregado con exito. ID: " << p.getID() << "\n";
                    break;
                }
                case 2: {
                    // Buscar paciente por ID
                    int idBuscar;
                    std::cout << "Ingrese ID del paciente a buscar: ";
                    std::cin >> idBuscar;
                    if (pacientes.find(idBuscar) != pacientes.end()) {
                        pacientes[idBuscar].mostrarPaciente();
                    }
                    else {
                        std::cout << "Paciente no encontrado.\n";
                    }
                    break;
                }
                case 3: {
                    // Eliminar paciente
                    int idEliminar;
                    std::cout << "Ingrese ID del paciente a eliminar: ";
                    std::cin >> idEliminar;
                    if (pacientes.find(idEliminar) != pacientes.end()) {
                        pacientes.erase(idEliminar);
                        std::cout << "Paciente eliminado con exito.\n";
                    }
                    else {
                        std::cout << "Paciente no encontrado.\n";
                    }
                    break;
                }
                case 4: {
                    // Listar pacientes
                    std::cout << "\n--- Pacientes ---\n";
                    for (const auto& p : pacientes) {
                        p.second.mostrarPaciente();
                    }
                    break;
                }
                case 5: {
                    // Modificar paciente
                    int idModificar;
                    std::cout << "Ingrese ID del paciente a modificar: ";
                    std::cin >> idModificar;
                    if (pacientes.find(idModificar) != pacientes.end()) {
                        std::string nuevoNombre, nuevaFecha;
                        std::cin.ignore();  // Limpiar buffer

                        do {
                            std::cout << "Ingrese nombre del paciente: ";
                            std::getline(std::cin, nuevoNombre);  // Leer nombre nuevo
                        } while (!Paciente().validarNombre(nuevoNombre));  // Validación de nombre 

                        do {
                            std::cout << "Ingrese fecha de ingreso (DD-MM-YYYY): ";
                            std::getline(std::cin, nuevaFecha);  // Leer fecha de ingreso nueva
                        } while (!Paciente().validarFecha(nuevaFecha)); // Validación de fecha

                        // Modificar paciente
                        pacientes[idModificar].setNombre(nuevoNombre);  
                        pacientes[idModificar].setFechaIngreso(nuevaFecha);
                        std::cout << "Paciente modificado con exito.\n";
                    }
                    else {
                        std::cout << "Paciente no encontrado.\n";
                    }
                    break;
                }
                case 0:
                    break;
                default:
                    std::cout << "Opcion no valida. Intente nuevamente.\n";
                    break;
                }

            } while (opcionSubmenu != 0);
            break;
        }
        case 2: {
            int opcionSubmenu;
            do {
                std::cout << "\n--- Submenu Medicos ---\n";
                std::cout << "1. Agregar medico\n";
                std::cout << "2. Buscar medico por ID\n";
                std::cout << "3. Eliminar medico\n";
                std::cout << "4. Listar medicos\n";
                std::cout << "5. Modificar medicos\n";
                std::cout << "0. Volver al menu principal\n";
                std::cout << "Seleccione una opcion: ";
                std::cin >> opcionSubmenu;

                switch (opcionSubmenu) {
                case 1: {
                    // Agregar medico
                    int id;
                    std::string nombre, especialidad;
                    bool disponibilidad;
                    std::cin.ignore();  // Limpiar el buffer de entrada 

                    do {
                        std::cout << "Ingrese nombre del medico: ";
                        std::getline(std::cin, nombre);  // Leer nombre
                    } while (!Medico().validarNombre(nombre));  // Validación de nombre 

                    do {
                        std::cout << "Ingrese especialidad del medico: ";
                        std::getline(std::cin, especialidad);  // Leer especialidad
                    } while (!Medico().validarEspecialidad(especialidad));  // Validación de especialidad

                    std::cout << "Esta disponible? (1 para si, 0 para no): ";
                    std::cin >> disponibilidad;

                    Medico m(nombre, especialidad, disponibilidad);
                    medicos[m.getID()] = m;
                    std::cout << "Medico agregado con exito. ID: " << m.getID() << "\n";
                    break;
                }
                case 2: {
                    // Buscar medico por ID
                    int idBuscar;
                    std::cout << "Ingrese ID del medico a buscar: ";
                    std::cin >> idBuscar;
                    if (medicos.find(idBuscar) != medicos.end()) {
                        medicos[idBuscar].mostrarMedico();
                    }
                    else {
                        std::cout << "Medico no encontrado.\n";
                    }
                    break;
                }
                case 3: {
                    // Eliminar medico
                    int idEliminar;
                    std::cout << "Ingrese ID del medico a eliminar: ";
                    std::cin >> idEliminar;
                    if (medicos.find(idEliminar) != medicos.end()) {
                        medicos.erase(idEliminar);
                        std::cout << "Medico eliminado con exito.\n";
                    }
                    else {
                        std::cout << "Medico no encontrado.\n";
                    }
                    break;
                }
                case 4: {
                    // Listar medicos
                    std::cout << "\n--- Medicos ---\n";
                    for (const auto& m : medicos) {
                        m.second.mostrarMedico();
                    }
                    break;
                }
                case 5: {
                    // Modificar medico
                    int idModificar;
                    std::cout << "Ingrese ID del medico a modificar: ";
                    std::cin >> idModificar;
                    if (medicos.find(idModificar) != medicos.end()) {
                        std::string nuevoNombre, nuevaEspecialidad;
                        bool nuevaDisponibilidad;
                        std::cin.ignore();  // Limpiar buffer

                        do {
                            std::cout << "Ingrese nuevo nombre del medico: ";
                            std::getline(std::cin, nuevoNombre);  // Leer nombre nuevo
                        } while (!Medico().validarNombre(nuevoNombre));  // Validación de nombre 

                        do {
                            std::cout << "Ingrese nueva especialidad del medico: ";
                            std::getline(std::cin, nuevaEspecialidad);  // Leer especialidad
                        } while (!Medico().validarEspecialidad(nuevaEspecialidad));  // Validación de especialidad

                        std::cout << "Esta disponible? (1 para si, 0 para no): ";
                        std::cin >> nuevaDisponibilidad;

                        //Modificar médico
                        medicos[idModificar].setNombre(nuevoNombre);
                        medicos[idModificar].setEspecialidad(nuevaEspecialidad);
                        medicos[idModificar].setDisponibilidad(nuevaDisponibilidad);
                        std::cout << "Medico modificado con exito.\n";
                    }
                    else {
                        std::cout << "Medico no encontrado.\n";
                    }
                    break;
                }
                case 0:
                    break;
                default:
                    std::cout << "Opcion no valida. Intente nuevamente.\n";
                    break;
                }

            } while (opcionSubmenu != 0);
            break;

        }
        case 3: {
            int opcionSubmenu;
            do {
                std::cout << "\n--- Submenu Citas ---\n";
                std::cout << "1. Agregar cita\n";
                std::cout << "2. Buscar cita por ID\n";
                std::cout << "3. Eliminar cita\n";
                std::cout << "4. Listar citas\n";
                std::cout << "5. Modificar citas\n";
                std::cout << "0. Volver al menu principal\n";
                std::cout << "Seleccione una opcion: ";
                std::cin >> opcionSubmenu;

                switch (opcionSubmenu) {
                case 1: {
                    // Agendar cita
                    int id, pacienteID, medicoID, urgencia;
                    std::string fechaCita;
                    std::cin.ignore();  // Limpiar el buffer de entrada

                    do {
                        std::cout << "Ingrese ID del paciente: ";
                        std::cin >> pacienteID;
                    } while (!Cita().validarPacienteID(pacienteID, pacientes)); // Validación de id  

                    std::cin.ignore();

                    do {
                        std::cout << "Ingrese ID del medico: ";
                        std::cin >> medicoID;
                    } while (!Cita().validarMedicoID(medicoID, medicos));  // Validación de id 

                    std::cin.ignore();

                    do {
                        std::cout << "Ingrese fecha (DD-MM-YYYY): ";
                        std::getline(std::cin, fechaCita);
                    } while (!Cita().validarFecha(fechaCita)); // Validación de fecha

                    do {
                        std::cout << "Ingrese nivel de urgencia (1-5): ";
                        std::cin >> urgencia;
                    } while (!Cita().validarUrgencia(urgencia));  // Validación de urgencia 

                    Cita c(pacienteID, medicoID, fechaCita, urgencia);
                    citas[c.getID()] = c;
                    std::cout << "Cita agregada con exito. ID: " << c.getID() << "\n";
                }break;

                case 2: {
                    // Buscar cita por ID
                    int idBuscar;
                    std::cout << "Ingrese ID de la cita a buscar: ";
                    std::cin >> idBuscar;
                    if (citas.find(idBuscar) != citas.end()) {
                        citas[idBuscar].mostrarCita();
                    }
                    else {
                        std::cout << "Cita no encontrada.\n";
                    }
                    break;
                }
                case 3: {
                    // Eliminar cita
                    int idEliminar;
                    std::cout << "Ingrese ID de la cita a eliminar: ";
                    std::cin >> idEliminar;
                    if (citas.find(idEliminar) != citas.end()) {
                        citas.erase(idEliminar);
                        std::cout << "Cita eliminada con exito.\n";
                    }
                    else {
                        std::cout << "Cita no encontrada.\n";
                    }
                    break;
                }
                case 4: {
                    // Listar citas
                    std::cout << "\n--- Citas ---\n";
                    for (const auto& c : citas) {
                        c.second.mostrarCita();
                    }
                    break;
                }
                case 5: {
                    // Modificar cita
                    int idModificar;
                    std::cout << "Ingrese ID de la cita a modificar: ";
                    std::cin >> idModificar;
                    if (citas.find(idModificar) != citas.end()) {
                        int nuevoPacienteID, nuevoMedicoID, nuevaUrgencia;
                        std::string nuevaFecha;
                        std::cin.ignore();

                        do {
                            std::cout << "Ingrese nuevo ID del paciente: ";
                            std::cin >> nuevoPacienteID;
                        } while (!Cita().validarPacienteID(nuevoPacienteID, pacientes));

                        do {
                            std::cout << "Ingrese nuevo ID del medico: ";
                            std::cin >> nuevoMedicoID;
                        } while (!Cita().validarMedicoID(nuevoMedicoID, medicos));

                        std::cin.ignore();

                        do {
                            std::cout << "Ingrese nueva fecha (DD-MM-YYYY): ";
                            std::getline(std::cin, nuevaFecha);
                        } while (!Cita().validarFecha(nuevaFecha));

                        do {
                            std::cout << "Ingrese nuevo nivel de urgencia (1-5): ";
                            std::cin >> nuevaUrgencia;
                        } while (!Cita().validarUrgencia(nuevaUrgencia));

                        citas[idModificar].setPacienteID(nuevoPacienteID);
                        citas[idModificar].setMedicoID(nuevoMedicoID);
                        citas[idModificar].setFecha(nuevaFecha);
                        citas[idModificar].setUrgencia(nuevaUrgencia);
                        std::cout << "Cita modificada con exito.\n";
                    }
                    else {
                        std::cout << "Cita no encontrada.\n";
                    }
                    break;
                }
                case 0:
                    break;
                default:
                    std::cout << "Opcion no valida. Intente nuevamente.\n";
                    break;
                }

            } while (opcionSubmenu != 0);
        }
                break;



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