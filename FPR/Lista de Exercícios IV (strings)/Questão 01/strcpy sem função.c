/*Quest�o 01:
Suponha que n�o existissem as fun��es strlen,
strcpy, strcat e strcmp. Pede-se, ent�o, a
implementa��o de fun��es que tenham o
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
	string1[i]='\0'; //atribuir o \0 ao final da string com i j� tendo a posi�ao para armazenar
}

void main ()
{
	setlocale(LC_ALL,"Portuguese");
	
	char s1[TAM]={"Caneta azul"};
	char s2[TAM]={"t� marcada com minha letra"};
	int i;
	
	printf("Antes da fun��o\n"); //mostrar como est� as strings antes da fun��o
	puts(s1);
	puts(s2);
	
	strcpy_sem_funcao(s1,s2); //chamando a fun��o
	
	printf("Depois da fun��o\n"); //mostrar como est� as strings depois da fun��o
	puts(s1);
	puts(s2);
	i=strlen(s1); //ver quantos elementos tem na string1
	printf("%d", i);
}
