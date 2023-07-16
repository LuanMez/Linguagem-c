#include<stdio.h>
#define CAP 5

//Nomes: Luan Moreira de Menezes, Leandro dos Santos Costa.

void inserirNovoNumero(int vetor[], int capacidade, int *quant)
{
	int i, num, cont=0; //declaração das variaveis
	
	printf("qual numero deseja inserir?\n");
	scanf("%d", &num);
	
	if(*quant>=capacidade)
	{
		printf("Esta cheio os vetores\n");
	}
	else
	{
		for(i=0; i<capacidade; i++)
		{
			if(vetor[i]==num)
			{
				cont++;
			}
		}
		if(cont==0)
		{
			vetor[*quant]=num;
			*quant=*quant+1;
		}
		else
		{
			printf("Nao sao permitidos numeros duplicados\n");
		}
	}
	
}

void removerValor(int vetor [], int capacidade, int *quant)
{
	int i, j, num; //declaraçao das variaveis
	
	printf("Qual numero deseja remover? ");
    scanf("%d", &num);
	
	for (i=0;i<*quant;i++)
	{
		if(vetor[i]==num)
		{
			j=i;
			
			for(j; j<*quant; j++)
			{
				vetor[j]=vetor[j+1];
			}
			*quant=*quant-1;
		}
	}
}

void removerElementoDaPosicao(int vetor [], int capacidade, int *quant)
{
	int i, num; //declaraçao das variaveis
	
	printf("Qual posicao deseja remover?");
	scanf("%d", &num);
	
	for (i=0;i<*quant;i++)
	{
		if(i==num)
		{
			for(num; num<*quant; num++)
			{
				vetor[num]=vetor[num+1];
			}
			*quant=*quant-1;
		}
	}
}

void alterarValores(int vetor [], int quant)
{
	int num1, num2, aux, i, arm;
	
	printf("Qual o valor que deseja trocar do vetor? ");
	scanf("%d", &num1);
	printf("Qual o novo valor? ");
	scanf("%d", &num2);
	
	for (i=0;i<quant;i++)
	{
		if(vetor[i]==num1)
		{
			arm=i;
		}
	}
	vetor[arm]=num2;
}

void buscarNumero(int vetor [], int quant)
{
	int num, i, arm=-1;
	
	printf("Qual numero deseja buscar no vetor?");
	scanf("%d", &num);
	
	for (i=0;i<quant;i++)
	{
		if(vetor[i]==num)
		{
			arm=i;
		}
	}
	printf("Sua posicao no vetor e %d\n", arm);
}

void exibirTodosVetor (int vetor[], int quant)
{
	//declaração de variáveis
	int i;
	
	printf ("\n\nVetor: ");
	
	//percorrendo todas as posições do vetor
	for (i=0;i<quant;i++)
	{
		printf ("%d ", vetor[i]);
	}
	
	printf ("\n\n");
}

void main ()
{
	int v[CAP], quant=0, n;
	
	do
    {
	    printf("Digite 1 para Insercao de um novo numero.\nDigite 2 para Remocao de determinado valor.\nDigite 3 para Remocao do elemento que encontra-se em uma dada posicao.\nDigite 4 para Alteracao de um valor por outro.\nDigite 5 para Busca de determinado numero, retornando a sua posicao.\n(caso exista no vetor) ou o valor -1 se nao for encontrado.\nDigite 6 para Exibicao de todos os elementos do vetor.\nDigite 0 para encerrar.\n");
	    scanf("%d", &n);
	
	    switch (n)
	    {
		    case 1 :
			    inserirNovoNumero(v, CAP, &quant);
			    break;
			
		    case 2 :
		    	removerValor(v, CAP, &quant);
			    break;
			
			case 3 :
				removerElementoDaPosicao(v, CAP, &quant);
				break;		
	    
	    	case 4 :
				alterarValores(v, quant);
				break;
	
	    	case 5 :
				buscarNumero(v, quant);
				break;
			
			case 6 :
				exibirTodosVetor(v, quant);
				break;	
    	}
	}
	while(n!=0);


}
