#include <iostream>
#include "Data3.h"
#include <string>

using namespace std;

int main()
{
    Data3 dat;
    int d, m, a, quantDias; // dia, mes e ano respectivamente;

    cin >> d;
    cin >> m;
    cin >> a;
    cin >> quantDias;

    dat = Data3(d, m, a); // Passagem de valores pelo construtor

    for(int i = 0; i < quantDias; i++)
    {
        dat.avancarDia();
    }

    if( dat.getDia2() != 0 || dat.getMes2() != 0 )
        cout << dat.getDia() << "/" << dat.getMes() << "/" << dat.getAno() << endl;

    return 0;
}

/*

sendo quatro (abril, junho, setembro e novembro) com 30 dias,
sete (janeiro, março, maio, julho, agosto, outubro e dezembro) com 31 dias e o único mês,
fevereiro, com 28 dias.

*/
