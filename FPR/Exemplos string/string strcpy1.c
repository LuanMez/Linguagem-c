#include<stdio.h>
#include<string.h>
#include<locale.h>

#define N 20

void main ()
{
	setlocale(LC_ALL,"Portuguese");
	
	char origem[N]={"Olá, mundo!"};
	char destino[N];
	
	printf("Antes do strcpy:\n");
	puts(origem); //aqui está armazenado o Olá, mundo!
	puts(destino); //aqui está lixo de memoria.
	
	strcpy(destino,origem); //copiou o que tinha na origem e mandou pro destino.
	
	//origem = destino; não se pode usar
	
	printf("\nDepois do strcpy:\n");
	puts(origem);
	puts(destino);
	
}
