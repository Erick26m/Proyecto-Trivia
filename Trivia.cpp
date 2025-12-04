//
// Created by munoz on 03/12/2025.
//
#include "Trivia.h"
#include <iostream>
using namespace std;

Trivia::Trivia(string t, Jugador* j)
: titulo(t), jugador(j) {}

Trivia::~Trivia() {
    for (auto p : preguntas) delete p;
}

void Trivia::agregarPregunta(pregunta* p) {
    preguntas.push_back(p);
}

void Trivia::iniciar() {
    cout << titulo << "\n";
    jugador->reset();

    for (auto p : preguntas) {
        p->mostrar();
        if (p->validar()) {
            cout << "Correcto +" << p->getPuntos() << " puntos\n";
            jugador->sumarPuntos(p->getPuntos());
        } else {
            cout << "Incorrecto\n";
        }
    }

    cout << "Puntuacion final de " << jugador->getNombre()
         << ": " << jugador->getPuntuacion() << "\n";
}