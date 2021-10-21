#include <stdio.h>

int main() {
  int i,N,primonumero,secondonumero,terzonumero;

  printf("Quanti numeri della successione vuoi visualizzare? ");
  scanf("%d", &N);

  primonumero=1;
  secondonumero=1;

  printf("%d\n",primonumero);
  printf("%d\n",secondonumero);

  for(i=2;i<N;i++) {
      terzonumero=primonumero+secondonumero;
      primonumero=secondonumero;
      secondonumero=terzonumero;
      printf("%d\n",terzonumero);
  }
}

