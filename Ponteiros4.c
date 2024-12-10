/*23200579 - Jonathan Goulart Nickel */
#include <stdio.h>
void troca (int *valorA, int *valorB);

int main () {
  int valorA, valorB;
  scanf("%d",&valorA);
  scanf("%d",&valorB);
  troca (&valorA, &valorB);
  printf ("O valor A eh %d e o valor B eh %d\n", valorA, valorB);
  return 0;
}
void troca (int *valorA, int *valorB) {
  int intermediario;
  intermediario = *valorA;
  *valorA = *valorB;
  *valorB = intermediario;
}