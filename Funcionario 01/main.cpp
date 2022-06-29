#include <iostream>
#include "Funcionario1.h"

using namespace std;

int main()
{
    int nPessoas;

    cin >> nPessoas;

    Funcionario1 func[nPessoas];

    for(int i = 0; i < nPessoas; i++)
    {
        cin.ignore();
        getline(cin, func[i].nome);
        //cin.ignore();
        getline(cin, func[i].sobrenome);
        cin >> func[i].salario;
    }

    for(int i = 0; i < nPessoas; i++)
    {
        cout << func[i].nome << " " << func[i].sobrenome << " - " << func[i].salario << " - " << func[i].getSalarioAnual() << endl;
    }

    //João Pedro - 1500 - 18000

    return 0;
}
