#ifndef IMOVEL_H
#define IMOVEL_H
#include <string>

class Imovel
{
    public:
        Imovel();
        Imovel(int tipo);
        virtual ~Imovel();

        virtual void exibeAtributos();
        virtual void lerAtributos();

        std::string getNome();
        std::string getDisponibilidade();

    protected:
        std::string nome;
        float valor;
        int tipoImovel;
        std::string disponibilidade;

    private:
};

#endif // IMOVEL_H
