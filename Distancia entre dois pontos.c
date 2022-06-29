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
    int i;
    float distancia;
    tDoisPontos pontos[2];

    for(i = 0; i < 2; i++)
    {
        scanf("%d", &pontos[i].x);
        scanf("%d", &pontos[i].y);
    }

    distancia = DistanciaDoisPontos(pontos[0].x, pontos[0].y, pontos[1].x, pontos[1].y);

    printf("%.0f\n", pow(distancia, 2));

    return 0;
}