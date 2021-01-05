/**
 * Reads an integer from the user and does a computation on it.
 *
 * Completion time: 1 minutes
 *
 * @author Acuna, Chen
 * @version 1.0
*/
#include <stdio.h>

int n = 5;

int main() {
	int i;
	printf("Enter an integer: ");
	scanf("%d", &i);

	if (i > n)
		n = n + i;
	else
		n = n - i;

	printf("i = %d, n = %d", i, n);

	return 0;
}