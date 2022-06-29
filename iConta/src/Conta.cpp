#include "Conta.h"

Conta::Conta()
{
    //ctor
}

Conta::Conta(std::string nome, int numero, double salario)
{
    nomeCliente = nome;
    numeroConta = numero;
    salarioMensal = salario;

    saldo = 0;
    definirLimite();
}

void Conta::setNomeCliente(std::string nome)
{
    nomeCliente = nome;
}

void Conta::setNumeroConta(int numero)
{
    numeroConta = numero;
}

void Conta::setSalarioMensal(double salario)
{
    salarioMensal = salario;
}

void Conta::setSaldo(double saldo)
{
    this->saldo = saldo;
}

void Conta::setLimite(double limite)
{
    this->limite = limite;
}

std::string Conta::getNomeCliente()
{
    return nomeCliente;
}

int Conta::getNumeroConta()
{
    return numeroConta;
}

double Conta::getSalarioMensal()
{
    return salarioMensal;
}

double Conta::getSaldo()
{
    return saldo;
}

double Conta::getLimite()
{
    return limite;
}

void Conta::sacar(double valor)
{
    if(valor <= saldoTotalDisponivel())
    {
        saldo = saldo - valor;
    }
}

void Conta::depositar(double valor)
{
    saldo = saldo + valor;
}

double Conta::saldoTotalDisponivel()
{
    return saldo + limite;
}

void Conta::definirLimite()
{
    limite = 2 * salarioMensal;
}
