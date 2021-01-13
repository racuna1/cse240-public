#include <stdio.h>
#include <stdlib.h>
void func(int* n) {
	printf("n = %d\n", *n);
	*n = 30;
	printf("n = %d\n", *n);
	n = 0;	// if before printf: error!
}		// n is local, but *n is not

void main() {
	int* i = (int*)malloc(sizeof(int));
	*i = 15;
	func(i);
	printf("i = %d\n", *i);
	*i = 10;
	func(i);
	printf("i = %d\n", *i);
	free(i);
}
