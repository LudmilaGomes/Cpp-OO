#include "Circulo.h"
#include <iostream>

#define PI 3.14

Circulo::Circulo() : FiguraGeometrica(4)
{
    nome = "C�rculo";
}

float Circulo::calculaArea()
{
    return (raio * raio * PI);
}

void Circulo::leAtributosArea()
{
    std::cin >> raio;
}

