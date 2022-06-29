#include <iostream>
#include "Pagamento.h"
#include "ControleDePagamentos.h"
#include <string>

using namespace std;

int main()
{
    int quantPagamentos;

    cin >> quantPagamentos;

    ControleDePagamentos controlePagam;
    Pagamento pagamentos;
    float valorPagamento;
    string nomeFuncionario;

    for(int i = 0; i < quantPagamentos; i++)
    {
        cin >> valorPagamento;
        cin.ignore();
        getline(cin, nomeFuncionario);

        pagamentos.setValorPagamento(valorPagamento);
        pagamentos.setNomeDoFuncionario(nomeFuncionario);

        controlePagam.setPagamento(pagamentos, i);
    }

    getline(cin, nomeFuncionario);

    bool encontrado = false;
    for(int i = 0; i < quantPagamentos; i++)
        {
            pagamentos = controlePagam.getPagamento(i);
            if(pagamentos.getNomeDoFuncionario().find(nomeFuncionario) != string::npos)
            {
                cout << pagamentos.getNomeDoFuncionario() << ": R$ " << pagamentos.getValorPagamento() << endl;
                encontrado = true;
            }
        }

    if(!encontrado)
    {
        cout << nomeFuncionario << " não encontrado(a)." << endl;
    }

    cout << "Total: R$ " << controlePagam.calculaTotalDePagamentos() << endl;

    /*

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


    */

    return 0;
}
