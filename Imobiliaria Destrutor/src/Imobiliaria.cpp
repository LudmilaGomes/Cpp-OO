#include "Imobiliaria.h"
#include <iostream>

using namespace std;

Imobiliaria::Imobiliaria()
{
    //ctor
}

Imobiliaria::~Imobiliaria()
{
    cout << "Deletando Imobiliária\n";
    for(int i = 0; i < imoveis.size(); i++)
    {
        delete imoveis[i];
    }
    imoveis.clear();
}

void Imobiliaria::addImovel(Imovel *imovel)
{
    imoveis.push_back(imovel);
}

void Imobiliaria::buscaImovel(std::string busca)
{
    for(int i = 0; i < imoveis.size(); i++)
    {
        if(imoveis[i]->getNome().find(busca) != string::npos || imoveis[i]->getDisponibilidade().find(busca) != string::npos)
        {
            imoveis[i]->exibeAtributos();
        }
    }
}

void Imobiliaria::exibeImoveis()
{
    for(int i = 0; i < imoveis.size(); i++)
    {
        cout << "Imovel " << i + 1 << endl;
        imoveis[i]->exibeAtributos();
    }
}
