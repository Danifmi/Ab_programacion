#ifndef PACIENTE_H
#define PACIENTE_H

#include <string>
#include <iostream>

class Paciente {
private:
    int id;                           // ID del paciente
    std::string nombre;               // Nombre del paciente
    std::string fechaIngreso;         // Fecha de ingreso
    static int contadorID;            // Contador est�tico para asignar IDs �nicos

public:
    // Constructor predeterminado
    Paciente() : id(0), nombre(""), fechaIngreso("") {}

    // Constructor parametrizado
    Paciente(const std::string& nombre, const std::string& fechaIngreso);


    // M�todo para mostrar la informaci�n del paciente
    void mostrarPaciente() const;

    // Getter para el ID
    int getID() const { return id; }

    //M�todos de validaci�n 
    bool validarFecha(const std::string& fecha);
    bool validarNombre(const std::string& nombre);

    //M�todos para modificar un paciente
    void setNombre(const std::string& nuevoNombre) { nombre = nuevoNombre; }
    void setFechaIngreso(const std::string& nuevaFecha) { fechaIngreso = nuevaFecha; }

    //M�todo para generar ID �nico
    static int generarID();
};

#endif
