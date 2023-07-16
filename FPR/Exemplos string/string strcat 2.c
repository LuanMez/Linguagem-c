#include<stdio.h>
#include<string.h>
#include<locale.h>

#define N 50

void main ()
{
	setlocale(LC_ALL,"Portuguese");
	
	char s1[N]={"Lógica de"};
	char s2[N]={" Programação!"};
	
	printf("Antes do strcat:\n");
	puts(s1); //aqui está armazenado o Lógica de
	puts(s2); //aqui está armazenado o Programação
	
	strcat(s1,s2); //junta a s2 com a s1 e só a s1 é alterada.
	
	//origem = destino; não se pode usar
	
	printf("\nDepois do strcat:\n");
	puts(s1);
	puts(s2);
	
}
