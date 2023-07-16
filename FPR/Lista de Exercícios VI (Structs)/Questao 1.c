/*Questão 01:
Uma loja de automóveis mantém os carros à
venda sob a forma de um vetor de structs
contendo as seguintes informações, para cada
veículo: placa, modelo, marca, cor,
quilometragem, ano modelo/fabricação (deve
ser um struct), valor e tipo (usado ou 0 km,
conforme o valor do campo quilometragem).
Pede-se a declaração de uma variável que
represente o estoque de veículos da loja,
incluindo todas as declarações de tipos que
possam ser necessárias.
Além disso, implementar as seguintes funções:
i. Exibir todos os carros do modelo m, ano de
fabricação entre a1 e a2 (inclusive), com
valor não superior a x reais;
ii. Reajustar os valores de todos os carros 0
km, considerando um aumento de 2.5%;
iii. Retirar do estoque um determinado veículo,
dada a sua placa.*/

#include<stdio.h>
#include<string.h>

#define TAM 3

typedef struct{
	int modelo, fabricacao;
}TAno;

typedef struct{
	char placa[8];
	char modelo[35];
	char marca[25];
	char cor [20];
	float quilome;
	TAno ano;
	float valor;
	char tipo [10];
	
}TCarro;

//prototipo das funções
void preencher(TCarro carro [], int quantCarros);
void exibirCarrosDesejado(TCarro carro [], int quantCarros, char mod[], int a1, int a2, float reais);
void reajustar(TCarro carro[], int quantCarros);
int retirar(TCarro carro[], int *quantCarros, char pla[]);
void exibirtodos(TCarro carro[], int quantCarros);


void main ()
{
	int quantCarros=TAM;
	char mod[35];
	char pla[8];
	int a1, a2;
	float reais;
	
	TCarro carro[quantCarros];
	
	preencher(carro, quantCarros);
	
	printf("Digite o modelo que deseja procurar: ");
	fflush(stdin);
	gets(mod);
	
	printf("Digite um ano antes ao lancamento do carro: ");
	fflush(stdin);
	scanf("%d", &a1);
	
	printf("Digite um ano depois ao lancamento do carro: ");
	fflush(stdin);
	scanf("%d", &a2);
	
	printf("O um valor maior que o do carro: ");
	fflush(stdin);
	scanf("%f", &reais);
	
	exibirCarrosDesejado(carro, quantCarros, mod, a1, a2, reais);
	
	reajustar(carro, quantCarros);
	
	printf("Digite a placa para remover um carro: ");
	fflush(stdin);
	gets(pla);
	
	retirar(carro, &quantCarros, pla);
	
	exibirtodos(carro, quantCarros);
	
	
}

void preencher(TCarro carro [], int quantCarros)
{
	int i;
	
	for(i=0; i<quantCarros; i++)
	{
		printf("Digite a placa: ");
		fflush(stdin);
		gets(carro[i].placa);
		
		printf("Digite o modelo: ");
		fflush(stdin);
		gets(carro[i].modelo);
		
		printf("Digite a marca: ");
		fflush(stdin);
		gets(carro[i].marca);
		
		printf("Digite a cor: ");
		fflush(stdin);
		gets(carro[i].cor);
		
		printf("Digite a quilometragem: ");
		fflush(stdin);
		scanf("%f", &carro[i].quilome);
		
		printf("Digite o ano do modelo: ");
		fflush(stdin);
		scanf("%d", &carro[i].ano.modelo);
		
		printf("Digite o ano de fabricacao: ");
		fflush(stdin);
		scanf("%d", &carro[i].ano.fabricacao);
		
		printf("Digite o valor: ");
		fflush(stdin);
		scanf("%f", &carro[i].valor);
		
		printf("Digite o tipo: ");
		fflush(stdin);
		gets(carro[i].tipo);
		printf("\n");
	}
	
}
	
void exibirCarrosDesejado(TCarro carro [], int quantCarros, char mod[], int a1, int a2, float reais)
{
	int i;
		
	for(i=0; i<quantCarros; i++)
	{
		if((strcmp(carro[i].modelo,mod)==0) && (a1<=carro[i].ano.fabricacao) && (carro[i].ano.fabricacao<=a2) && (reais>=carro[i].valor))
		{
			printf("Carro com placa\n");
			puts(carro[i].placa);
			printf("\n");
			
		}
	}
}
	
void reajustar(TCarro carro[], int quantCarros)
{
	int i;
	float reajust;
		
	for(i=0; i<quantCarros; i++)
	{
		if(carro[i].quilome==0)
		{
			printf("Carro com 0km rodado, Placa:\n");
			puts(carro[i].placa);
			printf("Preco antes do reajuste%.2f\n", carro[i].valor);
			reajust=carro[i].valor*0.025;
			carro[i].valor+=reajust;
			printf("Novo valor com reajuste %.2f\n", carro[i].valor);
		}
	}
}
	
int retirar(TCarro carro[], int *quantCarros, char pla[])
{
	int i;
		
	for(i=0; i< *quantCarros; i++)
	{
		if(strcmp(carro[i].placa,pla)==0)
		{
			carro[i]=carro[*quantCarros-1];	
			//carro[i]=carro[(*quantCarros)-1];	
			
			*quantCarros=*quantCarros-1;
			//(*quantCarros)--;
		}
	}
}

void exibirtodos(TCarro carro[], int quantCarros)
{
	int i;
	
	for(i=0;i<quantCarros;i++)
	{
		printf("\nCarro %d\n", i);
		
		printf("Placa: ");
		puts(carro[i].placa);
		
		printf("modelo: ");
		puts(carro[i].modelo);
		
		printf("marca: ");
		puts(carro[i].marca);
		
		printf("cor: ");
		puts(carro[i].cor);
		
		printf("quilometragem: %.2f\n", carro[i].quilome);
		
		printf("ano do modelo/fabricacao : %d/%d\n", carro[i].ano.modelo, carro[i].ano.fabricacao);
		
		printf("valor: %.2f\n", carro[i].valor);
		
		printf("tipo: \n");
		puts(carro[i].tipo);
		printf("\n");
	}
}
