#include<stdio.h>
#include<string.h>
#include<locale.h>

#define N 50

void main ()
{
	setlocale(LC_ALL,"Portuguese");
	
	char s1[N]={"L�gica de"};
	char s2[N]={" Programa��o!"};
	
	printf("Antes do strcat:\n");
	puts(s1); //aqui est� armazenado o L�gica de
	puts(s2); //aqui est� armazenado o Programa��o
	
	strcat(s1,s2); //junta a s2 com a s1 e s� a s1 � alterada.
	
	//origem = destino; n�o se pode usar
	
	printf("\nDepois do strcat:\n");
	puts(s1);
	puts(s2);
	
}
