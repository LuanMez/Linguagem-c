/*Quest�o 04:
Suponha a exist�ncia de um vetor de tamanho
TAM, cada posi��o armazenando o nome da
pessoa e a sua data de anivers�rio
(representada por um struct do tipo TData,
contendo os campos dia e mes). Pede-se o
desenvolvimento das seguintes fun��es:
? Determinar a quantidade de pessoas que
fazem anivers�rio no m�s M;
? Exibir os nomes de todas pessoas que fazem
anivers�rio entre as datas d1 e d2, ambas
do tipo TData.*/


//importa��o de bibliotecas
#include<stdio.h>
#include<string.h>

//definindo de constantes
#define TAM 5

//defini��o de tipos
typedef struct{
	int dia;
	int mes;
}TData;

typedef struct{
	char nome[40];
	TData data;
	
}TPessoa;

//fun��o que preenche o vetor de struct
void preencher(TPessoa pessoa[], int tamanho)
{
	int i;
	
	for(i=0; i<tamanho; i++)
	{
		printf("Digite seu nome: ");
		fflush(stdin);
		gets(pessoa[i].nome); //armazena o nome da pessoa
		
		printf("Digite o dia do seu aniversario: ");
		fflush(stdin);
		scanf("%d", &pessoa[i].data.dia); //armazena o dia da pessoa
		
		printf("Digite o dia do seu mes: ");
		fflush(stdin);
		scanf("%d", &pessoa[i].data.mes); //armazena o mes da pessoa
	}
}

//fun��o que acha as pessoas que fazem aniversario no mes escolhido e retorna como ponteiro
int aniversariantesMes(TPessoa pessoa [],int tamanho, int mes)
{
	int i, cont=0; //cont armazena todas as pessoas que fazem aniversario no mes escolhido
	
	for(i=0; i<tamanho; i++)
	{
		if(pessoa[i].data.mes==mes)
		{
			cont++;
		}
	}
	
	return cont; //passando o valor das pessoas para a main
}

//fun��o que exibe o nome das pessoas que fazem aniversario entre data1 e data2
void exibirnome(TPessoa pessoa[], int tamanho, TData data1, TData data2)
{
	int i;
	
	printf("Pessoa que faz aniversario entre dia %d/%d eh %d/%d\n", data1.dia, data1.mes, data2.dia, data2.mes);
	
	for(i=0; i<tamanho; i++)
	{
		//encontrando as pessoas que fazem aniversario entre data1 e data2
		if((pessoa[i].data.dia>=data1.dia) && (pessoa[i].data.mes>=data1.mes) && (pessoa[i].data.dia<=data2.dia) && (pessoa[i].data.mes<=data2.mes))
		{
			printf("%s\n", pessoa[i].nome); //exibindo cada pessoa que a condi��o seja verdadeira
		}
	}
}

//main
void main ()
{
	//declara��o das variaveis
	TPessoa pessoa[TAM];
	TData data1, data2;
	int mes, finalMes;
	
	//invocando a fun��o preenchero vetor struct
	preencher(pessoa, TAM);
	
	//armazenando na variavel mes o mes desejado
	printf("Digite o mes que queira achar os aniversariantes: ");
	fflush(stdin);
	scanf("%d", &mes);
	
	//fun��o que retorna quantidade de pessoas que fazem niver em tal mes
	finalMes=aniversariantesMes(pessoa, TAM, mes);
	
	//exibindo o valor das pessoas achadas no mes
	printf("Numero de pessoas que fazem aniversario no mes %d eh %d\n", mes, finalMes);
	
	//armazenando os dias data1 e data2
	printf("Digite data1 dia e mes(menor) e data2 dia e mes(maior) para ver quem faz aniversario entre elas: ");
	fflush(stdin);
	scanf("%d %d %d %d", &data1.dia, &data1.mes, &data2.dia, &data2.mes);
	
	//exibindo as pessoas que fazem niver entre data1 e data2
	exibirnome(pessoa, TAM, data1, data2);
}
