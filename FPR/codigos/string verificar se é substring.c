/*Questão 02 [2,5 pontos]:
Dadas duas strings s1 e s2, implementar uma função
que verifique se s1 é uma substring de s2 (retornando 1
caso seja ou 0, se não for). 
*/

#include<stdio.h>
#include<string.h>

int verificar(char s[], char s2[])
{
	int i, j=0, k, z, cont=0, fim=strlen(s2);
	
	for(i=0; s[i]; i++)
	{
		if(s[i]==s2[j])
		{
			k=i;
			z=j;
			
			while(s[k]==s2[z])
			{
				cont++;
				k++;
				z++;
				
				if(cont==fim)
				{
					//printf("%d", cont); só para verificar se o cont ta igual a fim-1
					return 1;
				}
				
				/*if(s[k]!=s2[z])
				{
					cont=-1;
				}*/
		
			}
			cont=0;
		}
	}
	return 0;
	
	
}

void main ()
{
	char s[30];
	char s2[30];
	int res;
	
	printf("Digite a sua palavra: ");
	fflush(stdin);
	gets(s);
	
	printf("Digite a sua substring: ");
	fflush(stdin);
	gets(s2);
	
	res=verificar(s, s2);
	
	if(res==1)
	{
		printf("A segunda palavra eh substring da primeira");
	}
	else
	{
		printf("A segunda palavra NAO eh substring da primeira");
	}
}
