#ifndef FUNCIONARIO2_H
#define FUNCIONARIO2_H
#include <string>

class Funcionario2
{
    public:
        Funcionario2();
        Funcionario2(std::string n, std::string sn, int s);

        void setNome(std::string n);
        void setSobrenome(std::string sn);
        void setSalario(int s);
        std::string getNome();
        std::string getSobreome();
        int getSalario();

        double getSalarioAnual();
        void aumentoSalario(float porcentual);

    private:
        std::string nome;
        std::string sobrenome;
        int salario;
};

#endif // FUNCIONARIO2_H
