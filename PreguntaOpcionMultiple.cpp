//
// Created by munoz on 03/12/2025.
//

#include "PreguntaOpcionMultiple.h"
#include <iostream>
using namespace std;

PreguntaOpcionMultiple::PreguntaOpcionMultiple(string e, int p, vector<string> ops, int c)
: pregunta(e, p), opciones(ops), correcta(c) {}

void PreguntaOpcionMultiple::mostrar() {
    cout << enunciado << "\n";
    for (int i = 0; i < opciones.size(); i++) {
        cout << i + 1 << ". " << opciones[i] << "\n";
    }
    cout << "Tu respuesta: ";
}

bool PreguntaOpcionMultiple::validar() {
    int r;
    cin >> r;
    return (r - 1) == correcta;
}
