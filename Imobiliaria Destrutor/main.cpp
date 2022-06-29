#include <iostream>
#include "Imovel.h"
#include "Casa.h"
#include "Apartamento.h"
#include "Terreno.h"
#include "Imobiliaria.h"

using namespace std;

int main()
{
    int tipo, quantImoveis;
    Imobiliaria imobiliaria;
    Imovel *imovel;

    cin >> quantImoveis;

    for(int i = 0; i < quantImoveis; i++)
    {
        cin >> tipo;
        switch (tipo)
        {
            case 1:
                imovel = new Casa();
                break;
            case 2:
                imovel = new Apartamento();
                break;
            case 3:
                imovel = new Terreno();
                break;
        }
        imovel->lerAtributos();
        imobiliaria.addImovel(imovel);
    }

    string buscar;
    cin.ignore();
    getline(cin, buscar);
    imobiliaria.buscaImovel(buscar);

    //cout << "\n";

    //imobiliaria.exibeImoveis();

    return 0;
}

