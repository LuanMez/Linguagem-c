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
      printf("Digite a nota do usu�rio!\n");
      //Primeira altera��o de &[i] para &nota[i]
      scanf("%f", &nota[i]);

  }

  //Segunda altera��o um la�o for para imprimir as notas coletadas
  for(i = 0; i < 5; i++)
  {
      printf("As notas digitadas foram %.2f\n", nota[i]);
  }
  return 0;
}
