#include<stdio.h>

void main ()
{
	float media;
	
	printf("Digite sua media: ");
	scanf("%f", &media);
	
	printf((media>=6)?"aprovado":(media<4)?"reprovado":"recuperacao");
}
