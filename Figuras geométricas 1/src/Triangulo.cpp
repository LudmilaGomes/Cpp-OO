#include "Triangulo.h"
#include <iostream>

Triangulo::Triangulo() : FiguraGeometrica(3)
{
    nome = "Triângulo";
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
