#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){
	int n;
	printf("inserisci dimensione:\n ");
	scanf("%d",&n);
	printf("inserisci i %d elementi dell'array:\n",n);
	int arr[n];
	for (int i=0;i<n;i++)
		scanf("%d",&arr[i]);
		
		
		
	for (int j=0; j<n-1;j++)
	{
		if (arr[j]>arr[j+1]){
			printf("false");
			return 0;}
	}
	printf("true\n");
	return 1;
	puts("\n");

	}


	

