#ifndef TRABALHADOR_H
#define TRABALHADOR_H
#include <string>

class Trabalhador
{
    public:
        Trabalhador();

        void setNome(std::string nome);
        void setSalario(float salario);
        std::string getNome();
        float getSalario();

    protected:
        std::string nome;
        float salario;
};

#endif // TRABALHADOR_H
