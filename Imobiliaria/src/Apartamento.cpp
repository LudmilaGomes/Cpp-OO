#include "Apartamento.h"
#include "Imovel.h"
#include <iostream>

using namespace std;

Apartamento::Apartamento() : Imovel(2)
{
    nome = "Apartamento";
}

void Apartamento::exibeAtributos()
{
    Imovel::exibeAtributos();
    cout << areaAp << "m2 de �rea, " << quantQuartos << " quartos, " << andar << " andar(es), " << valorCondominio << " de condom�nio, " << quantVagas << " vaga(s) de garagem. R$ " << valor << endl;
}

void Apartamento::lerAtributos()
{
    Imovel::lerAtributos();
    cin >> areaAp;
    cin >> quantQuartos;
    cin >> andar;
    cin >> valorCondominio;
    cin >> quantVagas;
}
