/*Questão 01 [2,5 pontos]:
Desenvolver uma função que, dado um número inteiro
n no intervalo de 1 a 999, escreva-o por extenso.
Caso o valor não esteja no intervalo especificado, a
função deverá retornar o valor 0; caso contrário,
exibirá o número por extenso e retornará 1.*/

#include<stdio.h>

void extenso(int num, int *retorno, int *resto, int *resto1, int *resto2)
{
	
	if(num>=1 && num<=999)
	{
		*resto=num/100;
		*resto*=100;
		*resto1=num%100;
		*resto2=*resto1%10;
		*resto1/=10;
		*resto1*=10;
		*retorno=1;
	}
	else
	{
		*retorno=0;
	}
}

void main ()
{
	int n, retorno, resto, resto1, resto2;
	
	printf("Qual valor deseja por em extenso entre 1 a 999: ");
	scanf("%d", &n);
	
	extenso(n, &retorno, &resto, &resto1, &resto2);
	
	
	
	if(retorno==0)
	{
		printf("valor %d\n", retorno);
	}
	else
	{
		if(retorno==1)
		{
			printf("valor %d\n", retorno);
			
			if(resto==0)
			{
			
			}
			else
			{
				if(resto==100 && resto1==0 && resto2==0)
				{
					printf("cem");
				}
				else
				{
					if(resto==100)
					{
						printf("cento ");
					}
					else
					{
						if(resto==200)
						{
							printf("duzentos ");
						}
						else
						{
							if(resto==300)
							{
								printf("trezentos ");
							}
							else
							{
								if(resto==400)
								{
									printf("quatrocentos ");
								}
								else
								{
									if(resto==500)
									{
										printf("quinhentos ");
									}
									else
									{
										if(resto==600)
										{
											printf("seiscentos ");
										}
										else
										{
											if(resto==700)
											{
												printf("setecentos ");
											}
											else
											{
												if(resto==800)
												{
													printf("oitocentos ");
												}
												else
												{
													if(resto==900)
													{
														printf("novecentos ");
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		if(resto1==0)
		{
			
		}
		else
		{
			if(resto1==10 && resto2==0)
			{
				printf("dez");
			}
			else
			{
				if(resto1==10 && resto2==1)
				{
					printf("onze");
				}
				else
				{
					if(resto1==10 && resto2==2)
					{
						printf("doze");
					}
					else
					{
						if(resto1==10 && resto2==3)
						{
							printf("treze");
						}
						else
						{
							if(resto1==10 && resto2==4)
							{
								printf("quatorze");
							}
							else
							{
								if(resto1==10 && resto2==5)
								{
									printf("quinze");
								}
								else
								{
									if(resto1==10 && resto2==6)
									{
										printf("dezesseis");
									}
									else
									{
										if(resto1==10 && resto2==7)
										{
											printf("dezessete");
										}
										else
										{
											if(resto1==10 && resto2==8)
											{
												printf("dezoito");
											}
											else
											{
												if(resto1==10 && resto2==9)
												{
													printf("dezenove");
												}
												else
												{
													if(resto1==20)
													{
														printf("vinte ");
													}
													else
													{
														if(resto1==30)
														{
															printf("trinta ");
														}
														else
														{
															if(resto1==40)
															{
																printf("quarenta ");
															}
															else
															{
																if(resto1==50)
																{
																	printf("cinquenta ");
																}
																else
																{
																	if(resto1==60)
																	{
																		printf("sessenta ");
																	}
																	else
																	{
																		if(resto1==70)
																		{
																			printf("setenta ");
																		}
																		else
																		{
																			if(resto1==80)
																			{
																				printf("oitenta ");
																			}
																			else
																			{
																				if(resto1==90)
																				{
																					printf("noventa ");
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		if(resto2==0)
		{
			
		}
		else
		{
			if(resto2==1 && resto1!=10)
			{
				printf("um");
			}
			else
			{
				if(resto2==2 && resto1!=10)
				{
					printf("dois");
				}
				else
				{
					if(resto2==3 && resto1!=10)
					{
						printf("tres");
					}
					else
					{
						if(resto2==4 && resto1!=10)
						{
							printf("quatro");
						}
						else
						{
							if(resto2==5 && resto1!=10)
							{
								printf("cinco");
							}
							else
							{
								if(resto2==6 && resto1!=10)
								{
									printf("seis");
								}
								else
								{
									if(resto2==7 && resto1!=10)
									{
										printf("sete");
									}
									else
									{
										if(resto2==8 && resto1!=10)
										{
											printf("oito");
										}
										else
										{
											if(resto2==9 && resto1!=10)
											{
												printf("nove");
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
		}
	}
