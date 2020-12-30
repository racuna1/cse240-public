/**
 * Demostrates direct pointer manipulation.
 *
 * Completion time: ? minutes
 *
 * @author Chen
 * @version 1.0
*/

#include <stdio.h>

void main() {
	int n1 = 4, n2 = 8;
	int* pn1 = &n1, * pn2 = &n2;
	char c1 = 65, c2 = 66;
	char* pc1 = &c1, * pc2 = &c2;
	printf("n1 address = %d, n1 value = %d\n", pn1, *pn1);
	pn1 = pn1 + 1;
	printf("n1 address = %d, n1 value = %d\n", pn1, *pn1);
	printf("n2 address = %d, n2 value = %d\n", pn2, *pn2);
	printf("c1 address = %d, c1 value = %c\n", pc1, *pc1);
	pc1 = pc1 + 1;
	printf("c1 address = %d, c1 value = %c\n", pc1, *pc1);
	printf("c2 address = %d, c2 value = %c\n", pc2, *pc2);
}