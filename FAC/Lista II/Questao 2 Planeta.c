#include<stdio.h>

int main ()
{
    float pesoPlaneta, pesoNaTerra;
	int numPlaneta;
	printf ("digite seu peso: \n");
	scanf ("%f", &pesoNaTerra);

	printf ("digite 1 para Mercurio\ndigite 2 para Venus\ndigite 3 para Marte\ndigite 4 para Jupiter\ndigite 5 para Saturno\ndigite 6 para Urano\n");
    scanf ("%d", &numPlaneta);
	
	switch (numPlaneta) {
		case 1:
			pesoPlaneta = (pesoNaTerra/10)*0.37;
			printf ("%.2f", pesoPlaneta);
			break;
		case 2:
			pesoPlaneta = (pesoNaTerra/10)*0.88;
			printf ("%.2f", pesoPlaneta);
			break;
		case 3:
			pesoPlaneta = (pesoNaTerra/10)*0.38;
			printf ("%.2f", pesoPlaneta);
			break;
		case 4:
			pesoPlaneta = (pesoNaTerra/10)*2.64;
			printf ("%.2f", pesoPlaneta);
			break;
		case 5:
			pesoPlaneta = (pesoNaTerra/10)*1.15;
			printf ("%.2f", pesoPlaneta);
			break;
		case 6:
			pesoPlaneta = (pesoNaTerra/10)*1.17;
			printf ("%.2f", pesoPlaneta);
			break;
			
		
	}
	
	

	
	
	
	
}
