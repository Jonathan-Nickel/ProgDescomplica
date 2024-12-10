/*23200579 - Jonathan Goulart Nickel */
#include <stdio.h>
void funcao (int *valorA, int *valorB);

int main() {
  int valorA, valorB;
  scanf("%d",&valorA);
  scanf("%d",&valorB);
  funcao(&valorA, &valorB);
  printf("O maior eh %d e o menor eh %d\n", valorA, valorB);
  return 0;
}
void funcao (int *valorA, int *valorB){
  int intermediario;
  if (*valorB > *valorA) {
    intermediario = *valorA;
    *valorA = *valorB;
    *valorB = intermediario;
  }
}