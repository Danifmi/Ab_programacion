#ifndef MEDICO_H
#define MEDICO_H

#include <string>

// Clase que representa a un m�dico del hospital.
class Medico {
private:
    std::string nombre;       // Nombre completo del m�dico.
    int ID;                   // Identificaci�n �nica del m�dico.
    std::string especialidad; // Especialidad m�dica del doctor.
    bool disponibilidad;      // Estado de disponibilidad (true = disponible).

public:
    // Constructor b�sico para inicializar un m�dico.
    Medico(const std::string& nombre, int ID, const std::string& especialidad, bool disponibilidad);
};

#endif // MEDICO_H
