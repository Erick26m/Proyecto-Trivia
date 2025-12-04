//
// Created by munoz on 03/12/2025.
//

#ifndef A01715444_PROYECTO_TRIVIA_TRIVIA_H
#define A01715444_PROYECTO_TRIVIA_TRIVIA_H
#include <vector>
#include <string>
#include "Pregunta.h"
#include "Jugador.h"
using namespace std;

class Trivia {
private:
    string titulo;
    vector<pregunta*> preguntas;
    Jugador* jugador;

public:
    Trivia(string t, Jugador* j);
    ~Trivia();

    void agregarPregunta(pregunta* p);
    void iniciar();
};

#endif
