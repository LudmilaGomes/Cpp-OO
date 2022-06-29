#ifndef CONTA_H
#define CONTA_H
#include "iConta.h"
#include <string>

class Conta : public iConta
{
    public:
        Conta();
        Conta(std::string nome, int numero, double salario);

        void setNomeCliente(std::string nome);
        void setNumeroConta(int numero);
        void setSalarioMensal(double salario);
        void setSaldo(double saldo);
        void setLimite(double limite);

        std::string getNomeCliente();
        int getNumeroConta();
        double getSalarioMensal();
        double getSaldo();
        double getLimite();

        void sacar(double valor);
        void depositar(double valor);
        double saldoTotalDisponivel();

        void definirLimite();

    protected:
        std::string nomeCliente;
        int numeroConta;
        double salarioMensal, saldo, limite;

    private:
};

#endif // CONTA_H
