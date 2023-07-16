/*Questão 08:
Desenvolver uma função recursiva que, dada
uma string, exiba-a invertida.*/

#include<stdio.h>
#include<string.h>

void invertida2(char s[], int fim);
void invertida(char s[]);

void main ()
{
	char s[30];
	
	printf("Digite a string: ");
	fflush(stdin);
	gets(s);
	
	invertida(s);
}

void invertida2(char s[], int fim)
{
	if(fim==0)
	{
		printf("%c", s[fim]);
	}
	else
	{
		printf("%c", s[fim]);
		
		invertida2(s,fim-1);
	}
}

void invertida(char s[])
{
	int fim=strlen(s);
	
	invertida2(s,fim);
}
