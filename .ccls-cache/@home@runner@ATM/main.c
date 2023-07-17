#include <stdio.h>

int main() {
  int n2, n5, n10, n20, n50, n100;
  int money;
  
  printf("Quanto você deseja sacar?\n");
  scanf("%d",&money);

  n100 = money/100;
  n50 = (money%100)/50;
  n10 = (money%50)/10;
  n5 = (money%10)/5;

  printf("\n%d notas de 100\n%d notas de 50\n%d notas de 10\n%d notas de 5", n100, n50, n10, n5);
  return 0;
}