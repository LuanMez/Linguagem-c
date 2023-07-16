#include <stdio.h>

/*QUEST�O 07: Uma determinada empresa fez
uma pesquisa de mercado para saber se as
pessoas gostaram ou n�o de um novo
produto que foi lan�ado. Para cada pessoa
entrevistada foram coletados os seguintes
dados: g�nero (M ou F) e resposta (G
[Gostou] ou N [N�o Gostou]). Sabendo-se
que foram entrevistadas X pessoas, fa�a um
programa que forne�a:
a) N�mero de pessoas que gostaram do
produto;
b) N�mero de pessoas que n�o
gostaram do produto;
c) Informa��o dizendo em que g�nero
o produto teve uma melhor
aceita��o.*/

void main ()
{
	//declaracao das variaveis
	int i, numpessoas, Mcontgostou=0, Mcontngostou=0, Fcontgostou=0, Fcontngostou=0,
	 gostou, ngostou, masculino, feminino, calM, calF;
	char genero, opniao;
	
	//leitura de quantas pessoas serao entrevistadas
	printf ("Quantas pessoas vao ser entrevistadas?");
	scanf ("%d", &numpessoas);
	
	
	for (i=1; i<=numpessoas; i++ )
	{
		//leitura do genero
		printf ("Qual o seu genero [M]asculino ou [F]eminino?\n");
		fflush(stdin);
	    scanf ("%c", &genero);
	    genero = toupper (genero);
	    
	    //leitura do gosto 
	    printf ("Voce [G]ostou ou [N]ao gostou do produto?\n");
	    fflush(stdin);
	    scanf ("%c", &opniao);
	    opniao = toupper (opniao);
	    
	    if(genero=='M')
		{
			masculino++;
			
			if(opniao=='G')
	    {
	    	Mcontgostou++;
		}
		else
		{
			if(opniao=='N')
			{
				Mcontngostou++;
			}
		}
		
		
	}
	
	if(genero=='F')
		{
			feminino++;
			
			if(opniao=='G')
	    {
	    	Fcontgostou++;
		}
		else
		{
			if(opniao=='N')
			{
				Fcontngostou++;
			}
		}
			
	}
	
    }
    calM=((float)Mcontgostou/masculino)*100;
    calF=((float)Fcontgostou/feminino)*100;
    
    if (calM>calF)
    {
    	printf("O genero que mais gostou foi Masculino\n");
	}
	else
	{
		if (calF>calM)
    {
    	printf("O genero que mais gostou foi Feminino\n");
    }
    else
	{
		printf("Os generos tiveram a mesma aceitacao\n");
	}
	
    }
	
    
	gostou = Mcontgostou + Fcontgostou;
	ngostou = Mcontngostou + Fcontngostou;
	
	printf ("Numero de pessoas que gostaram: %d\n", gostou);
	printf ("Numero de pessoas que nao gostaram: %d\n", ngostou);
	
}
