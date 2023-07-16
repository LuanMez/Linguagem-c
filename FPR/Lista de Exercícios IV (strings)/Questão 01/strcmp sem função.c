/*Questão 01:
Suponha que não existissem as funções strlen,
strcpy, strcat e strcmp. Pede-se, então, a
implementação de funções que tenham o
mesmo objetivo daquelas.*/

#include<stdio.h>
#include<string.h>
#include<locale.h>

#define TAM 30 //strcmp(s1,s2);

int funcao_sem_strcmp(char s1[],char s2[])
{
	int i;
	
	for(i=0; (s1[i]!='\0') && (s2[i]!='\0') && (s1[i]==s2[i]); i++);
	
	if((s1[i]=='\0') && (s2[i]=='\0'))
	{
		return 0;
	}
	else
	{
		if(s1[i]>s2[i])
		{
			return 1;
		}
		else
		{
			return -1;
		}
	}
}

void main()
{
	setlocale(LC_ALL,"Portuguese");
	
	char s1[TAM]={"Filho da puta"};
	char s2[TAM];
	int resultado;
	
	printf("Insira um texto: ");
	fflush(stdin);
	gets(s2);
	
	funcao_sem_strcmp(s1,s2);
	
	resultado=funcao_sem_strcmp(s1,s2);
	
	if(resultado==0)
	{
		printf("As strings sao iguais");
	}
	else
	{
		printf("As strings sao diferentes");
	}
}
