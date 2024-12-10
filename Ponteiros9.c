/*23200579 - Jonathan Goulart Nickel */
#include <stdio.h>
int main () {
  float matriz[3][3];
  for (int i = 0; i <= 2; i++) {
    for (int j = 0; j <= 2; j++){
      printf("Posicao [%d][%d] da matriz, esta no endereco %p\n", i, j, &matriz[i][j]);
    } 
}
return 0;
}