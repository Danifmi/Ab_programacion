#ifndef MEDICO_H
#define MEDICO_H

#include <string>


class Medico {
private:
    int id;                    // ID del médico
    std::string nombre;        // Nombre del médico
    std::string especialidad;  // Especialidad del médico
    bool disponibilidad;       // Disponibilidad del médico (true = disponible, false = no disponible)

public:
    // Constructor predeterminado
    Medico() : id(0), nombre(""), especialidad(""), disponibilidad(false) {}

    // Constructor parametrizado
    Medico(int id, const std::string& nombre, const std::string& especialidad, bool disponibilidad);

    // Método para mostrar la información del médico
    void mostrarMedico() const;
};

#endif
