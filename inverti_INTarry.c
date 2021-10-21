//inverte l'ordine degli interi nella stringa
#include <stdio.h>

int main(int argc, char *argv[]){

    int dim;      // dimensione vettore
    
    
    printf("inserisci dimensione array: ");
    scanf("%d", &dim);
   
    printf("inserisci i %d interi:\n", dim);
   
    int arr1[dim]; 
    int arr2[dim];

    /* input valori di array 1 */
    for (int i=0; i<dim; i++) {
        int temp;
        scanf("%d", &temp);
        arr1[i] = temp;
    }
  


    for (int j=0; j<dim; j++) {
        arr2[j] = arr1[dim-j-1];
    }

    /* stampa array 2 */
    printf("[ ");
    for(int k=0; k<dim; k++) {
        printf("%d, ", arr2[k]);
    }
    printf("\b]");


    return 0;
}