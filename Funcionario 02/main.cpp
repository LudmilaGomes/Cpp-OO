#include <iostream>
#include "Funcionario2.h"

using namespace std;

int main()
{
    int nPessoas;

    string nome, sobrenome;
    int salario;

    cin >> nPessoas;

    Funcionario2 func[nPessoas];

    for(int i = 0; i < nPessoas; i++)
    {
        cin >> nome;
        cin >> sobrenome;
        cin >> salario;
        func[i] = Funcionario2(nome, sobrenome, salario);
    }

    for(int i = 0; i < nPessoas; i++)
    {
        cout << func[i].getNome()
        << " " << func[i].getSobreome() << " - " << func[i].getSalario() << " - " << func[i].getSalarioAnual() << endl;
        func[i].aumentoSalario(0.1);
        cout << func[i].getSalarioAnual() << endl;
    }

    return 0;
}
