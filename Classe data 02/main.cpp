#include <iostream>
#include "Data22.h"

using namespace std;

int main()
{
    Data22 dat;
    int d, m, a;

    cin >> d;
    cin >> m;
    cin >> a;

    dat.setDia(d);
    dat.setMes(m);
    dat.setAno(a);

    dat.printData();

    return 0;
}
