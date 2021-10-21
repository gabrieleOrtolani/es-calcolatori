#include <stdio.h>

int main()

{
  int c, n, f = 1;
  
  printf("inserisci il numero per calcolare il suo fattoriale \n");
  scanf("%d",&n);
  for (c=1; c<=n; c++)
    f=f*c;
    
  printf("il fattoriale di %d equivale a: %d\n", n ,f);
  
  
  return 0;
  


}
