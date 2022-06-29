#include "TrabalhadorPorHora.h"

TrabalhadorPorHora::TrabalhadorPorHora()
{
    //ctor
}

TrabalhadorPorHora::TrabalhadorPorHora(float valorPorHora)
{
    this->valorPorHora = valorPorHora;
}

float TrabalhadorPorHora::calculaPagamentoSemanal(int horasSemanais)
{
    if(horasSemanais <= 40)
    {
        salario = horasSemanais * valorPorHora * 4;
        return horasSemanais * valorPorHora;
    }
    else
    {
        int horasExcedentes = horasSemanais - 40;
        float salarioSemanal = ((horasSemanais - horasExcedentes) * valorPorHora) + (horasExcedentes * valorPorHora * 1.5);

        salario = 4 * salarioSemanal;
        return salarioSemanal;
    }
}
