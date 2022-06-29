#include <iostream>
#include "Trabalhador.h"
#include "TrabalhadorAssalariado.h"
#include "TrabalhadorPorHora.h"
#include <string>

using namespace std;

int main()
{
    TrabalhadorAssalariado tAssalariado;
    TrabalhadorPorHora tPorHora;

    int numeroTrabalhadores;
    cin >> numeroTrabalhadores;

    while(numeroTrabalhadores--)
    {
        int tipoTrabalhador;
        cin >> tipoTrabalhador;
        cin.ignore();

        if(tipoTrabalhador == 1)
        {
            string nome;
            float salario;

            getline(cin, nome);
            cin >> salario;

            tAssalariado.setNome(nome);
            tAssalariado.setSalario(salario);

            cout << tAssalariado.getNome() << " - Semanal: R$ " << tAssalariado.calculaPagamentoSemanal()<< " - Mensal: R$ "<< tAssalariado.getSalario()<< endl;
        }
        else
        {
            string nome;
            int valorPorHora, horasSemanais;

            getline(cin, nome);
            cin >> valorPorHora;
            cin >> horasSemanais;

            tPorHora = TrabalhadorPorHora(valorPorHora);
            tPorHora.setNome(nome);
            //tPorHora = TrabalhadorPorHora(valorPorHora);
            /// ao declarar a instrução do construtor logo depois do 'tPorHora.setNome(nome);', o método setNome() não conseguiu armazenar o atributo nome.

            cout << tPorHora.getNome() << " - Semanal: R$ " << tPorHora.calculaPagamentoSemanal(horasSemanais) << " - Mensal: R$ " << tPorHora.getSalario() << endl;
        }
    }

    return 0;
}
