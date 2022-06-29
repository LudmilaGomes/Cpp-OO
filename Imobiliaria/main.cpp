#include <iostream>
#include "Imovel.h"
#include "Casa.h"
#include "Apartamento.h"
#include "Terreno.h"
#include <string>

using namespace std;

int main()
{
    int tipo, quantImoveis;
    Apartamento ap;
    Casa casa;
    Terreno terreno;

    cin >> quantImoveis;

    for(int i = 0; i < quantImoveis; i++)
    {
        cin >> tipo;
        switch (tipo)
        {
            case 1:
                casa.lerAtributos();
                casa.exibeAtributos();
                break;
            case 2:
                ap.lerAtributos();
                ap.exibeAtributos();
                break;
            case 3:
                terreno.lerAtributos();
                terreno.exibeAtributos();
                break;
            ///default: caso em que o tipo � indefinido!
        }
    }

    return 0;
}

/*

Terreno para aluguel. 250m2 de �rea de terreno. R$ 1200.
Casa para venda. 2 pavimentos, 5 quartos, 310m2 de area de terreno e 155m2 de �rea constru�da. R$ 600000.
Apartamento para aluguel. 150m2 de �rea, 3 quartos, 12 andar(es), 300 de condom�nio, 1 vaga(s) de garagem. R$ 1500.

Terreno para aluguel. 250m2 de �rea de terreno. R$ 1200.
Casa para venda. 2 pavimentos, 5 quartos, 310m2 de �rea de terreno e 155m2 de �rea constru�da. R$ 600000.
Apartamento para aluguel. 150m2 de �rea, 3 quartos, 12 andar(es), 300 de condom�nio, 1 vaga(s) de garagem. R$ 1500.

*/
