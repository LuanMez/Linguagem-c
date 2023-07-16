#include <stdio.h>

/*Elabore um algoritmo que, dada a idade de um
nadador, classifique-o em uma das seguintes
categorias:
Categoria Faixa de idade
infantil A 0 - 4 anos
infantil B 5 - 7 anos
infantil C 8-10 anos
juvenil A 11-13 anos
juvenil B 14-17 anos
Adulto 18 anos ou mais*/

void main ()
{
	//idade dada de um nadador
	int idade;
	
	printf ("digite sua idade: ");
	scanf ("%d", &idade);
	
	//categoria da faixa de idade
	if (idade<5)
	{
		printf ("infantil A");
	}
	else
	{
		if (idade<8)
		{
			printf ("infantil B");
		}
		else
		{
			if (idade<11)
			{
				printf ("infantil C");
			}
			else
			{
				if (idade<14)
				{
					printf ("juvenil A");
				}
				else
				{
					if (idade<18)
					{
						printf ("juvenil B");
					}
					else
					{
						printf ("adulto");
					}
				}
			
				
				
			}
		 
		}
	}
	
	
	
	
	
	
}



