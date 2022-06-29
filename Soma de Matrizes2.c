#include <stdio.h>

// incluindo a função SomaMatrizes que é pedida pela questão;

void SomaMatrizes(int matriz1[][5], int matriz2[][5], int matrizFinal[][5], int linha, int coluna)
{
    int i, j;

    for(i = 0; i < linha; i++)
    {
        for (j = 0; j < coluna; j++)
        {
            matrizFinal[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    for(i = 0; i < linha; i++)
    {
        for (j = 0; j < coluna; j++)
        {
            printf("%d ", matrizFinal[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int matriz1[5][5], matriz2[5][5], matrizFinal[5][5];
    int quantLinha, quantColuna, i, j;

    scanf("%d", &quantLinha);
    scanf("%d", &quantColuna);

    for(i = 0; i < quantLinha; i++)
    {
        for (j = 0; j < quantColuna; j++)
        {
            scanf("%d", &matriz1[i][j]);
        }
    }

    for(i = 0; i < quantLinha; i++)
    {
        for (j = 0; j < quantColuna; j++)
        {
            scanf("%d", &matriz2[i][j]);
        }
    }

    SomaMatrizes(matriz1, matriz2, matrizFinal, quantLinha, quantColuna);

    return 0;
}