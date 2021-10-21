#include <stdio.h>

int BinarySearch1(int A[],int low,int high,int x)
{
	if (low>high) return -1;
	int mid= low+(high-low)/2;
	if (x==A[mid]) return mid;
	else if (x<A[mid]) return BinarySearch1(A,low,mid-1,x);
	else return BinarySearch1(A,mid+1,high,x);
}


int main(int argc, char *argv[]){
	
	int A[] = {2,4,5,7,14,15,23};
	int low=0;
	int high=6;
	int x;
	printf("inseriscio un numero: ");
	scanf("%d",&x);
	int index= BinarySearch1(A,low,high,x);
	if (index!=-1) {
		printf("il numero %d è all'indice %d\n ",x,index);}
	else {
		printf("il numero %d non è stato trovato\n",x);}
}	













																																																																																																																											
