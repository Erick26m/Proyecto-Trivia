//
// Created by munoz on 03/12/2025.
//

#include "Jugador.h"

Jugador::Jugador(string n) : nombre(n), puntuacion(0) {}

void Jugador::sumarPuntos(int p) {
    puntuacion += p;
}

void Jugador::reset() {
    puntuacion = 0;
}

int Jugador::getPuntuacion() const {
    return puntuacion;
}

string Jugador::getNombre() const {
    return nombre;
}
