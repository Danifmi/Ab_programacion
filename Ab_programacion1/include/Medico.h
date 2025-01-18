#ifndef MEDICO_H
#define MEDICO_H

#include <string>


class Medico {
private:
    int id;                    // ID del médico
    std::string nombre;        // Nombre del médico
    std::string especialidad;  // Especialidad del médico
    bool disponibilidad;       // Disponibilidad del médico (true = disponible, false = no disponible)
    static int contadorID;     // Contador estático para asignar IDs únicos

public:
    // Constructor predeterminado
    Medico() : id(contadorID++), nombre(""), especialidad(""), disponibilidad(false) {}

    // Constructor parametrizado
    Medico(const std::string& nombre, const std::string& especialidad, bool disponibilidad);

    // Método para mostrar la información del médico
    void mostrarMedico() const;

    int getID() const { return id; }
};

#endif
