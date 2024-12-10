/*23200579 - Jonathan Goulart Nickel */
#include <stdio.h>
int main () {
  int variavel1, variavel2;
  scanf("%d",&variavel1);
  scanf("%d",&variavel2);
  if(&variavel1 > &variavel2){
    printf("%d\n",variavel1);
  } else {
    printf ("%d\n",variavel2);
  }
  return 0;
}