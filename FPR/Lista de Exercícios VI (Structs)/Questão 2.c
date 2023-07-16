/*Quest�o 02:
Determinada zona eleitoral possui N eleitores
inscritos que poder�o votar, uma �nica vez, em
um dos C candidatos para o �nico cargo a ser
definido. Pede-se:
a. A declara��o de todo(s) o(s) tipo(s) de
dados necess�rio(s) para o armazenamento
dos n�meros dos candidatos, assim como a
quantidade de votos brancos, nulos e votos
para cada candidato;
b. Uma fun��o que leia o voto de cada eleitor,
considerando que o processo terminar�
quando os N eleitores votarem ou quando o
n�mero -1 for digitado como voto;
c. Uma fun��o que exiba:
i. O total de votos para cada candidato,
assim com a quantidade de votos
brancos (c�digo 0) e de nulos (c�digo
sem candidato associado);
ii. A quantidade de absten��es (eleitores
que n�o votaram);
iii. O n�mero do candidato vencedor (caso
tenha mais de 50% dos votos v�lidos) ou
dos que ir�o para o segundo turno (os
dois mais votados).
Notas:
a) o n�mero do candidato deve conter dois
algarismos apenas;
b) podem considerar que n�o haver� mais de
um candidato com a mesma quantidade de
votos.*/

#include<stdio.h>
#include<string.h>

#define TAM 3
#define TAMM 6


//nulo numero de candidato que nao existe
//branco 

typedef struct{
	int numero;
	char nome[40];
	char partido[10];
	int votos;
	int nulos;
	int branco;
	
}TCandidato;

void preencherCandidato(TCandidato candidato[], int tamanho)
{
	int i;
	
	for(i=0; i<tamanho; i++)
	{
		printf("Digite seu nome candidato: ");
		fflush(stdin);
		gets(candidato[i].nome);
		
		printf("Digite o nome do seu partido: ");
		fflush(stdin);
		gets(candidato[i].partido);
		
		printf("Digite seu numero: ");
		fflush(stdin);
		scanf("%d", &candidato[i].numero);	
		
		candidato[i].votos=0;
	}
}

void leituraVotos(TCandidato candidato[],int tamanho,int eleitor[], int *tamEleitor)
{
	int i, j, cont=0;
	
	printf("Voto em nulo qualquer numero\nVoto em branco digite 0\n");
	
	for(i=0; i<*tamEleitor; i++)
	{
		fflush(stdin);
		printf("Digite o numero do seu Candidato: ");
		fflush(stdin);
		scanf("%d", &eleitor[i]);
		
		if(eleitor[i]!=-1)
		{
			for(j=0; j<tamanho; j++)
			{
				if(eleitor[i]==candidato[j].numero)
				{
					candidato[j].votos++;
					cont=1;
				}
				else
				{
					if(eleitor[i]==0 && cont==0)
					{
						candidato[0].branco++;
						cont=1;
					}
				}
			}
			if(cont==0)
			{
				candidato[0].nulos++;
			}
			cont=0;
		}
		else
		{
			*tamEleitor=i;
		}
	}
}

void exibir(TCandidato candidato[], int tamanho, int tamEleitor, int tamEleitorOrigem)
{
	int i,j, abstencao, vencedor, segturno1, segturno2, cont=0;
	
	for(i=0; i<tamanho; i++)
	{
		printf("Candidato %s do partido %s recebeu %d votos\n", candidato[i].nome, candidato[i].partido, candidato[i].votos);
		
		if(candidato[i].votos>=tamanho/2 && cont==0)
		{
			vencedor=i;
			
			cont=1;
		}
	}
	printf("Votos em branco: %d\n", candidato[0].branco);
	printf("Votos em nulos: %d\n", candidato[0].nulos);
	
	abstencao=tamEleitorOrigem-tamEleitor;
	printf("Abstencao: %d\n", abstencao);
	
	if(cont==0)
	{
		printf("O Vencedor candidato %s do partido %s", candidato[vencedor].nome, candidato[vencedor].partido);
	}
	else
	{
		for(i=0; i<tamanho-1; i++)
		{
			for(j=i+1; j<tamanho; j++)
			{
				if(candidato[i].votos>candidato[j].votos)
				{
					if(i==0)
					{
						segturno1=i;
					}
					else
					{
						segturno2=i;
					}
				}
				else
				{
					if(i==0)
					{
						segturno1=j;
					}
					else
					{
						segturno2=j;
					}
				}
			}
		}
		printf("Candidatos do Segundo Turno %s do partido %s\n%s do partido %s", candidato[segturno1].nome, candidato[segturno1].partido, candidato[segturno2].nome, candidato[segturno2].partido);
	}
	
}

void main ()
{
	TCandidato candidato[TAM];
	int tamEleitor=TAMM;
	int eleitor[TAMM];
	
	candidato[0].branco=0;
	candidato[0].nulos=0;
	
	
	preencherCandidato(candidato,TAM);
	leituraVotos(candidato, TAM, eleitor, &tamEleitor);
	exibir(candidato,TAM, tamEleitor, TAMM);
	
	
}
