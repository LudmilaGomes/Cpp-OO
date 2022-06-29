#include "Terreno.h"
#include "Imovel.h"
#include <iostream>

using namespace std;

Terreno::Terreno() : Imovel(3)
{
    nome = "Terreno";
}

Terreno::~Terreno()
{
    cout << "Deletando Terreno\n";
    //dtor
}

void Terreno::exibeAtributos()
{
    Imovel::exibeAtributos();
    cout << areaTer << "m2 de área de terreno. R$ " << valor << ".\n";
}

void Terreno::lerAtributos()
{
    Imovel::lerAtributos();
    cin >> areaTer;
}
