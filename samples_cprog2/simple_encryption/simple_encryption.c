/* The purpose of this program is to demonstrate operations on strings defined as an array of
   characters and a string associated with a pointer. The former is a variable string, whereas the
   latter is a constant that cannot be modified. */
#include <stdio.h>
void main() {
	int i = 0;
	char a[] = "my password is 1a2s3", b[22];	// array
	char* p = "send me your password", * q;      	// pointer
	// printf("message before encryption:\n");
	printf("  %s\n  %s\n", a, p);
	while (a[i] != '\0')			// encrypt a[ ]
		a[i] = *(a + i++) + 1; 		// a[i] = a[i]+1; i++;

	//SLIDE 2

	//These 3 lines of code demonstrate that the string pointed to by p and q is a constant string
	//literal and may not be changed.
	q = p;
	while (*q != '\0')
		*q = *(q++) + 1;	//error: *q is a constant / immutable   

	i = 0;
	while (i < 22)
		b[i] = *(p + i++);	// copy p into b[ ]
	q = b;  	// b is the initial address of array b[]
	while (*q != '\0')	// encrypt b[ ]
		*q = *(q++) + 1;	//now *q can be modified
	printf("message after encryption:\n");
	printf("  %s\n  %s\n", a, b);

	//SLIDE 3

	p = a;
	q = b;
	while (*p != '\0')		// decrypt a
		*p = *(p++) - 1;
	while (*q != '\0') 		// decrypt b
		*q = *(q++) - 1;
	printf("message after decryption:\n");
	printf("  %s\n  %s\n", a, b);
}
