#include "Retangulo.h"
#include <iostream>

Retangulo::Retangulo() : FiguraGeometrica(2)
{
    nome = "Retângulo";
}

float Retangulo::calculaArea()
{
    return (base * altura);
}

void Retangulo::leAtributosArea()
{
    std::cin >> base;
    std::cin >> altura;
}
