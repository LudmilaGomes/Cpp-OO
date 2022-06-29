#ifndef PESSOA2_H
#define PESSOA2_H
#include "Endereco2.h"
#include <string>

class Pessoa2
{
    public:
        Pessoa2();
        Pessoa2(std::string n);
        Pessoa2(std::string n, Endereco2 en, std::string tel);

        void setEndereco(Endereco2 en);
        void setNome(std::string n);
        void setTelefone(std::string tel);

        Endereco2 getEndereco();
        std::string getNome();
        std::string getTelefone();

        void toString();

    protected:

    private:
        Endereco2 endereco;
        std::string nome;
        std::string telefone;
};

#endif // PESSOA2_H
