#include<stdio.h>
#include<string.h>

void main ()
{
	char i, string[11];
	
	printf("Digite uma palavra de 10 caracteres: ");
	fflush(stdin);
	gets(string);
	
	for(i=0; string[i]!='\0'; i++)
	{
		printf("%c", string[i]);
	}
}
