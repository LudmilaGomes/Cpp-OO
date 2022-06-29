#include "FiguraGeometrica.h"

FiguraGeometrica::FiguraGeometrica()
{
    //ctor
}

FiguraGeometrica::FiguraGeometrica(int tipo)
{
    this->tipo = tipo;
}

std::string FiguraGeometrica::getNome()
{
    return nome;
}
