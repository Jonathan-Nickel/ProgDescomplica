/*23200579 - Jonathan Goulart Nickel */
#include <stdio.h>
int main () {
  float vetor[10];
    for (int i = 0; i<= 9; i++){
      printf("%p ",&vetor[i]);
  }
  printf("\n");
  return 0;
}