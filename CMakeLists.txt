cmake_minimum_required(VERSION 3.20)
project(trabalho1)

set(CMAKE_CXX_STANDARD 14)

add_executable(trabalho1 main.cpp classes/carruagem.cpp classes/carruagem.h classes/Aeroporto.cpp classes/Aeroporto.h
        classes/bagagem.cpp classes/bagagem.h classes/Aviao.cpp classes/Aviao.h classes/Passageiro.cpp classes/Passageiro.h
        classes/LocalDeTransporte.cpp classes/LocalDeTransporte.h classes/Data.cpp classes/Data.h classes/Manutencao.cpp classes/Manutencao.h classes/Voo.cpp classes/Voo.h)
