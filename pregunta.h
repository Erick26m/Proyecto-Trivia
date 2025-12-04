//
// Created by munoz on 03/12/2025.
//

#ifndef A01715444_PROYECTO_TRIVIA_PREGUNTA_H
#define A01715444_PROYECTO_TRIVIA_PREGUNTA_H
#include <string>
using namespace std;

class pregunta {
protected:
    string enunciado;
    int puntuacion;

public:
    pregunta(string e, int p);
    virtual ~pregunta() {}

    virtual void mostrar();
    virtual bool validar() = 0;

    int getPuntos() const { return puntuacion; }
};

#endif