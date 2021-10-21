/*
Scrivere una funzione che, data una stringa s, restituisce una lista di stringhe i cui elementi sono le parole che compongono s
*/
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>




int main(int argc, char *argv)
{

	typedef struct parole{
		struct parole *first;
		char *parola;
		struct parole *next;
	}words;
	
	int i=0,n=0;
	
	words* lista=(words*)malloc(sizeof(words));
	
	if (lista==NULL) return 1;
	
	words *temp=NULL;
	
	char stringa[10000000];
	for(int temp1 = 0; temp1 < 10000000; temp1++) {
		(temp1%2) ? stringa[temp1] = 'a' : (stringa[temp1] = ' ');
	}
			
	//char stringa[]="difhsoi fqoer gowe rgihwo erighoiwheirohg oiheoir hgohe righo iwehr oigh oiweh goiheirhgo ihweir  ghowe hrigo hweoihrgoihweroi ghoiwehrgiohwoiehrgoihwe oirhgiowehrghowierh giohweroi hgiwo ehrgihweoir ghoiwehrghwoiehr giohwergow ierghoi wheiorhgiowehrgweirgohwer hgoiw heoirghoiwheori ghiowehr goihwoierhgio eoi hgioweh rgoih weiorgiwoer hgowierhiogwhe rioghowerghoweir hgiow ergo wer gih eirg howehrogio ergh fh h";
	lista -> first = lista;
	lista -> parola = stringa;
	
	while(1){
		if (stringa[i]==0) 
			break;
		if (stringa[i]==32){
			stringa[i]=0;
			temp=(words*)malloc(sizeof(words));
			temp -> first = lista -> first;
			temp -> parola = &stringa[i+1];
			temp -> next = NULL;
			lista -> next = temp;
			lista = temp;
		}
	    i++;
	
	}
	
	lista = lista -> first;
	
	while (lista != NULL){
		printf("[%s],",lista -> parola);
		lista = lista -> next;
	}
	printf("\b \n");
	free(lista);
	return 0;
	
}	
		

