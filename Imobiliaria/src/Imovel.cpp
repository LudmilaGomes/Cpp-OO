#include "Imovel.h"
#include <iostream>

using namespace std;

Imovel::Imovel()
{
    //ctor
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
