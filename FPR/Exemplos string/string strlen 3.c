#include<stdio.h>
#include<string.h>
#include<locale.h>

#define N 50

void main ()
{
	setlocale(LC_ALL,"Portuguese");
	
	char s[N];
	int i;
	
	printf("Insira um texto: ");
	fflush(stdin);
	gets(s); //armazenou o texto
	i=strlen(s); //o i recebe o tamanho total da string com /0
	printf("\nTamanho do texto: %d\n\n", i);
	
	for(i=0; i<strlen(s); i++) //mesma coisa do puts ou string[i]!='\0' no meio do for
	{
		printf("%c", s[i]); //printa um caracter de cada vez
	}
}
