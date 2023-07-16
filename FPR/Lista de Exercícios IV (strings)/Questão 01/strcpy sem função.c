/*Questão 01:
Suponha que não existissem as funções strlen,
strcpy, strcat e strcmp. Pede-se, então, a
implementação de funções que tenham o
mesmo objetivo daquelas.*/

#include<stdio.h>
#include<string.h>
#include<locale.h>

#define TAM 30 //strcpy(s1,s2)

void strcpy_sem_funcao(char string1[], char string2[])
{
	int i;
	
	for(i=0; string2[i]!='\0'; i++)
	{
		string1[i]=string2[i];
	}
	string1[i]='\0'; //atribuir o \0 ao final da string com i já tendo a posiçao para armazenar
}

void main ()
{
	setlocale(LC_ALL,"Portuguese");
	
	char s1[TAM]={"Caneta azul"};
	char s2[TAM]={"tá marcada com minha letra"};
	int i;
	
	printf("Antes da função\n"); //mostrar como está as strings antes da função
	puts(s1);
	puts(s2);
	
	strcpy_sem_funcao(s1,s2); //chamando a função
	
	printf("Depois da função\n"); //mostrar como está as strings depois da função
	puts(s1);
	puts(s2);
	i=strlen(s1); //ver quantos elementos tem na string1
	printf("%d", i);
}
