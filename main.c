#include <stdio.h>

int main() {
  int n2, n5, n10, n20, n50, n100;
  int money, aux1, aux2;
  int u, d, c, m;
  
  printf("Quanto você deseja sacar?\n");
  scanf("%d",&money);

  m = money/1000;
  c = (money/100) - 10*m;
  d = (money/10) - 100*m - 10*c;
  u = money - 1000*m - 100*c - 10*d;

  n100 = money/100;
  n50 = (money%100)/50;
  if (money%2 == 0){
    n10 = (money%50)/10;
    n5 = 0;
    n2 = (money%10)/2;
  }else{
    if(u<5){
      n10 = ((money%50)/10)-1;
      aux1 = money-((n100*100)+(n50*50)+(n10*10));
      n5 = (aux1/5)-1;
      aux2 = money-((n100*100)+(n50*50)+(n10*10)+(n5*5));
      n2 = (aux2/2);
    }else{
      n10 = (money%50)/10;
      n5 = (money%10)/5;
      n2 = (money%5)/2;
    }
  }

  printf("\n%d notas de 100\n%d notas de 50\n%d notas de 10\n%d notas de 5\n%d notas de 2", n100, n50, n10, n5, n2);
  return 0;
}