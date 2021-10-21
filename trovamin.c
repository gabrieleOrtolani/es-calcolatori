#include <stdio.h>

int main()
{   
    int *minimo, size, c, posizione = 1;
      
    printf("inserisci dimensione array: \n");
    scanf("%d", &size);
   
    printf("inserisci i %d interi: \n", size);
    int array[size];3
    for (c = 0; c < size; c++)
        scanf("%d", &array[c]);
  
    
    minimo= array;    
    *minimo = *array;

    for (c=0;c<size;c++)
    	printf("%d - ",array[c]);
  	
    puts("\n");
    
    
    for (c = 1; c < size; c++){
        if (*(array+c) < *minimo){
           *minimo = *(array+c);
           posizione = c+1;
        }
    }
    printf("il minimo si trova nella posizione %d e vale %d\n", posizione, *minimo);
    return 0;
}
