#ifndef ENDERECO_H
#define ENDERECO_H
#include <string>

class Endereco
{
    public:
        Endereco();
        Endereco(std::string r, int n, std::string b, std::string c, std::string e, std::string cep);

        void toString();

    protected:

    private:
        std::string rua;
        int numero;
        std::string bairro;
        std::string cidade;
        std::string estado;
        std::string cep;
};

#endif // ENDERECO_H
