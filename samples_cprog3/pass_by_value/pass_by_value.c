#include <stdio.h>

int i = 1;			// i is a global variable

void func(int m, int n) {	// m and n are formal parameters
	printf("i = %d  m = %d  n = %d\n", i, m, n);
	i = 5; m = 3; n = 4;		// Modify i, m and n.
	printf("i = %d  m = %d  n = %d \n", i, m, n);
}

void main() {
	int j = 2;			// j is a local variable 
	func(i, j); 			// i and j are actual parameters
	printf("i = %d  j = %d\n", i, j);
}
