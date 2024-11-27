#include "Cita.h"
#include <iostream>

// Constructor para inicializar los datos básicos de una cita
Cita::Cita(int pacienteID, int medicoID, const std::string& fecha, int urgencia)
    : pacienteID(pacienteID), medicoID(medicoID), fecha(fecha), urgencia(urgencia) {
}

// Función para mostrar la información de la cita
void Cita::mostrarCita() const {
    std::cout << "Paciente ID: " << pacienteID << std::endl;
    std::cout << "Medico ID: " << medicoID << std::endl;
    std::cout << "Fecha: " << fecha << std::endl;
    std::cout << "Urgencia: " << urgencia << std::endl;
}

// Getters
int Cita::getPacienteID() const {
    return pacienteID;
}

int Cita::getMedicoID() const {
    return medicoID;
}

std::string Cita::getFecha() const {
    return fecha;
}

int Cita::getUrgencia() const {
    return urgencia;
}
