/*23200579 - Jonathan Goulart Nickel */
#include <stdio.h>
int main () {
  int variavel1, variavel2;
  if(&variavel1 > &variavel2){
    printf("%p\n",&variavel1);
  } else {
    printf ("%p\n", &variavel2);
  }
  return 0;
}