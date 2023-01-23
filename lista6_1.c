#include <stdio.h>
#include "lista6_1.h"

void inicializa(data *data1)
{
	printf("\n\ninsira o dia: ");
	scanf("%d",&data1->dia);
	printf("insira o mes: ");
	scanf("%d",&data1->mes);
	printf("insira o ano: ");
	scanf("%d",&data1->ano);
}

void imprime(data data1)
{
	printf("\n\nsua data e: %d/%d/%d",data1.dia,data1.mes,data1.ano);
}

int valida(data data1)
{
	//invalidando meses com mais de 31 dias
	if(data1.dia>31)
	{
		return 0;
	}
	else
	
	//invalidando meses maiores do que 12
	if(data1.mes>12)
	{
		return 0;
	}
	else
	
	//invalidando fevereiros com mais de 28 dias
	if((data1.dia>28)&&(data1.mes==2))
	{
		return 0;	
	}
	else
	
	//invalidando meses de 30 diascom mais de 30 dias	
	if((data1.dia>30)&&((data1.mes==4)||(data1.mes==6)||(data1.mes==9)||(data1.mes==11)))
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

int main()
{	
	data d1;
	
	inicializa(&d1);
	
	if(valida(d1))
	{
		imprime(d1);
	}
	else
	{
		printf("\nesta data nao e valida");
	}
	
	
	
}