#include <stdio.h>
#define TAM 80

void lerfrase(char *string)
{
	printf("insira sua frase: ");
	gets(string);
}

int descobretamanho(char *string)
{
	for(int i=0;i<TAM;i++)
	{
		if(string[i]=='\0')
		{
			return i;
		}
	}
}

int EEB(char *string)
{
	int aux=descobretamanho(string);
	int cont=0;
	
	for(int i=0;i<aux;i++)
	{
		if(string[i]==' ')
		{
			cont++;
		}
	}
	
	return cont;
}

int conta(char *string)
{
	int aux=descobretamanho(string);
	int cont=0;
	
	for(int i=0;i<aux;i++)
	{
		if(string[i]=='a' || string[i]=='A')
		{
			cont++;
		}
	}
	
	return cont;
}

int contrrss(char *string)
{
	int aux=descobretamanho(string);
	int cont=0;
	
	for(int i=0;i<aux;i++)
	{
		if((string[i]=='s' && string[i+1]=='s') || (string[i]=='r' && string[i+1]=='r'))
		{
			cont++;
		}
	}
	
	return cont;
}

int main()
{
	int select;
	
	char frase[TAM];
	
	while(select != 5)
	{
		printf("\n\nMENU DE OPCOES:\n");
		printf("1-Ler uma frase de 80 caracteres\n");
		printf("2-Imprimir a quantidade de espacos em branco na frase\n");
		printf("3-Imprimir a quantidade de letras A\n");
		printf("4-Imprimir quantos conjuntos de RR ou SS aparecem na frase\n");
		printf("5-Encerrar\n");
		printf("insira sua opcao: ");
		scanf("%d",&select);
		fflush(stdin);
		
		switch (select)
		{
			case 1: 
				lerfrase(frase);
				break;
				
			case 2:
				printf("\n\nesta frase possui %d espacos em branco",EEB(frase));
				break;
				
			case 3:
				printf("\n\nesta frase possui %d letras A",conta(frase));
				break;
				
			case 4:
				printf("esta frase popssui %d RRs ou SSs",contrrss(frase));
				break;
		}
	}
}