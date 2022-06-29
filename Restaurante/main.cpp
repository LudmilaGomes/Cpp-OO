#include <iostream>
#include "Pedido.h"
#include "MesaDeRestaurante.h"
#include "Restaurante.h"

using namespace std;

int main()
{
    Restaurante restaurante;
    Pedido ped;

    //restaurante.zeraPedidos();

    while(1)
    {
        int numero;
        std::string descricao;
        int quantidade;
        float preco;
        int numeroMesa;

        cin >> numero;
        cin.ignore();

        if(numero < 0)
        {
            break;
        }

        getline(cin, descricao);
        cin >> quantidade;
        cin >> preco;
        cin >> numeroMesa;

        ped = Pedido(numero, descricao, quantidade, preco);
        restaurante.adicionarPedido(ped, numeroMesa);
    }

    for(int i = 0; i < 10; i++)
    {
        if( restaurante.mesaExiste(i) == 1 )
        {
            cout << "Mesa " << i << endl;
            restaurante.exibeContaFinal(i);

            cout << "\n";
        }
    }
    cout << "Total Restaurante: R$ " << restaurante.calculaTotalRestaurante();

    return 0;
}
/**

Mesa 1
101 - Batata frita - 1 - 19.99 - R$ 19.99
201 - Cerveja - 4 - 8.5 - R$ 34
Total: R$ 53.99

Total Restaurante: R$ 53.99

*/
