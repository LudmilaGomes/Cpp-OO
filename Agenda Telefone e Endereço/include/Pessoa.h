#ifndef PESSOA_H
#define PESSOA_H
#include "Endereco.h"
#include <string>

class Pessoa
{
    public:
        Pessoa();
        Pessoa(std::string n);
        Pessoa(std::string n, Endereco en, std::string tel);

        void setEndereco(Endereco en);
        void setNome(std::string n);
        void setTelefone(std::string tel);

        Endereco getEndereco();
        std::string getNome();
        std::string getTelefone();

        void toString();

    protected:

    private:
        Endereco endereco;
        std::string nome;
        std::string telefone;
};

#endif // PESSOA_H
