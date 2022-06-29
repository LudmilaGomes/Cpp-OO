#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>

class Funcionario
{
    public:
        Funcionario();

        void setMatricula(int m);
        void setNome(std::string n);
        void setSalario(double s);

        int getMatricula();
        std::string getNome();
        double getSalario();


    protected:
        int matricula;
        std::string nome;
        double salario;

};

#endif // FUNCIONARIO_H
