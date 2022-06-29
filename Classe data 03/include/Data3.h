#ifndef DATA3_H
#define DATA3_H
#include <string>

class Data3
{
    public:
        Data3();
        Data3(int d, int m, int a);

        void avancarDia();
        void setDia(int d);
        void setMes(int m);
        void setAno(int a);

        int getDia2();          // retorna o valor inteiro para teste
        int getMes2();          // retorna o valor inteiro para teste
        std::string getDia();   // retorna a string
        std::string getMes();   // retorna a string
        std::string getAno();
        int getDiasMes(int m);


    protected:

    private:
        int dia, mes, ano;
};

#endif // DATA3_H
