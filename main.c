#include <stdio.h>

int main() {
  int n2, n5, n10, n20, n50, n100;
  int money;
  
  printf("Quanto você deseja sacar?\n");
  scanf("%d",&money);

  n100 = money/100;
  n50 = (money%100)/50;

  printf("\n%d notas de 100\n%d notas de 50",n100,n50);
  return 0;
}