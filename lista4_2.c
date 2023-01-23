#include <stdio.h>

int main()
{
    int veta[10];
    int vetb[10];
    int vetc[20];

    for(int i=0;i<10;i++)
    {
        veta[i]=i;
    }

    int cont=0;
    
    for(int i=10;i<20;i++)
    {
        vetb[cont]=i;
        cont++;
    }

    cont=0;
    int cont2=0;

    for(int i=0;i<20;i++)
    {
        if(i%2==0)
        {
            vetc[i]=veta[cont];
            cont++;
        }
        else
        {
            vetc[i]=vetb[cont2];
            cont2++;
        }
    }

    for(int i=19;i>=0;i--)
    {
        printf("%d, ",vetc[i]);
    }
}