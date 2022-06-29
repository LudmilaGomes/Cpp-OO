#include <iostream>
#include "FiguraGeometrica.h"
#include "Triangulo.h"
#include "Quadrado.h"
#include "Retangulo.h"
#include "Circulo.h"

using namespace std;

int main()
{
    Circulo circ;
    Triangulo triang;
    Retangulo retang;
    Quadrado quadr;

    int tipoFigura;

    while(1)
    {
        cin >> tipoFigura;

        if(tipoFigura == 0)
        {
            break;
        }

        switch (tipoFigura)
        {
            case 1:
                quadr.leAtributosArea();
                cout << quadr.getNome() << " de área " << quadr.calculaArea() << endl;
                break;

            case 2:
                retang.leAtributosArea();
                cout << retang.getNome() << " de área " << retang.calculaArea() << endl;
                break;

            case 3:
                triang.leAtributosArea();
                cout << triang.getNome() << " de área " << triang.calculaArea() << endl;
                break;

            case 4:
                circ.leAtributosArea();
                cout << circ.getNome() << " de área " << circ.calculaArea() << endl;
                break;
        }
    }

    return 0;
}
