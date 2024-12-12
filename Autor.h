/*************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * ALUMNO:  Dominguez Pablo, Egas Steven, Santos Estaban
 * FECHA CREACION: Domingo,  1 de diciembre de 2024
 * FECHA MODIFICACION: Domingo,  11 de diciembre de 2024
 * Asignatura:Estructura de datos
 * Nivel: TERCERO     NRC: 1992
 *************************/

#ifndef AUTOR_H
#define AUTOR_H

#include <iostream>
#include "Fecha.h"

using namespace std;

class Autor
{
private:
    string cedula;
    string nombre;
    string apellido;
    string nacionalidad;
    Fecha fechaNacimiento;

public:
    Autor() {}

    Autor(string cedula, string nombre, string apellido, Fecha fechaNacimiento)
        : cedula(cedula), nombre(nombre), apellido(apellido), fechaNacimiento(fechaNacimiento) {}

    Autor(string cedula, string nombre, string apellido,string nacionalidad,  Fecha fechaNacimiento)
        : cedula(cedula), nombre(nombre), apellido(apellido),nacionalidad(nacionalidad), fechaNacimiento(fechaNacimiento) {}

    string getCedula() const { return cedula; }

    void imprimirAutor() const
    {
        cout << "Cedula: " << cedula << ", Nombre: " << nombre << " " << apellido <<", Nacionalidad: "<<nacionalidad<< ", Fecha de nacimiento: ";
        fechaNacimiento.imprimirFecha();
    }

    void imprimirAutorB() const
    {
        cout << "Autor:" << nombre << " " << apellido <<", Cedula del autor: " << cedula;
    }

    bool operator==(const Autor &otro) const
    {
        return this->cedula == otro.cedula;
    }

    void setCedula(const string &cedula_) { cedula = cedula_; }

    string getNombre() const { return nombre; }
    void setNombre(const string &nombre_) { nombre = nombre_; }

    string getApellido() const { return apellido; }
    void setApellido(const string &apellido_) { apellido = apellido_; }

    Fecha getFechaNacimiento() const { return fechaNacimiento; }
    void setFechaNacimiento(const Fecha &fechaNacimiento_) { fechaNacimiento = fechaNacimiento_; }

    string getNacionalidad() const { return nacionalidad; }
    void setNacionalidad(const string &nacionalidad_) { nacionalidad = nacionalidad_; }
};

#endif // AUTOR_H