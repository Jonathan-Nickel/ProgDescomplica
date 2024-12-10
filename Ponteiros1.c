/*23200579 - Jonathan Goulart Nickel */
#include <stdio.h>
int main () {
  int inteiro = 23, *Pinteiro;
  float real = 3.5, *Preal;
  char letra = 'J', *Pletra;
    
  Pinteiro = &inteiro;
  Preal = &real;
  Pletra = &letra;

  printf("Valor inteiro: %d\n", inteiro);
  printf("Valor real: %.2f\n", real);
  printf("Valor caractere: %c\n", letra);

  *Pinteiro = 20;
  *Preal = 5.8;
  *Pletra = 'N';
  
  printf("Valor inteiro: %d\n", inteiro);
  printf("Valor real: %.2f\n", real);
  printf("Valor caractere: %c\n", letra);

  return 0;
}