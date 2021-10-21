#include <stdio.h>
#include <stdlib.h>


int main(int arcg, char *argv[]){
	char stringa[]="esami di calcolatori elettronici ti amo marta";
	
	printf("la stringa contiene %ld caratteri\n",sizeof(stringa)/sizeof(char));
	
	int numcar= sizeof(stringa)/sizeof(char);
	char *p;
	

	int count=0;
	for (int i=0;i<numcar;i++){
		if (stringa[i]==' '){
			count +=1;
			int pos=i;
			buildArray(stringa,pos,numcar);
			
			
			}
	}

	
	

	
	printf("nella stringa ci sono %d parole\n",count+1);
	
	
	
	
	
	return 0;
}


void buildArray(char stringa[],int pos, int numcar) {
		
		char sottostringa1[];
		char *p;
		p=&sottostringa;
		
		
		for (int j=0;j<i;j++)
			sottostringa1[j]=stringa[j];
		
		showArray(p);
			
		return p;
		
}
		


























