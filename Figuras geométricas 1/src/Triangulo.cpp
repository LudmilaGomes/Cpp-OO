#include "Triangulo.h"
#include <iostream>

Triangulo::Triangulo() : FiguraGeometrica(3)
{
    nome = "Tri�ngulo";
}

float Triangulo::calculaArea()
{
    return (base * altura) / 2;
}

void Triangulo::leAtributosArea()
{
    std::cin >> base;
    std::cin >> altura;
}
