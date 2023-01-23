#include <stdio.h>
#include <time.h>

int main()
{
    int segundos = time(0);
    srand(segundos);
    int vetor[3]={0};
    int matriz[3][5];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
        {
            matriz[i][j]=(rand()%21);
        }
    }

    printf("MATRIZ M:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d, ",matriz[i][j]);
        }
        printf("%d\n",matriz[i][4]);
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
        {
            vetor[i]+=matriz[i][j];
        }
    }

    printf("\nVETOR SOMA_LINHA:\n");
    for(int i=0;i<3;i++)
    {
        printf("%d\n",vetor[i]);
    }
}