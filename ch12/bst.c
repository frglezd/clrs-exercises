#include <stdio.h>
#include <stdlib.h>

int main(){

	return 0;
}

void left(int x){

}

void inorder_tree_walk(int x){
	if(x == NULL){
		inorder_tree_walk(left(x));
		printf("%d", x);
		inorder_tree_walk(right(x));
	}
}
