#include "Casa.h"
#include "Imovel.h"
#include <iostream>

using namespace std;

Casa::Casa() : Imovel(1)
{
    nome = "Casa";
}

Casa::~Casa()
{
    cout << "Deletando Casa\n";
}

void Casa::exibeAtributos()
{
    Imovel::exibeAtributos();
    cout << quantPavimentos << " pavimentos, " << quantQuartos << " quartos, " << areaTerreno << "m2 de �rea de terreno e " << areaConstruida << "m2 de �rea constru�da. R$ " << valor << "." << endl;
}

void Casa::lerAtributos()
{
    Imovel::lerAtributos();
    cin >> quantPavimentos;
    cin >> quantQuartos;
    cin >> areaTerreno;
    cin >> areaConstruida;
}
