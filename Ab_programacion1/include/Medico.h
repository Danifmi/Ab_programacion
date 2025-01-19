#ifndef MEDICO_H
#define MEDICO_H

#include <string>
#include <iostream>

class Medico {
private:
    int id;                    // ID del m�dico
    std::string nombre;        // Nombre del m�dico
    std::string especialidad;  // Especialidad del m�dico
    bool disponibilidad;       // Disponibilidad del m�dico (true = disponible, false = no disponible)
    static int contadorID;     // Contador est�tico para asignar IDs �nicos

public:
    // Constructor predeterminado
    Medico() : id(0), nombre(""), especialidad(""), disponibilidad(false) {}

    // Constructor parametrizado
    Medico(const std::string& nombre, const std::string& especialidad, bool disponibilidad);

    // M�todo para mostrar la informaci�n del m�dico
    void mostrarMedico() const;

    int getID() const { return id; }

    //M�todos de validaci�n
    bool validarNombre(const std::string& nombre);
    bool validarEspecialidad(const std::string& especialidad);

    //M�todos para modificar un medico
    void setNombre(const std::string& nuevoNombre) { nombre = nuevoNombre; }
    void setEspecialidad(const std::string& nuevaEspecialidad) { especialidad = nuevaEspecialidad; }
    void setDisponibilidad(const bool nuevaDisponibilidad) { disponibilidad = nuevaDisponibilidad; }

    //M�todo para generar ID �nico
    static int generarID();
};

#endif
