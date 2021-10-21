//scrivere un programma che data una matrice verifica se essa 
// è diagonale, se non lo è verificare se è triangolare superiore 
// o inferiore
#include <stdio.h>
int verificaDiagonale(int N, int arr[N][N]);
int verificaTringolareSuperiore(int N, int arr[N][N]);



int verificaDiagonale(int N, int arr[N][N]){
	for (int i=0; i<N; i++){
		for(int j=0;j<N;j++){
			if ((i!=j && arr[i][j])!=0)
				return 0;
		}
	}
	
	return 1;		
}

int verificaTringolareSuperiore(int N, int arr[N][N]){
	for (int i=0; i<N; i++){
		for(int j=0;j<N;j++){
			if ((i>j && arr[i][j])!=0)
				return 0;
		}
	}
	
	return 1;		
}

int verificaTringolareInferiore(int N, int arr[N][N]){
	for (int i=0; i<N; i++){
		for(int j=0;j<N;j++){
			if ((i<j && arr[i][j])!=0)
				return 0;
		}
	}
	
	return 1;		
}


int main(int argc, char *argv[]){
	int N;
	printf("inserire dimensione matrice NxN: \n");
	scanf("%d",&N);

	int arr[N][N];
	for (int i=0; i<N; i++){
		for(int j=0;j<N; j++){
			printf("inserisci l'elemento alla riga %d e colonna %d: \n",i,j);
			scanf("%d",&arr[i][j]);
		}
	}


	if((verificaDiagonale(N,arr))==1){
		printf("è diagonale");
	}else{
		if((verificaTringolareInferiore(N,arr))==1){
			printf("è trinagolare inferiore\n");
		}else{
			printf("non è triangolare inferiore\n");
		}
		
		if((verificaTringolareSuperiore(N,arr))==1){
			printf("è trinagolare superiore\n");
		}else{
			printf("non è triangolare sureriore\n");
		}
		
			
		
	}

}
					
	

