//
// Created by munoz on 03/12/2025.
//

#ifndef A01715444_PROYECTO_TRIVIA_JUGADOR_H
#define A01715444_PROYECTO_TRIVIA_JUGADOR_H

#include <string>
using namespace std;

class Jugador {
private:
    string nombre;
    int puntuacion;

public:
    Jugador(string n);
    void sumarPuntos(int p);
    void reset();

    int getPuntuacion() const;
    string getNombre() const;
};

#endif
