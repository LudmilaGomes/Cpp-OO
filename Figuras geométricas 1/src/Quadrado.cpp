#include "Quadrado.h"
#include <iostream>

Quadrado::Quadrado() : FiguraGeometrica(1)
{
    nome = "Quadrado";
}

float Quadrado::calculaArea()
{
    return (lado * lado);
}

void Quadrado::leAtributosArea()
{
    std::cin >> lado;
}
