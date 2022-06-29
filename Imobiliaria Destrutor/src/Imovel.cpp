#include "Imovel.h"
#include <string>
#include <iostream>

using namespace std;

Imovel::Imovel()
{
    //ctor
}

Imovel::~Imovel()
{
    //ctor
    cout << "Deletando Imovel\n";
}

Imovel::Imovel(int tipo)
{
    tipoImovel = tipo;
}

void Imovel::exibeAtributos()
{
    cout << nome << " para " << disponibilidade << ". ";
}

void Imovel::lerAtributos()
{
    //cin >> tipoImovel;
    cin >> valor;
    cin.ignore();
    getline(cin, disponibilidade);
}

std::string Imovel::getNome()
{
    return nome;
}

std::string Imovel::getDisponibilidade()
{
    return disponibilidade;
}
