// Medico.cpp
#include "Medico.h"
#include <iostream>

int Medico::contadorID = 1; // Inicializamos el contador

Medico::Medico(const std::string& nombre, const std::string& especialidad, bool disponibilidad)
    : id(contadorID++), nombre(nombre), especialidad(especialidad), disponibilidad(disponibilidad) {
}

void Medico::mostrarMedico() const {
    std::cout << "ID: " << id
        << ", Nombre: " << nombre
        << ", Especialidad: " << especialidad
        << ", Disponibilidad: " << (disponibilidad ? "Si" : "No")
        << std::endl;
}

