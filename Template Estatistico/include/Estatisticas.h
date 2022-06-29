#ifndef ESTATISTICAS_H
#define ESTATISTICAS_H
#include <vector>

template <class T>

class Estatisticas
{
    public:

        int indexOfMenor(std::vector<T> vec)
        {
            float menor = vec[0].getTotal();
            int indMenor = 0;
            for(int i = 0; i < vec.size(); i++)
            {
                if(vec[i].getTotal() < menor)
                {
                    menor = vec[i].getTotal();
                    indMenor = i;
                }
            }
            return indMenor;
        }

        float media(std::vector<T> vec)
        {
            float soma = 0;
            for(int i = 0; i < vec.size(); i++)
            {
                soma = soma + vec[i].getTotal();
            }
            return ((float)soma)/vec.size();
        }

        int indexOfMaior(std::vector<T> vec)
        {
            int indMaior = 0;
            float maior = vec[0].getTotal();
            for(int i = 0; i < vec.size(); i++)
            {
                if(vec[i].getTotal() > maior)
                {
                    maior = vec[i].getTotal();
                    indMaior = i;
                }
            }
            return indMaior;
        }

    protected:

    private:
};

#endif // ESTATISTICAS_H
