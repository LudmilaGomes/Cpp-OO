#ifndef DATA22_H
#define DATA22_H

class Data22
{
    public:
        Data22();

        void setDia(int d);
        void setMes(int m);
        void setAno(int a);

        int getDia();
        int getMes();
        int getAno();

        void printData();

    private:
        int dia, mes, ano;

};

#endif // DATA22_H
