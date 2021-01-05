#include <stdio.h>
#define COUNT 3
#define stringSize 32
void main() {
	char names[COUNT][stringSize];       // 2D array, hold strings of up to 31 chars
	char name[stringSize]; int i, j;     // 1D array
	for (i = 0; i < COUNT; i++) {
		printf("Enter a string: "); // prompt for a string
		fgets(name, sizeof(name), stdin); // read input, and store in name
		name[strlen(name) - 1] = '\0'; // convert '\n' to '\0' (null terminator)
		strcpy(names[i], name);        // copy name to entry in 2D strings array
	}
	for (i = 0; i < COUNT; i++) {
		for (j = 0; j < strlen(names[i]); j++)
			printf("%c%c", names[i][j], names[i][j]);
		printf("\n");
	}
	i = getchar(); // keep console open
}
