#include <iostream>

int main()
{
    int i, j, quantElementos;

    std:: cin >> quantElementos;

    int vetor[quantElementos];

    for(i = 0; i < quantElementos; i++)
    {
        std:: cin >> vetor[i];
    }

    for(i = 0; i <= quantElementos - 2; i ++)
    {
        for(j = (i + 1); j <= quantElementos - 1; j++)
        {
            if(vetor[i] == vetor[j])
            {
                vetor[j] = 0;
            }
        }
    }

    for(i = 0; i < quantElementos; i++)
    {
        if(vetor[i] != 0)
        {
            printf("%d ", vetor[i]);
        }
    }

    return 0;
}
