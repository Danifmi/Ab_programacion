// Paciente.cpp
#include "Paciente.h"

Paciente::Paciente(int id, const std::string& nombre, const std::string& fechaIngreso)
    : id(id), nombre(nombre), fechaIngreso(fechaIngreso) {
}

void Paciente::mostrarPaciente() const {
    std::cout << "ID: " << id << ", Nombre: " << nombre
        << ", Fecha de Ingreso: " << fechaIngreso << std::endl;
    std::cout << "Historial clinico: ";
    for (const auto& hist : historialClinico) {
        std::cout << hist << "; ";
    }
    std::cout << std::endl;
}
