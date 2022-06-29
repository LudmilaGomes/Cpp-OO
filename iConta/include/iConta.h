#ifndef ICONTA_H
#define ICONTA_H

class iConta
{
    public:
        iConta();
        virtual void sacar(double valor) = 0;           // possui o 'virtual' na frente; possui ' = 0;' -> é um método abstrato;
        virtual void depositar(double valor) = 0;       // possui o 'virtual' na frente; possui ' = 0;' -> é um método abstrato;
        virtual double saldoTotalDisponivel() = 0;        // possui o 'virtual' na frente; possui ' = 0;' -> é um método abstrato;

    protected:

    private:
};

#endif // ICONTA_H
