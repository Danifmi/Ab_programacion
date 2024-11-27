// Medico.cpp
#include "Medico.h"
#include <iostream>

Medico::Medico(int id, const std::string& nombre, const std::string& especialidad, bool disponibilidad)
    : id(id), nombre(nombre), especialidad(especialidad), disponibilidad(disponibilidad) {
}

void Medico::mostrarMedico() const {
    std::cout << "ID: " << id
        << ", Nombre: " << nombre
        << ", Especialidad: " << especialidad
        << ", Disponibilidad: " << (disponibilidad ? "Si" : "No")
        << std::endl;
}

