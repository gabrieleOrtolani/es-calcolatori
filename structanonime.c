#include <stdio.h>


struct scope{
	union{
	
		int num;
		char alpha;
	};
};

int main(void){
	struct scope x;
	
	for (int i=97; i<123; i++){
		x.num=i;
		x.alpha=(char)x.num;
		printf("%d\t",x.num);
		printf("%c\n",x.alpha);
		
	}


}
