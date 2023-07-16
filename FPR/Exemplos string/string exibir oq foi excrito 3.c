#include<stdio.h>
#include<string.h>

void main ()
{
	char i, string[11]; //vai de 0 a 10 e armazena de 0 a 9 caracteres já que o /0 é um caracter
	
	printf("Digite uma palavra de 10 caracteres: ");
	fflush(stdin); //sempre usar fflush para não dar merda nos caracteres.
	
	fgets(string, 11, stdin); //ou gets(string);
	//fgets limita então fica mais facil de visualizar o quanto que tem no string
	
	printf("%s", string); //exibir oq está armazenado na string, melhor que usar for.
}
