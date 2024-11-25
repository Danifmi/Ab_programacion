#ifndef CITA_H
#define CITA_H

#include <string>

// Clase que representa una cita médica.
class Cita {
private:
    int pacienteID;          // ID del paciente relacionado.
    int medicoID;            // ID del médico asignado.
    std::string fecha;       // Fecha de la cita (formato DD-MM-YYYY).
    int urgencia;            // Nivel de urgencia (1 = baja, 5 = alta).

public:
    // Constructor básico para inicializar una cita médica.
    Cita(int pacienteID, int medicoID, const std::string& fecha, int urgencia);
};

#endif 
