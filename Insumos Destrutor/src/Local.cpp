#include "Insumo.h"
#include "Local.h"
#include <iostream>
#include <vector>
#include <string>

Local::Local()
{
    //ctor
}

Local::~Local()
{
    std::cout << "Deletando Local" << std::endl;

    for(int i = 0; i < 3; i++)
    {
        delete insumosArr[i];
    }

    for(int i = 0; i < insumosVec.size(); i++)
    {
        delete insumosVec[i];
    }
}

void Local::addInsumoArr(Insumo *in, int index)
{
    insumosArr[index] = in;
}

void Local::addInsumoVec(Insumo *in)
{
    insumosVec.push_back(in);
}
