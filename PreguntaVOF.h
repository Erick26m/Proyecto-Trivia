//
// Created by munoz on 03/12/2025.
//
#ifndef A01715444_PROYECTO_TRIVIA_PREGUNTAVOF_H
#define A01715444_PROYECTO_TRIVIA_PREGUNTAVOF_H
#include "Pregunta.h"
class PreguntaVOF : public pregunta {
private:
    bool respuestaCorrecta;

public:
    PreguntaVOF(string e, int p, bool rc);
    void mostrar() override;
    bool validar() override;
};

#endif