/*Quest�o 03 [2,5 pontos]:
Fazer um programa que simule uma calculadora,
atendendo aos seguintes requisitos:
i. Dever� ser exibido um menu ao usu�rio com as
seguintes op��es: (A) Soma, (B) Subtra��o; (C)
Multiplica��o; (D) Divis�o; (E) Limpar mem�ria; (F)
Sair;
ii. Todas as opera��es dever�o ser realizadas sobre
o conte�do armazenado na mem�ria,
inicialmente igual a 0. Por exemplo, caso o
usu�rio opte pela opera��o de soma, dever� ser
perguntado um valor e este ser� adicionado ao
que encontra-se na mem�ria, atualizando-o. A
mesma ideia � aplicada �s demais opera��es
aritm�ticas;
iii. O item de menu Limpar mem�ria consistir� em
reinici�-la com o valor 0;
iv. A execu��o do programa s� ser� conclu�da
quando o usu�rio escolher a op��o (f). Por�m,
antes do t�rmino da execu��o, deve ser exibido o
valor contido na mem�ria.*/

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
			
			//leitura da opera��o
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
			
			    //leitura da opera��o
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
			        
			        //leitura da opera��o
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
			
			            //leitura da opera��o
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
			
		    
