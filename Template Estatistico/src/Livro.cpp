#include "Livro.h"
#include <iostream>

Livro::Livro()
{
    //ctor
}

Livro::Livro(std::string titulo, int totalPaginas)
{
    this->titulo = titulo;
    this->totalPaginas = totalPaginas;
}

Livro::~Livro()
{
    //dtor
}

int Livro::getTotal()
{
    return totalPaginas;
}

void Livro::toString()
{
    std::cout << titulo << ", páginas: " << totalPaginas << std::endl;
}
