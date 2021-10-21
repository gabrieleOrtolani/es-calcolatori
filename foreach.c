/*
	Esercizio 10
	Scrivere un programma che, date due matrici di interi A (MxN) e B (NxM), verifichi se, per
	ogni riga di A, esiste una colonna di B i cui elementi sono uguali a quelli della riga di A
*/
#include <stdio.h>
#include <stdbool.h>

#define N 3
#define M 2

bool check_condition(int A[M][N], int B[N][M]);
bool check_auxiliary_condition_1(int A[M][N], int B[N][M], int row_A);
bool check_auxiliary_condition_2(int A[M][N], int B[N][M], int row_A, int col_B);


int main(void) {
	
	int mat1[M][N] = {{1,2,3},{4,5,6} };
	int mat2[N][M] = {{4,1},{5,2},{6,3} };

	if( check_condition(mat1, mat2) )
		printf("condizione verificata\n");
	else
		printf("condizione non verificata\n");

	return 0;
}


bool check_condition(int A[M][N], int B[N][M]) {

	for(int i=0; i<M; i++) {	// per ogni riga di A
		if( !check_auxiliary_condition_1(A, B, i) )	// negazione condizione ausiliaria 1
			return false;
	}

	return true;
}


bool check_auxiliary_condition_1(int A[M][N], int B[N][M], int row_A) {

	for(int j=0; j<M; j++) {	// esiste colonna di B
		if( check_auxiliary_condition_2(A, B, row_A, j) )	// esito condizione ausiliaria 2
			return true;
	}

	return false;
}


bool check_auxiliary_condition_2(int A[M][N], int B[N][M], int row_A, int col_B) {

	for(int i=0; i<N; i++) {	// scorro le righe di B con la colonna col_B fissata
		if( B[i][col_B]!=A[row_A][i] )		// confronto colonna di B con riga di A
			return false;
	}

	return true;
}