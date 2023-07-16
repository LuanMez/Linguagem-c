#include<stdio.h>

/*void main ()
{
	int x;
	
	printf("digite o valor de x: ");
	scanf("%d", &x);
	
	if(x%2==0)
	{
		printf("numero par");
	}
	else
	{
		printf("numero impar");
	}
}*/

void main ()
{
	int x;
	
	printf("digite o valor de x: ");
	scanf("%d", &x);
	
	printf((x%2==0)?"numero par":"numero impar");
}


