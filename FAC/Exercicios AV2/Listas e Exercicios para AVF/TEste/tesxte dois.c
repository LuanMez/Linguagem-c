#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int i = 0;
  float nota[5];
  float total = 0, media = 0;

  for(i = 0; i < 5; i++)
  {
      printf("Digite a nota do usuário!\n");
      //Primeira alteração de &[i] para &nota[i]
      scanf("%f", &nota[i]);

  }

  //Segunda alteração um laço for para imprimir as notas coletadas
  for(i = 0; i < 5; i++)
  {
      printf("As notas digitadas foram %.2f\n", nota[i]);
  }
  return 0;
}
