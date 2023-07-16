/*Questão 03 [2,5 pontos]:
Fazer um programa que simule uma calculadora,
atendendo aos seguintes requisitos:
i. Deverá ser exibido um menu ao usuário com as
seguintes opções: (A) Soma, (B) Subtração; (C)
Multiplicação; (D) Divisão; (E) Limpar memória; (F)
Sair;
ii. Todas as operações deverão ser realizadas sobre
o conteúdo armazenado na memória,
inicialmente igual a 0. Por exemplo, caso o
usuário opte pela operação de soma, deverá ser
perguntado um valor e este será adicionado ao
que encontra-se na memória, atualizando-o. A
mesma ideia é aplicada às demais operações
aritméticas;
iii. O item de menu Limpar memória consistirá em
reiniciá-la com o valor 0;
iv. A execução do programa só será concluída
quando o usuário escolher a opção (f). Porém,
antes do término da execução, deve ser exibido o
valor contido na memória.*/

#include<stdio.h>

void main ()
{
	//declaracao das variaveis
	int numero=0, operacao=0, i;
	char escolha;
	
	//leitura das variaveis
	printf("escolha a opcao desejada:\nDigite A para soma\nDigite B para subtracao\nDigite C para multiplicacao\nDigite D para divisao\nDigite E para limpar memoria\nDigite F para sair\n");
	scanf("%c", &escolha);
	escolha = toupper (escolha);
	

	for(i=1; i>=0; i++)
	{
	
	        while(i>=0)
	        {
	        	
	
			if(escolha = 'A')
			{
			
			//leitura da operação
			printf("escolha um numero para somar: ");
			scanf("%d", &operacao);
			
			//calculo
			numero+=operacao;
			
			operacao*=0;
		    }
		    else
		    {
		    	if(escolha = 'B')
		        {
			
			    //leitura da operação
			    printf("escolha um numero para subtrair: ");
			    scanf("%d", &operacao);
			
			    //calculo
			    numero-=operacao;
			
			    operacao*=0;
		        }
		        else
		        {
		        	if(escolha = 'C')
		            {
			        
			        //leitura da operação
		         	printf("escolha um numero para multiplicar: ");
			        scanf("%d", &operacao);
			        
			        //calculo
			        numero*=operacao;
			
			        operacao*=0;
			        }
			        else
			        {
			        	if(escolha = 'D')
		                {
			
			            //leitura da operação
			            printf("escolha um numero para dividir: ");
			            scanf("%d", &operacao);
			            
			            //calculo
			            numero/=operacao;
			
			            operacao*=0;
			            }
			            else
			            {
			            	if(escolha = 'E')
		                    {
			                
			                //zerar o numero
		                    numero*=0;
			                break;
		                    }
		                    else
		                    {
		                    	if(escolha = 'F')
		                        {
			                    
			                    //fim
			                    i*=0;
		                        }
			
	                        }

                        }
			        }
			
		    
				}
		
		    
		    }
			
		    
		}
			
		    
	}
	printf("valor final %d", numero);
	
}
			
		    
