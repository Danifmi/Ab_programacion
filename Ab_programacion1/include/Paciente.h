#ifndef PACIENTE_H
#define PACIENTE_H

#include <string>
#include <vector>
#include <iostream>

class Paciente {
private:
    int id;                           // ID del paciente
    std::string nombre;               // Nombre del paciente
    std::string fechaIngreso;         // Fecha de ingreso
    std::vector<std::string> historialClinico; // Historial clínico del paciente

public:
    // Constructor predeterminado
    Paciente() : id(0), nombre(""), fechaIngreso(""), historialClinico() {}

    // Constructor parametrizado
    Paciente(int id, const std::string& nombre, const std::string& fechaIngreso);

    // Método para agregar un historial clínico
    void agregarHistorial(const std::string& historial);

    // Método para mostrar la información del paciente
    void mostrarPaciente() const;
};

#endif
