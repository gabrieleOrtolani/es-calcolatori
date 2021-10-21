#include<stdio.h>


void bubblesort(int n, int *arr){
	int temp;
	int end; //ultimo 
	int lastexchange;// ultimo scambio
	int exchange;//FLAG scambio 

	end = 0;
	// while there are exchanges, check and swap
	do{
		exchange = 0;
		for (int i = n-1; i > end; i--)
		{
			if (arr[i]<arr[i-1])
			{
				temp= arr[i];
				arr[i]=arr[i-1];
				arr[i-1]=temp;
				exchange=1;
				lastexchange=1;

			}
		}
		end=lastexchange;

	}while(exchange!=0);


    printf("vettore ordinata con bubblusort: [");
	for (int j = 0; j < n; j++)
	{
		printf("%d  ",arr[j]);
	}
	printf("\b ]\n");
	//printArray(n,arr);	

}//chiude void

/*
void printArray(int n, int *arr){
    printf("vettore ordinata con bubblusort: [");
	for (int j = 0; j < n; j++)
	{
		printf("%d  ",arr[j]);
	}
	printf("\b ]\n");

}

void createArray(int n, int *arr){

	printf("inserisci dimensione:\n");
	scanf("%d",&n);

	printf("inserisci elementi matrice: \n");


	for(int i=0; i<n;i++)
		scanf("%d",&arr[i]);



}
*/


int main(void)
{
	int n;
	printf("inserisci dimensione:\n");
	scanf("%d",&n);

	printf("inserisci elementi matrice: \n");

	int arr[n];
	for(int i=0; i<n;i++)
		scanf("%d",&arr[i]);


	/*createArray(n,arr);*/

	bubblesort(n,arr);
	return 0;
}