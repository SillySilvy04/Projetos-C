#include <stdio.h>
#define TAM 50

int main()
{
    int contvogais=0;
    char frase[TAM];

    printf("insira a sua frase: ");
    fgets(frase, TAM, stdin);
    printf("\n\n");

    for(int i=0;i<TAM;i++)
    {
        if(frase[i]=='\0')
        {
            break;
        }

        printf("%c",frase[i]);

        if (frase[i]=='a' || frase[i]=='e' || frase[i]=='i' || frase[i]=='o' || frase[i]=='u')
        {
            for(int j=1;j<=contvogais;j++)
            {
                printf("%c",frase[i]);
            }


            contvogais++;
        }
    }
}