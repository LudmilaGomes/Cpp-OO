#include <iostream>
#include "iConta.h"
#include "Conta.h"
#include "ContaEspecial.h"

using namespace std;

int main()
{
    double valorDeposito, valorSaque;
    Conta conta1;
    ContaEspecial conta2;

    for(int i = 0; i < 2; i++)
    {
        string nome;
        int numero;
        double salario;

        getline(cin, nome);
        cin >> numero;
        cin >> salario;
        cin >> valorDeposito;
        cin >> valorSaque;
        cin.ignore();

        if(i == 0)
        {
            conta1 = Conta(nome, numero, salario);
            conta1.depositar(valorDeposito);
            conta1.sacar(valorSaque);
        }
        else
        {
            conta2 = ContaEspecial(nome, numero, salario);
            conta2.depositar(valorDeposito);
            conta2.sacar(valorSaque);
        }

    }

    cout << conta1.getNomeCliente() << ", cc: " << conta1.getNumeroConta() << ", salário " << conta1.getSalarioMensal() << ", saldo total disponível: R$ " << conta1.saldoTotalDisponivel() << endl;
    cout << conta2.getNomeCliente() << ", cc: " << conta2.getNumeroConta() << ", salário " << conta2.getSalarioMensal() << ", saldo total disponível: R$ " << conta2.saldoTotalDisponivel() << endl;
    // João Pedro, cc: 1234, salário 2000, saldo total disponível: R$ 4400
    // Maria Teresa, cc: 1235, salário 5000, saldo total disponível: R$ 15525

    return 0;
}
