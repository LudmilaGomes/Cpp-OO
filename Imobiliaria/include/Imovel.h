#ifndef IMOVEL_H
#define IMOVEL_H
#include <string>

class Imovel
{
    public:
        Imovel();
        Imovel(int tipo);

        virtual void exibeAtributos();
        virtual void lerAtributos();

    protected:
        std::string nome;
        float valor;
        int tipoImovel;
        std::string disponibilidade;

    private:
};

#endif // IMOVEL_H
