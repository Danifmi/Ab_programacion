#ifndef PACIENTE_H
#define PACIENTE_H

#include <string>
#include <iostream>

class Paciente {
private:
    int id;                           // ID del paciente
    std::string nombre;               // Nombre del paciente
    std::string fechaIngreso;         // Fecha de ingreso
    static int contadorID;            // Contador estático para asignar IDs únicos

public:
    // Constructor predeterminado
    Paciente() : id(0), nombre(""), fechaIngreso("") {}

    // Constructor parametrizado
    Paciente(const std::string& nombre, const std::string& fechaIngreso);


    // Método para mostrar la información del paciente
    void mostrarPaciente() const;

    // Getter para el ID
    int getID() const { return id; }

    //Métodos de validación 
    bool validarFecha(const std::string& fecha);
    bool validarNombre(const std::string& nombre);

    //Métodos para modificar un paciente
    void setNombre(const std::string& nuevoNombre) { nombre = nuevoNombre; }
    void setFechaIngreso(const std::string& nuevaFecha) { fechaIngreso = nuevaFecha; }

    //Método para generar ID único
    static int generarID();
};

#endif
