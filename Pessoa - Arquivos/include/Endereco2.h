#ifndef ENDERECO2_H
#define ENDERECO2_H
#include <string>

class Endereco2
{
    public:
        Endereco2();
        Endereco2(std::string r, int n, std::string b, std::string c, std::string e, std::string cep);

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

#endif // ENDERECO2_H
