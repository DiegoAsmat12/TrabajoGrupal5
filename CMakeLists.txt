cmake_minimum_required(VERSION 3.26)
project(EjercicioGrupal5)

set(CMAKE_CXX_STANDARD 17)

add_executable(EjercicioGrupal5 main.cpp
        Cerebro.cpp
        Cerebro.h
        Memoria.cpp
        Memoria.h
        Infancia.cpp
        Infancia.h
        Adolescencia.cpp
        Adolescencia.h
        Adultez.cpp
        Adultez.h
        MayoriaDeEdad.cpp
        MayoriaDeEdad.h)
