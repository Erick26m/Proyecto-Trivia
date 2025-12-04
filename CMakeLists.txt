cmake_minimum_required(VERSION 4.0)
project(A01715444_PROYECTO_TRIVIA)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(A01715444_PROYECTO_TRIVIA
        Jugador.cpp
        Jugador.h
        main.cpp
        main.h
        pregunta.cpp
        pregunta.h
        PreguntaOpcionMultiple.cpp
        PreguntaOpcionMultiple.h
        PreguntaVOF.cpp
        PreguntaVOF.h
        Trivia.cpp
        Trivia.h)
