#include <iostream>
#include <string>
#include "Eleitor.h"
#include "GerenciadorEleitores.h"

using namespace std;

int main()
{
    GerenciadorEleitores gerencia;
    string nome, titulo;
    int idade;

    int quantEleitores;

    cin >> quantEleitores;
    cin.ignore();

    for(int i = 0; i < quantEleitores; i++)
    {
        getline(cin, nome);
        cin >> idade;
        cin.ignore();
        getline(cin, titulo);

        gerencia.cadastrarEleitor(nome, idade, titulo, i);
    }

    gerencia.verificaEleitor(quantEleitores);

    return 0;
}
