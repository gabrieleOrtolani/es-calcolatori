#include <stdio.h>
#include <assert.h>


typedef enum type{
		INT,
		FLOAT,
		DOUBLE
} type_t;

typedef union operando{
	int i;
	float f;
	double d;
} operando_t;

void sum(type_t t, operando_t op1, operando_t op2)
{
	switch(t) {
			case INT:
				printf("%d + %d = %d\n",op1.i,op2.i,op1.i + op2.i);
				 break;
			case FLOAT:
				printf("%.01f + %.01f = %.01f\n",op1.f,op2.f,op1.f + op2.f);
				 break;
			case DOUBLE:
				printf("%.02lf + %.02lf = %.02lf\n",op1.d,op2.d,op1.d+op2.d); 
				break;
			default:
				printf("unexpected operand types.\n");			
	}
	
}

int main (int argc, char *argv[])
{
	assert(argc==2);
	
	//printf("%s\n",argv[1]);
	operando_t
		op11={ .i = 3},
		op12={ .i = 5},
		op21={ .f = 2.1f},
		op22={ .f = 3.8f},
		op31={ .d = 1.890},
		op32={ .d = 6.01};
		
	switch(*argv[1]){	
	 case 'i':
	 sum(INT,op11,op12); break;

	 case 'd': sum(FLOAT,op21,op22);break;
	 
	 case 'f' : sum(DOUBLE,op31,op32); break;
	 
	 default :
	 	printf("you passed %c something was wrong \n",*argv[1]);
	 
	 }
	return 0;
	}	
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	
		
		
