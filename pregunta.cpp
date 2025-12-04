//
// Created by munoz on 03/12/2025.
//
#include "pregunta.h"
#include <iostream>
using namespace std;

pregunta::pregunta(string e, int p) : enunciado(e), puntuacion(p) {}

void pregunta::mostrar() {
    cout << enunciado << "\n";
}
