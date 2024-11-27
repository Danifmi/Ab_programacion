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
    std::vector<std::string> historialClinico; // Historial cl�nico del paciente

public:
    // Constructor predeterminado
    Paciente() : id(0), nombre(""), fechaIngreso(""), historialClinico() {}

    // Constructor parametrizado
    Paciente(int id, const std::string& nombre, const std::string& fechaIngreso);

    // M�todo para agregar un historial cl�nico
    void agregarHistorial(const std::string& historial);

    // M�todo para mostrar la informaci�n del paciente
    void mostrarPaciente() const;
};

#endif
