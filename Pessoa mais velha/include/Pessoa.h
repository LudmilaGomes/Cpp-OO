#ifndef PESSOA_H
#define PESSOA_H
#include <string>

class Pessoa
{
    public:
        Pessoa();
        Pessoa(std::string nome, int idade);
        virtual ~Pessoa();

        // sets e gets
        void setNome(std::string nome);
        void setIdade(int idade);
        std::string getNome();
        int getIdade();

        // demais métodos
        void toString();

    protected:

    private:
        std::string nome;
        int idade;
};

#endif // PESSOA_H
