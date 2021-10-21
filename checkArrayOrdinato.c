#include <stdio.h>

int check(int n, int arr[n]);

int main(int argc, char *argv[]){
	int n=4;
	int arr[4]={1,2,24,100};
	
	if (check(n,arr)==1){
		printf("ordinata");}
	else{
		printf("non ordinata");}
		
	return 0;
}
	
	
	
	
int check(int n, int arr[n]){
	if (n<=1){
		return 1;}
	else{
		return arr[0]<arr[1] && check(n-1,&arr[n-1]);
	}
	
	}
