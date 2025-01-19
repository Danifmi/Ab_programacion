#ifndef MEDICO_H
#define MEDICO_H

#include <string>
#include <iostream>

class Medico {
private:
    int id;                    // ID del médico
    std::string nombre;        // Nombre del médico
    std::string especialidad;  // Especialidad del médico
    bool disponibilidad;       // Disponibilidad del médico (true = disponible, false = no disponible)
    static int contadorID;     // Contador estático para asignar IDs únicos

public:
    // Constructor predeterminado
    Medico() : id(0), nombre(""), especialidad(""), disponibilidad(false) {}

    // Constructor parametrizado
    Medico(const std::string& nombre, const std::string& especialidad, bool disponibilidad);

    // Método para mostrar la información del médico
    void mostrarMedico() const;

    int getID() const { return id; }

    //Métodos de validación
    bool validarNombre(const std::string& nombre);
    bool validarEspecialidad(const std::string& especialidad);

    //Métodos para modificar un medico
    void setNombre(const std::string& nuevoNombre) { nombre = nuevoNombre; }
    void setEspecialidad(const std::string& nuevaEspecialidad) { especialidad = nuevaEspecialidad; }
    void setDisponibilidad(const bool nuevaDisponibilidad) { disponibilidad = nuevaDisponibilidad; }

    //Método para generar ID único
    static int generarID();
};

#endif
