// Medico.cpp
#include "Medico.h"

int Medico::contadorID = 1; // Inicializamos el contador

Medico::Medico(const std::string& nombre, const std::string& especialidad, bool disponibilidad)
    : nombre(nombre), especialidad(especialidad), disponibilidad(disponibilidad) {
    this->id = generarID();//Generar ID una vez todo es valido
}

void Medico::mostrarMedico() const {
    std::cout << "ID: " << id
        << ", Nombre: " << nombre
        << ", Especialidad: " << especialidad
        << ", Disponibilidad: " << (disponibilidad ? "Si" : "No")
        << std::endl;
}

bool Medico::validarNombre(const std::string& nombre) {
    return !nombre.empty();
}

bool Medico::validarEspecialidad(const std::string& especialidad) {
    return !especialidad.empty();
}

int Medico::generarID() {
    return contadorID++;
}