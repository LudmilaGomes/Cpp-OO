#include <stdio.h>
#include <math.h>

typedef struct 
{
    int x;
    int y;
} tDoisPontos;

float DistanciaDoisPontos(int x1, int y1, int x2, int y2)
{
    float dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    return dist;
}

int main()
{
    float maisProximo;
    int i, quantPontos,
    xProximo, yProximo;
    tDoisPontos ponto1;
    tDoisPontos pontos[10];

    ponto1.x = 0;
    ponto1.y = 0;

    scanf("%d", &ponto1.x);
    scanf("%d", &ponto1.y);

    scanf("%d", &quantPontos);

    for(i = 0; i < quantPontos; i++)
    {
        pontos[i].x = 0;
        pontos[i].y = 0;
    }

    for(i = 0; i < quantPontos; i++)
    {
        scanf("%d", &pontos[i].x);
        scanf("%d", &pontos[i].y);
    }

    maisProximo = DistanciaDoisPontos(ponto1.x, ponto1.y, pontos[0].x, pontos[0].y);
    xProximo = pontos[0].x;
    yProximo = pontos[0].y;

    for(i = 0; i < quantPontos; i++)
    {
        if( DistanciaDoisPontos(ponto1.x, ponto1.y, pontos[i].x, pontos[i].y) < maisProximo && i < quantPontos)
        {
            maisProximo = DistanciaDoisPontos(ponto1.x, ponto1.y, pontos[i].x, pontos[i].y);
            xProximo = pontos[i].x;
            yProximo = pontos[i].y;
        }
    }

    printf("Ponto mais perto é (%d, %d)\n", xProximo, yProximo);

    return 0;
}