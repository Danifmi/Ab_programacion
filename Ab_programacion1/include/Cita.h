#ifndef CITA_H
#define CITA_H

#include <string>

class Cita {
private:
    int pacienteID;          // ID del paciente relacionado
    int medicoID;            // ID del médico asignado
    std::string fecha;       // Fecha de la cita (formato DD-MM-YYYY)
    int urgencia;            // Nivel de urgencia (1 = baja, 5 = alta)

public:
    // Constructor para inicializar los datos básicos de una cita
    Cita(int pacienteID, int medicoID, const std::string& fecha, int urgencia);

    // Función para mostrar la información de la cita
    void mostrarCita() const;

    // Getters
    int getPacienteID() const;
    int getMedicoID() const;
    std::string getFecha() const;
    int getUrgencia() const;
};

#endif // CITA_H
