#include "Cita.h"

// Constructor: inicializa los datos básicos de una cita.
Cita::Cita(int pacienteID, int medicoID, const std::string& fecha, int urgencia)
    : pacienteID(pacienteID), medicoID(medicoID), fecha(fecha), urgencia(urgencia) {
}
