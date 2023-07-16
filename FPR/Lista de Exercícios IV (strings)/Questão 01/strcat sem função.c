/*Questão 01:
Suponha que não existissem as funções strlen,
strcpy, strcat e strcmp. Pede-se, então, a
implementação de funções que tenham o
mesmo objetivo daquelas.*/

#include<stdio.h>
#include<string.h>
#include<locale.h>

#define TAM 30 //strcat(s1,s2)

void strcat_sem_funcao(char s1[], char s2[])
{
	int i, j;
	
	for(i=0, j=strlen(s1); s2[i]!='\0'; i++, j++)
	{
		s1[j]=s2[i];
	}
	s1[j]='\0';
}

void main ()
{
	setlocale(LC_ALL,"Portuguese");
	
	char s1[TAM]={"Manoel"};
	char s2[TAM]={" Gomes"};
	int i;
	
	strcat_sem_funcao(s1,s2);
	
	printf("Depois da funcao\n");
	puts(s1);
	puts(s2);
	
	i=strlen(s1);
	printf("%d", i);
	
}
