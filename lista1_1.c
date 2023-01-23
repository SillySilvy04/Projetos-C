#include <stdio.h>
#define NUMEROSQTD 20


int main ()
{
    int numeros[NUMEROSQTD];
    int numero;
    int cont=0;
    float media=0;
    int maiorn=0;
    int menorn;

    printf("insira o seu primeiro numero: ");
    scanf("%d",&numero);

    if (numero != 999)
    {
        menorn=numero;
    }

    while (numero != 999) 
    {
        numeros[cont]=numero;

        if (maiorn<numero)
        {
            maiorn=numero;
        }

        if (menorn>numero)
        {
            menorn=numero;
        }

        media+=numero;
        cont++;

        printf("insira o seu proximo numero: ");
        scanf("%d", &numero);
    }

    printf("\n\na quantidade de numeros lida foi %d\n",cont);
    printf("a media dos numeros lidos foi %.1f\n",(media/cont));
    printf("o maior numero lido foi: %d\n",maiorn);
    printf("o menor numero lido foi: %d", menorn);

}