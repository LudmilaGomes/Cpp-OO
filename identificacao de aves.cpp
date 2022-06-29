#include <iostream>
#include <string>

#define MAX_VETOR 5

using namespace std;

int main()
{
    int vetor[MAX_VETOR];
    string aves[] = {"coruja", "pardal", "galinha", "ema", "falcão", "pato", "pinguim", "gaivota", "garça", "avestruz"};
    int identifica[][5] = { {0, 1, 0, 1, 1},
                            {0, 0, 0, 1, 0},
                            {0, 0, 1, 1, 0},
                            {0, 1, 0, 0, 0},
                            {0, 1, 0, 1, 0},
                            {1, 0, 0, 1, 0},
                            {1, 1, 0, 0, 0},
                            {1, 1, 0, 1, 0},
                            {1, 1, 0, 1, 1},
                            {0, 0, 0, 0, 0}, };

    for(int i = 0; i < MAX_VETOR; i++)
    {
        cin >> vetor[i];
    }

    for(int i = 0; i < 10; i++)
    {
        if( vetor[0] == identifica[i][0] && vetor[1] == identifica[i][1] && vetor[2] == identifica[i][2] && vetor[3] == identifica[i][3] && vetor[4] == identifica[i][4] )
        {
            cout << aves[i];
        }
    }

    return 0;
}