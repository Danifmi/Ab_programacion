#ifndef CITA_H
#define CITA_H

#include <string>
#include<iostream>
#include<vector>
#include <map>
#include <unordered_map>
#include "Paciente.h"
#include "Medico.h"

class Cita {
private:
    int id;                 //ID de la cita
    int pacienteID;          // ID del paciente relacionado
    int medicoID;            // ID del médico asignado
    std::string fechaCita;       // Fecha de la cita (formato DD-MM-YYYY)
    int urgencia;            // Nivel de urgencia (1 = baja, 5 = alta)
    static int contadorID;   //Contador estático para generar ID's únicos

public:
    // Constructor predeterminado
    Cita() : id(0), pacienteID(0), medicoID(0), fechaCita(""), urgencia(0) {}

    //Constructor parametrizado
    Cita(int pacienteID, int medicoID, const std::string& fechaCita, int urgencia);

    // Función para mostrar la información de la cita
    void mostrarCita() const;

    // Getters
    int getID() const { return id; }
    int getPacienteID() const { return pacienteID; }
    int getMedicoID() const { return medicoID; };

    //Métodos de validación
    bool validarFecha(const std::string& fecha);
    bool validarUrgencia(int urgencia);
    bool validarPacienteID(int idPaciente, const std::map<int, Paciente>& pacientes);
    bool validarMedicoID(int idMedico, const std::unordered_map<int, Medico>& medicos);

    //Métodos para modificar cita
    void setPacienteID(int nuevoPacienteID) { pacienteID = nuevoPacienteID; }
    void setMedicoID(int nuevoMedicoID) { medicoID = nuevoMedicoID; }
    void setFecha(const std::string& nuevaFecha) { fechaCita = nuevaFecha; }
    void setUrgencia(int nuevaUrgencia) { urgencia = nuevaUrgencia; }

    //Método para generar un ID único
    static int generarID();

};

#endif // CITA_H
