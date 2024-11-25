#include "Medico.h"

// Constructor: inicializa los datos básicos de un médico.
Medico::Medico(const std::string& nombre, int ID, const std::string& especialidad, bool disponibilidad)
    : nombre(nombre), ID(ID), especialidad(especialidad), disponibilidad(disponibilidad) {
}
