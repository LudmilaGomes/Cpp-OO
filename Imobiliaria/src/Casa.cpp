#include "Casa.h"
#include "Imovel.h"
using namespace std;
#include <iostream>

Casa::Casa() : Imovel(1)
{
    nome = "Casa";
}

void Casa::exibeAtributos()
{
    Imovel::exibeAtributos();
    cout << quantPavimentos << " pavimentos, " << quantQuartos << " quartos, " << areaTerreno << "m2 de area de terreno e " << areaConstruida << "m2 de área construída. R$ " << valor << endl;
}

void Casa::lerAtributos()
{
    Imovel::lerAtributos();
    cin >> quantPavimentos;
    cin >> quantQuartos;
    cin >> areaTerreno;
    cin >> areaConstruida;
}
