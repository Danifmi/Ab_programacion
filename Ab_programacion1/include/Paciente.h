#ifndef PACIENTE_H
#define PACIENTE_H

#include <string>
#include <vector>

// Clase que representa a un paciente hospitalizado.
class Paciente {
private:
    std::string nombre;                  // Nombre del paciente.
    int ID;                              // Identificación única del paciente.
    std::string fechaIngreso;            // Fecha de ingreso al hospital.
    std::vector<std::string> historialClinico; // Entradas médicas del historial clínico.

public:
    // Constructor básico para inicializar datos de un paciente.
    Paciente(const std::string& nombre, int ID, const std::string& fechaIngreso);
};

#endif // PACIENTE_H
