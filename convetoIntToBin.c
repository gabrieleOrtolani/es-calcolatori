#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


// definisco al preprocessore la costante di preprocessamento MAX_BITS come tipo intero lungo quanto
// la massima lunghezza del bit che la macchina può usare per rapppresentare un usigned int
#define MAX_BITS (int)(sizeof(unsigned int) * CHAR_BIT) 	// la lunghezza di unsigned int moltiplicata per il numero dei bit che compone un char

char string[MAX_BITS + 1];	// il +1 serve a poter inserire il terminatore di stringa

char *print_bits(unsigned int value);	//dichiarazione in avanti  print_bits che prende unsigned int e mi restituisce un char*

int main(int argc, char *argv[]) {
	unsigned int a = 1025, sa; 	// inizzializzo a, dichiaro sa
	int b = -1025, sb; 	// inizzializzo b, dichiaro sb

	sa = a >> 2;	// prendo la stringa binari e shifto a destra di due pos (divido per 4)
	sb = b >> 2;	// stessa coda di sa

	// stampo i valori binari tramite print_bits	
	printf("a\t\t= %03d (%s)\n", a, print_bits(a));
	printf("after shift\t= %03d (%s)\n\n", sa, print_bits(sa));
	printf("b\t\t= %04d (%s)\n", b, print_bits(b));
	printf("after shift\t= %04d (%s)\n", sb, print_bits(sb));

	return 0;
}

char *print_bits(unsigned int value) 	// prendo il mio usigned bit e restituire una stringa con i bit ordinati 
{
	int i;
	char *p;	// punta a qualcosa
	
	p = string + MAX_BITS;	// inizzializzo il puntatore che punta l'ultimo elemento valido della stringa perchè ce il +1
	p[0] = 0;	// grazie al +1 ci infilo il terminatore di stringa che viene autocastato a NULL
	
	for(i = 0; i < MAX_BITS; i++) {
	    *--p = value & 1 ? '1' : '0'; // prendo p lo predecremento, lo uso e lo deferenzio(vado in memoria), controllo
	    value >>= 1;
	}
	return string;
}


