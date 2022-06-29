#include <iostream>
#include "Insumo.h"
#include "Local.h"
#include "Vacina.h"
#include "Medicamento.h"
#include "EPI.h"
#include <string>

using namespace std;

int main()
{
    string nome, dt, fab, tipoVacina, tipoEPI, dosagem, adm, disp, desc;
    int quant, dose, intervalo;
    float valor;
    Local loc;
    Insumo *in, *in2;

    for(int i = 1 ; i < 4; i++)
    {
        getline(cin, nome);
        cin >> quant;
        cin >> valor;
        cin.ignore();
        getline(cin, dt);
        getline(cin, fab);

        switch (i)
        {
            case 1:
                getline(cin, tipoVacina);
                cin >> dose;
                cin >> intervalo;
                cin.ignore();
                in = new Vacina(nome, dt, fab, quant, valor, 1, tipoVacina, dose, intervalo);
                in2 = new Vacina(nome, dt, fab, quant, valor, 1, tipoVacina, dose, intervalo);
                loc.addInsumoArr(in, 0);
                loc.addInsumoVec(in2);
                break;
            case 2:
                getline(cin, dosagem);
                getline(cin, adm);
                getline(cin, disp);
                in = new Medicamento(nome, dt, fab, quant, valor, 2, dosagem, adm, disp);
                in2 = new Medicamento(nome, dt, fab, quant, valor, 2, dosagem, adm, disp);
                loc.addInsumoArr(in, 1);
                loc.addInsumoVec(in2);
                break;
            case 3:
                getline(cin, tipoEPI);
                getline(cin, desc);
                in = new EPI(nome, dt, fab, quant, valor, 3, tipoEPI, desc);
                in2 = new EPI(nome, dt, fab, quant, valor, 3, tipoEPI, desc);
                loc.addInsumoArr(in, 2);
                loc.addInsumoVec(in2);
                break;
        }
    }

    return 0;
}
