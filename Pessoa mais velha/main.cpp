#include <iostream>
#include "Pessoa.h"

using namespace std;

int main()
{
    Pessoa pessoas[3];
    int maior;

    for(int i = 0; i < 3; i++)
    {
        string nome;
        int idade;

        getline(cin, nome);
        cin >> idade;
        cin.ignore();

        pessoas[i] = Pessoa(nome, idade);
    }

    if(pessoas[0].getIdade() > pessoas[1].getIdade() && pessoas[0].getIdade() > pessoas[2].getIdade())
    {
        //idade da pessoa 0 é maior que idade da pessoa 1 E da pessoa 2
        maior = 0;
    }
    if(pessoas[1].getIdade() > pessoas[0].getIdade() && pessoas[1].getIdade() > pessoas[2].getIdade())
    {
        //idade da pessoa 1 é maior que idade da pessoa 0 E da pessoa 2
        maior = 1;
    }
    if(pessoas[2].getIdade() > pessoas[1].getIdade() && pessoas[2].getIdade() > pessoas[0].getIdade())
    {
        //idade da pessoa 2 é maior que idade da pessoa 1 E da pessoa 0
        maior = 2;
    }

    cout << "Nome e idade da pessoa mais velha: \n";
    pessoas[maior].toString();

    return 0;
}
