#include "Medico.h"

// Constructor: inicializa los datos b�sicos de un m�dico.
Medico::Medico(const std::string& nombre, int ID, const std::string& especialidad, bool disponibilidad)
    : nombre(nombre), ID(ID), especialidad(especialidad), disponibilidad(disponibilidad) {
}
