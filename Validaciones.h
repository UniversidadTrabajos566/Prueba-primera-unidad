/*************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * ALUMNO:  Dominguez Pablo, Egas Steven, Santos Estaban
 * FECHA CREACION: Domingo,  1 de diciembre de 2024
 * FECHA MODIFICACION: Domingo,  11 de diciembre de 2024
 * Asignatura:Estructura de datos
 * Nivel: TERCERO     NRC: 1992
 *************************/
#ifndef VALIDACIONES_H
#define VALIDACIONES_H

#include <iostream>
#include <string>
#include "Fecha.h"
#include "Autor.h"
#include "ListaDobleCircular.h"

using namespace std;

// Declaración de las funciones de validación
int leerEntero(const string& mensaje);
string leerString(const string& mensaje);
Fecha leerFecha();
Autor ingresarAutor();
Libro ingresarLibro(ListaDobleCircular<Autor>& listaAutores);

#endif // VALIDACIONES_H