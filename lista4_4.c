#include <stdio.h>
#include <time.h>
#define TAM 10

int main()
{
    int vet[TAM];
    int maiorn;
    int cont=0;
    int segundos = time(0);
    srand(segundos);

    for(int i=0;i<TAM;i++)
    {
        vet[i]=(rand()%11);

        printf("%d, ",vet[i]);

        if(maiorn<vet[i])
        {
            maiorn=vet[i];
        }
    }

    for(int i=0;i<TAM;i++)
    {
        if(vet[i]==maiorn)
        {
            cont++;
        }
    }

    printf("\no maior valor deste conjunto de numeros foi %d, que se repetiu %d vezes",maiorn,cont);
}

