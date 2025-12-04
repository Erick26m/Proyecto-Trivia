//
// Created by munoz on 03/12/2025.
//
#ifndef A01715444_PROYECTO_TRIVIA_PREGUNTAOpcionMultiple_H
#define A01715444_PROYECTO_TRIVIA_PREGUNTAOpcionMultiple_H
#include "Pregunta.h"
#include <vector>

class PreguntaOpcionMultiple : public pregunta {
private:
    vector<string> opciones;
    int correcta;

public:
    PreguntaOpcionMultiple(string e, int p, vector<string> ops, int c);
    void mostrar() override;
    bool validar() override;
};
#endif