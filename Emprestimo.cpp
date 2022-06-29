#include <iostream>

int main()
{
    int salario, 
        emprestimo, 
        nPrestacoes;

    while(1)
    {
        std:: cin >> salario;
        if(salario > 0)
        {
            break;
        }
    }

    while(1)
    {
        std:: cin >> emprestimo;
        if(emprestimo > 0)
        {
            break;
        }
    }

    while(1)
    {
        std:: cin >> nPrestacoes;
        if(nPrestacoes > 0)
        {
            break;
        }
    }
    
    emprestimo = emprestimo/nPrestacoes;

    if(emprestimo > salario*(0.3))
    {
        std:: cout << "Emprestimo nao pode ser concedido" << std:: endl;
    }
    else
    {
        std:: cout << "Emprestimo pode ser concedido" << std:: endl;
    }
    
    return 0;
}