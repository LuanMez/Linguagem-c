/*Questão 01:
Suponha que não existissem as funções strlen,
strcpy, strcat e strcmp. Pede-se, então, a
implementação de funções que tenham o
mesmo objetivo daquelas.*/

#include<stdio.h>
#include<string.h>
#include<locale.h>

#define TAM 30 //strlen(s1)

int funcao_sem_strlen(char s1[])
{
	int i;
	
	for(i=0; s1[i]!='\0'; i++); //como chegou i=\0 o programa para e i ficou com o valor da posição do \0
	//não precisa de cont desse jeito
	
	return i;
}

void main ()
{
	setlocale(LC_ALL,"Portuguese");
	
	char s1[TAM]={"Leu mamou"};
	int x, c;
	
	c=strlen(s1);
	
	x=funcao_sem_strlen(s1);
	
	puts(s1);
	printf("%d\n", c);
	printf("%d\n", x);
	printf("Se os numeros forem iguais fiz certo");
	
}
