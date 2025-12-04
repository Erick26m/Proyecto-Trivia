//
// Created by munoz on 03/12/2025.
//
#include "PreguntaVOF.h"
#include <iostream>
using namespace std;

PreguntaVOF::PreguntaVOF(string e, int p, bool rc)
: pregunta(e, p), respuestaCorrecta(rc) {}

void PreguntaVOF::mostrar() {
    cout << enunciado << " (V/F): ";
}

bool PreguntaVOF::validar() {
    char r;
    cin >> r;
    bool resp = (r == 'V' || r == 'v');
    return resp == respuestaCorrecta;
}
