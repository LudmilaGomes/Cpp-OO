#include <iostream>
#include "Funcionario.h"
#include "Consultor.h"

using namespace std;

int main()
{
    Funcionario func1;
    Consultor func2;

    int matricula;
    string nome;
    double salario;

    cin >> matricula;
    func1.setMatricula(matricula);

    cin.ignore();
    getline(cin, nome);
    func1.setNome(nome);

    cin >> salario;
    func1.setSalario(salario);

    cout << func1.getMatricula() << " - " << func1.getNome() << " - " <<  func1.getSalario() << endl;

    cin >> matricula;
    func2.setMatricula(matricula);

    cin.ignore();
    getline(cin, nome);
    func2.setNome(nome);

    cin >> salario;
    func2.setSalario(salario);

    cout << func2.getMatricula() << " - " << func2.getNome() << " - " <<  func2.getSalario() << endl;

    return 0;
}
