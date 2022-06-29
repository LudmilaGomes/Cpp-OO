#include <stdio.h>

int MatrizEsparsa(int matriz[], int linhas, int colunas)
{
    int i;
    float quantZeros = 0;
    float totalElementos = linhas*colunas;

    for(i = 0; i < (linhas*colunas); i++)
    {
        printf("%d\n", matriz[i]);
        if(matriz[i] == 0)
        {
            quantZeros++;
        }
    }

    if( (quantZeros/totalElementos)*100.0 > 70 )
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int matriz[100];
    int quantLinhas, quantColunas, i;

    scanf("%d", &quantLinhas);
    scanf("%d", &quantColunas);

    for(i = 0; i < (quantLinhas*quantColunas); i++)
    {
        scanf("%d", &matriz[i]); 
    }

    if( MatrizEsparsa(matriz, quantLinhas, quantColunas) == 1)
    {
        printf("A matriz é esparsa\n");
    }
    else
    {
        printf("A matriz não é esparsa\n");
    }

    return 0;
}