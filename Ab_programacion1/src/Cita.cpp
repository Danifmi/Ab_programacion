#include "Cita.h"

//Inicializamos contador 
int Cita::contadorID = 1;

// Constructor para inicializar los datos básicos de una cita
Cita::Cita(int pacienteID, int medicoID, const std::string& fechaCita, int urgencia)
    : pacienteID(pacienteID), medicoID(medicoID), fechaCita(fechaCita), urgencia(urgencia) {
    this->id = generarID(); //Generar ID una vez todo es valido
}

// Función para mostrar la información de la cita
void Cita::mostrarCita() const {
    std::cout << "ID de la cita: " << id
        << ", Paciente ID: " << pacienteID
        << ", Medico ID: " << medicoID
        << ", Fecha: " << fechaCita
        << ", Urgencia: " << urgencia << std::endl;
}


//Validar formatos
bool Cita::validarFecha(const std::string& fecha) {
    if (fecha.size() != 10) return false; // Verificar longitud
    if (fecha[2] != '-' || fecha[5] != '-') return false; // Verificar separadores

    // Verificar que todos los caracteres, excepto los guiones, sean dígitos
    for (size_t i = 0; i < fecha.size(); ++i) {
        if ((i != 2 && i != 5) && !isdigit(fecha[i])) return false;
    }

    return true;
}
bool Cita::validarUrgencia(int urgencia) {
    return urgencia >= 1 && urgencia <= 5;
}

bool Cita::validarPacienteID(int idPaciente, const std::map<int, Paciente>& pacientes) {
    // Verifica si el ID del paciente existe en el mapa
    return pacientes.find(idPaciente) != pacientes.end();
}

bool Cita::validarMedicoID(int idMedico, const std::unordered_map<int, Medico>& medicos) {
    // Verifica si el ID del médico existe en el mapa
    return medicos.find(idMedico) != medicos.end();
}

int Cita::generarID() {
    return contadorID++;
}