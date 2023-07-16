#include<stdio.h>

void main ()
{
	int n, resto;
	
	printf("escolha um numero que vai ser divido por 2:");
	
	scanf("%d",&n);
	
	resto = n%2; //numero divido por dois e guarda o resto
	
	printf("o resto da divisao por dois e':%d", resto);
}
