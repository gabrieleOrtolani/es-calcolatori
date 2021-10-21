#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <assert.h>
int insertionSort(int *A,int n);
int insertionSort(int *A,int n){
    for(int i=1;i<n;i++){
    	int temp=A[i];
    	int j=i;
    	while(j>1 && A[j-1]>temp){
    		A[j]=A[j-1];
    		j=j-1;
    	}
    	A[j]=temp;		
    }
    puts("lista ordinata: \n");
    for (int k=1;k<n;k++) printf("%d-",A[k]);
    puts("\n");
}

int main(int argc, char *argv[])
{	
	assert(argc==2);
	int n= atoi(argv[1]);
	int *A=(int*)malloc(n*sizeof(int));
	
	
	
	srand(time(NULL));   
    //int r = rand();
	for (int i=0;i< n;i++) A[i]=(double)rand()/RAND_MAX*10000000;
	insertionSort(A,n);
	
	free(A);
	return 0;
	}
		
