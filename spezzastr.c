//Scrivere un programma C che, dato un vettore di caratteri 
//A di dimensione N (pari), scambi i
//primi N/2 elementi con i secondi N/2 e stampi il 
//contenuto di A prima e dopo la modifica.
#include <stdio.h>

int main(int argc, char *argv[])
{
	int n=6;
	char str[n];
	char str1[n];
	int center = n/2;
	printf("inserisci stringa da spezzare: \n" );
	scanf("%s",str);
	printf("hai inserito la parola: %s\n",str);
	for (int i=0;i<center;i++)
		str1[i]=str[center+i];
	for (int j=center;j<n;j++)
		str1[j]=str[j-center];
	printf("la stringa invertita a metà: %s\n",str1);
	return 0;
}