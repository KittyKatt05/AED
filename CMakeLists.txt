cmake_minimum_required(VERSION 3.20)
project(trabalho1)

set(CMAKE_CXX_STANDARD 14)

add_executable(trabalho1 main.cpp classes/Carruagem.cpp classes/Carruagem.h classes/Aeroporto.cpp classes/Aeroporto.h
        classes/Bagagem.cpp classes/Bagagem.h classes/Aviao.cpp classes/Aviao.h classes/Passageiro.cpp classes/Passageiro.h
        classes/LocalDeTransporte.cpp classes/LocalDeTransporte.h classes/Data.cpp classes/Data.h classes/Manutencao.cpp
        classes/Manutencao.h classes/Voo.cpp classes/Voo.h classes/Hora.cpp classes/Hora.h classes/Carrinho.h
        classes/Carrinho.cpp classes)
