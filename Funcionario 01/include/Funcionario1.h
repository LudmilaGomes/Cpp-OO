#ifndef FUNCIONARIO1_H
#define FUNCIONARIO1_H
#include <string>

class Funcionario1
{
    public:
        Funcionario1();

        std::string nome, sobrenome;
        int salario;

        int getSalarioAnual();

};

#endif // FUNCIONARIO1_H
