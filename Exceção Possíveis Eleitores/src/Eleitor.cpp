#include "Eleitor.h"
#include <string>

Eleitor::Eleitor()
{
    //ctor
}

Eleitor::Eleitor(std::string n, int i, std::string tit)
{
    nome = n;
    idade = i;
    tituloEleitor = tit;
}

std::string Eleitor::getNome()
{
    return nome;
}

int Eleitor::getIdade()
{
    return idade;
}
