#include <stdio.h>
#include <stdlib.h>
#include<stddef.h>

int main(void)
{
   typedef struct parole {
        struct parole * first;
        char * parola;
        struct parole * next;
    } PAROLE;
 int i=0,n=0;
 PAROLE * lista=(PAROLE*)malloc(sizeof (PAROLE)); 
 if (lista==NULL) return 1;
 PAROLE * temp=NULL;
 char stringa[]="esame di calcolatori";
 lista->first=lista;
 lista->parola=stringa;
 
 while(1)
 {
     if(stringa[i]==0)
     break;
     if(stringa[i]==32)
     {
     stringa[i]=0;
     temp=(PAROLE*)malloc(sizeof(PAROLE));
     temp->first=lista->first;
     temp->parola=&stringa[i+1];
     temp->next=NULL;
     lista->next=temp;
     lista=temp;
     }
     
     i++;
 }
 lista=lista->first;
while(lista!=NULL)
 {
 
 printf("[%s]\t",lista->parola);
 lista=lista->next;
 }
    return 0;
}
