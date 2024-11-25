#ifndef MEDICO_H
#define MEDICO_H

#include <string>

// Clase que representa a un médico del hospital.
class Medico {
private:
    std::string nombre;       // Nombre completo del médico.
    int ID;                   // Identificación única del médico.
    std::string especialidad; // Especialidad médica del doctor.
    bool disponibilidad;      // Estado de disponibilidad (true = disponible).

public:
    // Constructor básico para inicializar un médico.
    Medico(const std::string& nombre, int ID, const std::string& especialidad, bool disponibilidad);
};

#endif // MEDICO_H
