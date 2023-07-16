/*Questão 02 [2,5 pontos]:
Dadas duas strings s1 e s2, implementar uma função
que verifique se todos os caracteres de s1 estão em s2.
Dependendo do resultado, os seguintes valores
deverão ser retornados:
0: nem todos os caracteres de s1 estão em s2;
1: todos os caracteres de s1 estão em s2, porém
não na mesma frequência;
2: todos os caracteres de s1 estão em s2, na
mesma frequência.*/

#include<stdio.h>
#include<string.h>

int verificar(char s1[], char s2[])
{
	int i, j=0, cont=0, fims2=strlen(s2), fims1=strlen(s1);
	
	for(i=0; s1[i]; i++)
	{
		if(s1[i]==s2[j])
		{
			cont++;
			j++;
			i=0;	
		}
	}
			if((cont==fims2) && (cont!=fims1))
			{
				printf("%d", cont); //só para verificar se o cont ta igual a fim-1
				return 1;
			}
			else
			{	
				if((cont==fims2) && (cont==fims1))
				{
					printf("%d", cont); //só para verificar se o cont ta igual a fim-1
					return 2;
				}
				else
				{
					if((cont!=fims2))
					{
						printf("%d", cont); //só para verificar se o cont ta igual a fim-1
						return 0;
					}
				}
			}
}

void main ()
{
	char s[30];
	char s2[30];
	int res;
	
	printf("Digite a sua palavra de s2: ");
	fflush(stdin);
	gets(s);
	
	printf("Digite a sua palavra de s1: ");
	fflush(stdin);
	gets(s2);
	
	res=verificar(s, s2);
	
	if(res==1)
	{
		printf("todos os caracteres de s1 estao em s2, porém nao na mesma frequencia");
	}
	else
	{
		if(res==2)
		{
			printf("todos os caracteres de s1 estao em s2, na mesma frequencia.");
		}
		else
		{
			printf("nem todos os caracteres de s1 estao em s2"); //esse ta ok
		}
	}
}
