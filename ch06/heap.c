#include <stdio.h>
#include <math.h>
#define length(array) (int) (sizeof((array))/ sizeof((array)[0]))

static int parent(int A[], int x){
	return *(A + (int) floor((x-1)/2));
}


static int lvalue(int A[], int x){
	return *(A + (int) floor((2*x+1)));
}

static int left(int A[], int x){
	return (int) floor((2*x+1)); // left(A,3) returns [node] 8
}

static int rvalue(int A[], int x){
	return *(A + (int) floor((2*x+2)));
}

static int right(int A[], int x){
	return (int) (floor(2*x+2));
}

static int maxheapify(int A[], int i){
	int l = left(A, i);
	int r = right(A, i);
	int largest, temp;

	if(l < length(A) && A[l] > A[i]){
		largest = l;
	} else{
		largest = i;
	}

	if (r <= length(A) && A[r] > A[largest]){
		largest = r;
	}
	if (largest != i){
		temp = A[i];
		A[i] = A[largest];
		A[largest] = temp;

		maxheapify(A, largest);
	}

	return A[largest];
}

int main(){
	//int length = sizeof(A)/sizeof(A[0]);
	int A[]= {10,20,30,40,50,60,70,80,90, 100, 110, 120, 130, 140, 150};

	printf("%d\n", length(A));
	printf("%d\n", maxheapify(A, 0));
	/*
	for (int i=0; i < length; i++){
	printf("parent vertex of arr[%d], value %d = %d\n", i, B[i], parent(B,i));
	}

	for(int i=0; i < length; i++){
		printf("right leaf of arr[%d], value %d = %d\n", i, B[i], right(B,i));
	}*/
	return 0;
}
