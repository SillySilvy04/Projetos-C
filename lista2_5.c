#include <stdio.h>

int main()
{
    int numero;
    int cont=0;
    float percpar=0;
    float mediaimp=0;
    int contimp=0;
    int maiorn=0;
    int menorn;

    printf("insira o seu primeiro numero: ");
    scanf("%d",&numero);

    menorn=numero;

    while(numero>=0)
    {
        cont++;

        if(numero%2==0)
        {
            percpar++;
        }
        else
        {
            mediaimp+=numero;
            contimp++;
        }

        if(numero>maiorn)
        {
            maiorn=numero;
        }

        if(numero<menorn)
        {
            menorn=numero;
        }

        printf("insira o seu proximo numero: ");
        scanf("%d",&numero);
    }
    
    printf("\n\na quantidade de numeros validos lida foi: %d\n",cont);
    printf("o percentual de numeros pares lidos foi: %.1f%%\n",(percpar/cont)*100);
    printf("a media dos numeros impares lidos foi: %.1f\n",(mediaimp/contimp));
    printf("o maior numero lido foi: %d\n",maiorn);
    printf("o menor numero lido foi: %d\n",menorn);
}