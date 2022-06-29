#include <iostream>
#include "Invoice2.h"
#include <string>

#define QUANT_MAX 2

using namespace std;

int main()
{
    Invoice2 inv[QUANT_MAX];
    int numero, quantidade;
    string descricao;
    double preco;

    for(int i = 0; i < QUANT_MAX; i++)
    {
        cin >> numero;
        cin.ignore();
        getline(cin, descricao);
        cin >> quantidade;
        cin >> preco;
        inv[i] = Invoice2(numero, quantidade, descricao, preco);
    }

    for(int i = 0; i < QUANT_MAX; i++)
    {
        inv[i].print();
    }

    return 0;
}
