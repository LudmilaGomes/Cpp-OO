#include <iostream>
#include "Despesa.h"
#include "ControleDeGastos.h"
#include <string>

using namespace std;

int main()
{
    Despesa despesa;
    ControleDeGastos controle;

    int quantDespesas;
    string nome, tipoDeGasto;
    float valor;

    cin >> quantDespesas;
    cin.ignore();

    for(int i = 0; i < quantDespesas; i++)
    {
        getline(cin, nome);
        cin >> valor;
        cin.ignore();
        getline(cin, tipoDeGasto);

        despesa.setNome(nome);
        despesa.setValor(valor);
        despesa.setTipoDeGasto(tipoDeGasto);

        controle.setDespesa(despesa, i);
    }

    getline(cin, tipoDeGasto);

    if( controle.existeDespesaDoTipo(tipoDeGasto) )
    {
        for(int i = 0; i < quantDespesas; i++)
        {
            despesa = controle.getDespesa(i);
            if( despesa.getTipoDeGasto() == tipoDeGasto )
            {
                cout << despesa.getNome() << ", R$ " << despesa.getValor() << endl;
            }
        }
    }
    else
    {
        cout << "Nenhuma despesa do tipo especificado" << endl;
    }

    cout << "Total: " << controle.calculaTotalDespesas(tipoDeGasto) << "/" << controle.calculaTotalDespesas();

    return 0;
}
