#include <stdio.h>
int main(int argc, char *argv[])
{
	int arr[4]={1,2,3,4};
	int arr2[4];
	int *ptr;
	int *p;

	ptr=arr;
	*ptr=*arr;
	p=arr2;
	*p=*arr2;


	for (int i=0; i<4;i++){
		*(p+i)=(ptr+i);
		printf("elemento %d di arr2: %p \t elemento a qui punta di arr:%d \n",i,&p[i], ptr[i]);
	}

	return 0;
}
