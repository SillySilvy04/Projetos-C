#include <stdio.h>
#include <time.h>

int main()
{
    int n;
    int maiorlado=0;
    int maiorvalor;
    int lados[6]={0};
    int segundos = time(0);
    srand(segundos);

    printf("insira o numero de vezes que desejar rolar o dado: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        lados[(rand()%6)]++;
    }

    for(int i=0;i<6;i++)
    {
        printf("lado %d: %d repeticoes\n",(i+1),lados[i]);

        if(lados[i]>maiorlado)
        {
            maiorlado=lados[i];
            maiorvalor=i+1;
        }
    }

    printf("o lado que mais se repetiu foi o: %d",maiorvalor);
}