// Paciente.cpp
#include "Paciente.h"

int Paciente::contadorID = 1; //Inicializamos el contador

//Constructor parametrizado
Paciente::Paciente(const std::string& nombre, const std::string& fechaIngreso)
    : nombre(nombre), fechaIngreso(fechaIngreso) {
    this->id = generarID();//Generar ID una vez todo es valido
}


void Paciente::mostrarPaciente() const {
    std::cout << "ID: " << id << ", Nombre: " << nombre
        << ", Fecha de Ingreso: " << fechaIngreso << std::endl;
}

//Validar el formato 
bool Paciente::validarFecha(const std::string& fecha) {
    if (fecha.size() != 10) return false; // Verificar longitud
    if (fecha[2] != '-' || fecha[5] != '-') return false; // Verificar separadores

    // Verificar que todos los caracteres, excepto los guiones, sean dígitos
    for (size_t i = 0; i < fecha.size(); ++i) {
        if ((i != 2 && i != 5) && !isdigit(fecha[i])) return false;
    }

    return true;
}

bool Paciente::validarNombre(const std::string& nombre) {
    return !nombre.empty();
}

int Paciente::generarID() {
    return contadorID++;
}
