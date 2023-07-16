/*Questão 02 [2,5 pontos]:
Implementar uma função que, dada uma string s,
determine a quantidade de caracteres distintos em s.*/

#include<stdio.h>
#include<string.h>

int verificar(char s[])
{
	int i, j, cont=0, res=strlen(s), var=0;											
																			
	for (i=0; i<res; i++)
	{
        cont = 0; //quando cont é 0 acrescenta
        
		for (j = 0; j < i; j++)
		{
			if (s[i]==s[j])
			{
            	cont=1; //se cont for igual a 1 tem repetição, logo nao acrescenta em var
			}
		}
		
		if (cont!=1) //conte está fazendo papel de true e false, se ele for 0, entao não tem repetição, logo var é somado;
		{
			var++;
		}
}
	return var;
}


void main ()
{
	char s[30];
	int res;
	
	printf("Digite a sua palavra de s2: ");
	fflush(stdin);
	gets(s);
	
	res=verificar(s);
	
	printf("Quantidade de caracter diferentes: %d", res);
}
