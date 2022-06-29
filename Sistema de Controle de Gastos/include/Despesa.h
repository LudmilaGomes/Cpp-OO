#ifndef DESPESA_H
#define DESPESA_H
#include <string>

class Despesa
{
    public:
        Despesa();

        void setNome(std::string n);
        void setValor(float v);
        void setTipoDeGasto(std::string t);

        std::string getNome();
        float getValor();
        std::string getTipoDeGasto();

    private:
        std::string nome;
        float valor;
        std::string tipoDeGasto;
};

#endif // DESPESA_H
