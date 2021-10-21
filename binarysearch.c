#include <stdio.h>

int BinarySearch(int A[], int n, int x){
	
	int low=0; 
	int high=n-1;
	
	while (low<=high){
		int mid= low+(high-low)/2;
		if (x==A[mid])
			return mid; // ho trovato la x esco
		else if (x<A[mid])
			high= mid-1;
		else
			low= mid+1;
	}
	return -1;
}
int main(int argc, char *argv[]){
	
	int A[] = {2,4,5,7,14,15,23};
	int x;
		printf("inseriscio un numero: ");
	scanf("%d",&x);
	int index= BinarySearch(A,8,x);
	if (index!=-1) {
		printf("il numero %d è all'indice %d\n ",x,index);}
	else {
		printf("il numero %d non è stato trovato\n",x);}
}
		
