#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <assert.h>
#include <time.h>
#define N 4

struct punto {
	double x;
	double y;
};

typedef struct punto point_xy;

double distance(point_xy *punto_1, point_xy *punto_2);

int main (int argc, char *argv[]){
	srand(time(NULL));
	
	point_xy *point;
	point = (point_xy *)malloc (sizeof(point_xy)*N);
	

	assert(point !=NULL); //controllo che poi non punti a NULL
	
	/*popolo la lista di punti*/
	point_xy *pos = point;
	for (int i=0;i<N;i++){
		pos->x= (double) rand();
		pos->y= (double) rand();
		
		printf("punto n° %d\n",i);
		printf("\tx:%.lf\n",pos->x);
		printf("\ty:%.lf\n",pos->y);
		
		pos++;
	}
	
	/*calcolo i punti con maggior distanza*/
	double dist_max=0;
	double dist;
	int ind[2];
	struct punto *ris1 = NULL;
	struct punto *ris2 = NULL;
	
	for(int k=0;k<N;k++){
		for(int j=k+1;j<N;j++){
			dist=distance((point+k),(point+j));
			printf("la distanza (n°%d - n°%d): %f\n",k,j,dist);
			if (dist >= dist_max){
				dist_max=dist;
				ris1=(point+k);
				ris2=(point+j);
				ind[0]=k;
				ind[1]=j;
			}	
		}
	}
	
	printf("la massima distanza è stata misurata tra il punto n°%d e il punto n°%d\n",ind[0],ind[1]);
	printf ("\tpunto 1x: %.lf\n",ris1->x);
	printf ("\tpunto 1y: %.lf\n",ris1->y);	
	printf ("\tpunto 2x: %.lf\n",ris2->x);
	printf ("\tpunto 2y: %.lf\n",ris2->y);		
}	
	
double distance(point_xy *punto_1, point_xy *punto_2){
/*		@param punto_1 @param punto_2: punt a struttura punto
		return duoble distanza
*/
		double a=pow((punto_1->x)-(punto_2->x),2);
		double b=pow((punto_1->y)-(punto_2->y),2);
		return (double)sqrt(a*b);
	}
		
		
	













	
	
	
	
	
	

