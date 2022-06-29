#include "Data3.h"
#include <iostream>
#include <string>

Data3::Data3()
{
    //ctor
}

Data3::Data3(int d, int m, int a)
{
    if(m < 0 || m > 12)
    {
        mes = 1;
        std::cout << "Atributo mês inválido" << std::endl;
    }
    else
        mes = m;

    if(d < 0 || d > getDiasMes(mes) || getDiasMes(mes) == 0 )
    {
        dia = 1;
        std::cout << "Atributo dia inválido" << std::endl;
    }
    else
        dia = d;

    ano = a;
}

void Data3::avancarDia()
{
    if(dia + 1 > getDiasMes(mes))
    {
        dia = 1;
        if(mes == 12)
        {
            mes = 1;
            ano = ano + 1;
        }
        else
            mes = mes + 1;
    }
    else
        dia = dia + 1;
}

void Data3::setDia(int d)
{
    dia = d;
}

void Data3::setMes(int m)
{
    mes = m;
}

void Data3::setAno(int a)
{
    ano = a;
}

int Data3::getDia2()
{
    return dia;
}

int Data3::getMes2()
{
    return mes;
}

std::string Data3::getDia()
{
    if(dia < 10)
    {
        return "0" + std::to_string(dia);
    }
    else
        return std::to_string(dia);
}

std::string Data3::getMes()
{
    if(mes < 10)
    {
        return "0" + std::to_string(mes);
    }
    else
        return std::to_string(mes);
}

std::string Data3::getAno()
{
    return std::to_string(ano);
}

int Data3::getDiasMes(int m)
{
    switch (m)
    {
        case 1:         // janeiro
            return 31;
            break;
        case 2:         // fevereiro
            return 28;
            break;
        case 3:         // março
            return 31;
            break;
        case 4:         // abril
            return 30;
            break;
        case 5:         // maio
            return 31;
            break;
        case 6:         // junho
            return 30;
            break;
        case 7:         // julho
            return 31;
            break;
        case 8:         // agosto
            return 31;
            break;
        case 9:         // setembro
            return 30;
            break;
        case 10:         // outubro
            return 31;
            break;
        case 11:         // novembro
            return 30;
            break;
        case 12:         // dezembro
            return 31;
            break;
        default:
            return 0;
    }
}
