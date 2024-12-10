/*23200579 - Jonathan Goulart Nickel */
#include <stdio.h>
int main () {
  int vetor[5];
  int *ponteiro = vetor;
  for (int i = 0; i <= 4; i++){
    scanf("%d", ponteiro + i);
  }
  for (int j = 0; j <= 4; j++){
    printf("%d ", *(ponteiro + j) * 2);
  }
  return 0;
}