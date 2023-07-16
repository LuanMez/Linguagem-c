/*Questão 02:
Dada uma string s, desenvolver uma função
que determine se s é ou não um palíndromo.
Observação: uma string s será um palíndromo
quando seus caracteres formarem a mesma
sequência, independente se s é percorrida da
esquerda para direita ou vice-versa.*/

#include<stdio.h>
#include<string.h>
#include<locale.h>

#define TAM 30 

int palindrom(char string[])
{
	int i, j;
	
	for(i=0, j=strlen(string)-1; string[i]>string[j]; i++, j--) //i<j poderia ser
	{
		if(string[i]!=string[j])
		{
			return 0;
		}
	}
	return 1;
}

void main ()
{
	setlocale(LC_ALL,"Portuguese");
	
	char string[TAM];
	int x;
	
	printf("Digite uma palavra: ");
	fflush(stdin);
	gets(string);
	
	x=palindrom(string);
	
	if(x==1)
	{
		printf("sim e palindromo");
	}
	else
	{
		printf("nao e palindromo");
	}
}
