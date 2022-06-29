#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>

class Funcionario
{
    public:
        Funcionario();
        Funcionario(std::string nome, int matricula);
        virtual ~Funcionario();

        void setNome(std::string nome);
        void setMatricula(int matricula);

        std::string getNome();
        int getMatricula();

        virtual double calculaSalario() = 0;

    protected:

    private:
        std::string nome;
        int matricula;
};

#endif // FUNCIONARIO_H
