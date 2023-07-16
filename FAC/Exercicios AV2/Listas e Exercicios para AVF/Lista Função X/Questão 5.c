/*QUEST�O 05:
Fazer uma fun��o que exiba a tabuada de
pot�ncias de um n�mero n, no intervalo de 1 a
9. Se o n�mero n�o estiver neste intervalo, o
c�digo 0 deve ser retornado; caso contr�rio,
retorna-se 1.Para ilustrar, abaixo � apresentada como a
tabuada de pot�ncias de 2 deveria ser exibida:

2^0 = 1
2^1 = 2
2^2 = 4
2^3 = 8
2^4 = 16
2^5 = 32
2^6 = 64
2^7 = 128
2^8 = 256
2^9 = 512*/

#include<stdio.h>

int potencia(int num)
{
	int codigo, i, cont=0;
	
	if(num<1 || num>9)
	{
		codigo=0;
		
		return codigo;
	}
	else
	{
		codigo=1;
		
		for(i=0; i<=9; i++)
		{
			if(i==0)
			{
				cont=1;
				printf("%d ^% d = %d\n", num, i, cont);
			}
			else
			{
				cont*=num;
				printf("%d ^% d = %d\n", num, i, cont);
			}
		}
		
		return codigo;
	}
}

void main ()
{
	int n, resultado;
	
	printf("Digite um numero no intervalo de 1 a 9: ");
	scanf("%d", &n);
	
	resultado=potencia(n);
	
	printf("codigo %d", resultado);
}


