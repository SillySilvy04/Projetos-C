#include <stdio.h>
#include <ctype.h>

void maiusculo(char *sentence)
{
    int aux;

    for(int i=0;i<30;i++)
    {
        aux=i;
        if(sentence[i]=='\0')
        {
            break;
        }
    }

    for(int i=0;i<aux;i++)
    {
        sentence[i]=toupper(sentence[i]);
    }
}

int main()
{
    char frase[30];

    printf("insira sua frase: ");
    fgets(frase,30,stdin);

    maiusculo(frase);

    printf("%s",frase);
}