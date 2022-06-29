#include "Data22.h"
#include <iostream>

Data22::Data22()
{
    dia = 1;
    mes = 1;
    ano = 1;
}

void Data22::setDia(int d)
{
    dia = d;
}

void Data22::setMes(int m)
{
    mes = m;
}

void Data22::setAno(int a)
{
    ano = a;
}

int Data22::getDia()
{
    return dia;
}

int Data22::getMes()
{
    return mes;
}

int Data22::getAno()
{
    return ano;
}

void Data22::printData()
{
    // 2 de Abril de 2021
    std::cout << dia << " de ";

    switch (mes)
    {
        case 1:
            std::cout << "Janeiro";
            break;

        case 2:
            std::cout << "Fevereiro";
            break;

        case 3:
            std::cout << "Março";
            break;

        case 4:
            std::cout << "Abril";
            break;

        case 5:
            std::cout << "Maio";
            break;

        case 6:
            std::cout << "Junho";
            break;

        case 7:
            std::cout << "Julho";
            break;

        case 8:
            std::cout << "Agosto";
            break;

        case 9:
            std::cout << "Setembro";
            break;

        case 10:
            std::cout << "Outubro";
            break;

        case 11:
            std::cout << "Novembro";
            break;

        case 12:
            std::cout << "Dezembro";
            break;

        default:
            std::cout << "Indefinido";
    }

    std::cout << " de " << ano << std::endl;
}
