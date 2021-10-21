#include <stdio.h>
#include <string.h>



int main(int argc, char *argv[])
{
	char stringa[8]= "gabriele";
	char alfabeto[21]= "abcdefghilmnopqrstuvz";
	int arr[21]={0};
	int count=0;
	for (int i=0;i<8;i++){
		for (int j=0;j<21;j++){
			if (stringa[i]==alfabeto[j]){
				arr[j]+=1;
			}
		}		
	}
	for (int k=0;k<21;k++)
		printf("la lettera %c è ripetuta %d volte\n",alfabeto[k],arr[k]);
		
}
