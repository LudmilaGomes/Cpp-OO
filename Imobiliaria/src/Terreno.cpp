#include "Terreno.h"
#include "Imovel.h"
#include <iostream>

using namespace std;

Terreno::Terreno() : Imovel(3)
{
    nome = "Terreno";
}

void Terreno::exibeAtributos()
{
    Imovel::exibeAtributos();
    cout << areaTer << "m2 de �rea de terreno. R$ " << valor << ".\n";
}

void Terreno::lerAtributos()
{
    Imovel::lerAtributos();
    cin >> areaTer;
}
