#include <stdio.h>

int main(void) {
  //variavel
  int pontos ;

  // entrada de dados
  printf("Digite a quantidade de acertos:" );
  scanf("%d",&pontos);
  
// comandos if-else
  if ((pontos == 0) || (pontos <= 49))
    printf("Conceito D");
  else
  if ((pontos == 50 )||(pontos <= 69))
      printf("Conceito C");
  else
    if ((pontos==70)||(pontos<=89))
        printf("Conceito B");
  else
    if ((pontos == 90)||(pontos <= 100))
        printf("Conceito A");
  

  
  
    
  
}