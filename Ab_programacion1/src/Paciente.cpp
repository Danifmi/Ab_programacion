#include "Paciente.h"

// Constructor: inicializa los datos b�sicos de un paciente.
Paciente::Paciente(const std::string& nombre, int ID, const std::string& fechaIngreso)
    : nombre(nombre), ID(ID), fechaIngreso(fechaIngreso) {
}
