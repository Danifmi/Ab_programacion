#include <iostream>
#include "Paciente.h"
#include "Medico.h"
#include "Cita.h"

int main() {
    // Crear un paciente
    Paciente paciente1("Juan Pérez", 1, "01-01-2024");
    paciente1.agregarHistorial("Diagnóstico: Gripe");

    // Mostrar información del paciente
    std::cout << "Paciente: " << paciente1.getNombre() << "\n";
    std::cout << "ID: " << paciente1.getID() << "\n";
    std::cout << "Fecha de ingreso: " << paciente1.getFechaIngreso() << "\n";

    // Crear un médico
    Medico medico1("Dra. Gómez", 101, "Pediatría", true);

    // Mostrar información del médico
    std::cout << "Médico: " << medico1.getNombre() << "\n";
    std::cout << "Especialidad: " << medico1.getEspecialidad() << "\n";
    std::cout << "Disponibilidad: " << (medico1.isDisponible() ? "Disponible" : "No disponible") << "\n";

    // Crear una cita
    Cita cita1(paciente1.getID(), medico1.getID(), "15-01-2024", 3);

    // Mostrar información de la cita
    std::cout << "Cita programada para el paciente ID: " << cita1.getPacienteID()
        << " con el médico ID: " << cita1.getMedicoID() << "\n";
    std::cout << "Fecha de la cita: " << cita1.getFecha() << "\n";
    std::cout << "Nivel de urgencia: " << cita1.getUrgencia() << "\n";

    return 0;
}
