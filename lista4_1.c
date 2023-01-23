#include <stdio.h>
#include <time.h>

void geravetor(int vet[20])
{
    int segundos = time(0);
    srand(segundos);

    for(int i=0;i<20;i++)
    {
        vet[i]=(rand()%101);
    }
}

void exibevetor(int vet[20])
{
    for(int i=0;i<19;i++)
    {
        printf("%d, ",vet[i]);
    }
    printf("\n%d\n",vet[19]);
}

void trocavetor(int vet[20])
{
    int cont=19;
    int aux;

    for(int i=0;i<10;i++)
    {
        aux=vet[i];
        vet[i]=vet[cont];
        vet[cont]=aux;
        cont--;
    }
}

int main()
{
    int vetor[20];

    geravetor(vetor);

    exibevetor(vetor);

    trocavetor(vetor);

    exibevetor(vetor);
}