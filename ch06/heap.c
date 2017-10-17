#include <stdio.h>
#include <math.h>

static double parent(double x);
static double left(double x);
static double right(double x);


double parent(double x){
	return floor((x-1)/2); // indice 0
}



double left(double x){
	return floor((2*x+1));
}

double right(double x){
	return floor(2*x+2);
}

int main(){
	double A[]= {0,1,2,3,4,5,6,7,8,9,10};
	int length = sizeof(A)/sizeof(A[0]);

	for(int i=0; i < length; i++){
	printf("A[%d]= %1lf\n", i, parent(A[i]));
	}

	printf(" %1lf\n", *(A+14));

	return 0;
}
