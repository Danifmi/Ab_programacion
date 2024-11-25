#ifndef CITA_H
#define CITA_H

#include <string>

// Clase que representa una cita m�dica.
class Cita {
private:
    int pacienteID;          // ID del paciente relacionado.
    int medicoID;            // ID del m�dico asignado.
    std::string fecha;       // Fecha de la cita (formato DD-MM-YYYY).
    int urgencia;            // Nivel de urgencia (1 = baja, 5 = alta).

public:
    // Constructor b�sico para inicializar una cita m�dica.
    Cita(int pacienteID, int medicoID, const std::string& fecha, int urgencia);
};

#endif 
