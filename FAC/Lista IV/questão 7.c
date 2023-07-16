#include <stdio.h>

/*QUESTÃO 07: Uma determinada empresa fez
uma pesquisa de mercado para saber se as
pessoas gostaram ou não de um novo
produto que foi lançado. Para cada pessoa
entrevistada foram coletados os seguintes
dados: gênero (M ou F) e resposta (G
[Gostou] ou N [Não Gostou]). Sabendo-se
que foram entrevistadas X pessoas, faça um
programa que forneça:
a) Número de pessoas que gostaram do
produto;
b) Número de pessoas que não
gostaram do produto;
c) Informação dizendo em que gênero
o produto teve uma melhor
aceitação.*/

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
