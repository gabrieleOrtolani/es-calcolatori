#include <stdio.h>
#define M 4
#define N 4

int main (int argc, char *argv[]){
	int A[M][N]={{1,0,0,0},{0,0,5,0},{0,0,0,6},{0,3,0,0}};
	int B[M][3];
	
	for (int i=0;i<M;i++)
		for(int j=0;j<N;j++){
			if (A[i][j]!=0){
				printf("elemento x != c0 : %d\n",A[i][j]);
				B[i][0]=A[i][j];
				B[i][1]=i;
				B[i][2]=j;
				
			}
				
	}
	puts("----------------------\n");
	printf("x\ti\tj\n");
	for (int z=0;z<M;z++){
	for (int k=0;k<3;k++){
		printf("%d\t",B[z][k]);}
		puts("\n");}
	
	puts("\n");
	
	
	
	return 0;}
	
	
			
				
				
				
		
	
	
