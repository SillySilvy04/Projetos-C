#include <stdio.h>
#include <time.h>

void geramatriz(int mat[4][5])
{
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<5;j++)
        {
            mat[i][j]=(rand()%101);
        }
    }
}

void dobramatriz(int mat[4][5],int dob[4][5])
{
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<5;j++)
        {
            dob[i][j]=(mat[i][j])*2;
        }
    }
}

void somamatriz(int som[4][5],int mat[4][5],int dob[4][5])
{
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<5;j++)
        {
            som[i][j]=dob[i][j]+(mat[i][j]);
        }
    }
}

void exibematriz(int mat[4][5])
{
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d, ",mat[i][j]);
        }
        printf("%d\n",mat[i][4]);
    }
}



int main()
{
    int segundos = time(0);
    srand(segundos);
    int matriz[4][5];
    int dobro[4][5];
    int soma[4][5];

    geramatriz(matriz);

    printf("MATRIZ M:\n");
    exibematriz(matriz);

    dobramatriz(matriz,dobro);

    printf("\n\nMATRIZ DOBRO:\n");
    exibematriz(dobro);

    somamatriz(soma,matriz,dobro);

    printf("\n\nMATRIZ SOMA:\n");
    exibematriz(soma);
}