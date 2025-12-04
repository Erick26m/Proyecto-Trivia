//
// Created by munoz on 03/12/2025.
//
#ifndef A01715444_PROYECTO_TRIVIA_MAIN_H
#define A01715444_PROYECTO_TRIVIA_MAIN_H
#include "Trivia.h"
#include "PreguntaVOF.h"
#include "PreguntaOM.h"
#include "Jugador.h"
#include <vector>

int main() {
    Jugador jugador("Erick");
    Trivia trivia("Trivia General", &jugador);

    trivia.agregarPregunta(new PreguntaVOF(
        "El Sol es una estrella", 10, true));

    trivia.agregarPregunta(new PreguntaOpcionMultiple(
        "Capital de Francia?", 20,
        {"Roma", "Madrid", "Paris", "Lisboa"},
        2));

    trivia.agregarPregunta(new PreguntaVOF(
        "La Tierra es el tercer planeta del sistema solar", 10, true));

    trivia.agregarPregunta(new PreguntaOpcionMultiple(
        "Animal mas rapido del mundo?", 15,
        {"Tigre", "Guepardo", "Aguila", "Leon"},
        1));

    trivia.agregarPregunta(new PreguntaVOF(
        "El oceano Pacifico es el mas grande", 10, true));

    trivia.agregarPregunta(new PreguntaOpcionMultiple(
        "Cual es el metal mas ligero?", 20,
        {"Oro", "Litio", "Mercurio", "Cobre"},
        1));

    trivia.iniciar();
    return 0;
}


class main {
};


#endif //A01715444_PROYECTO_TRIVIA_MAIN_H