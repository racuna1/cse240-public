#include <stdio.h>
#include <string.h>

int main() {

	char s[] = "Hello";
	char s1[77] = "World";
	char s2[6] = "Hello";
	char s3[100];

	printf("s=%s, size=%d, len=%d\n", s, sizeof(s), strlen(s));
	printf("s1=%s, size=%d, len=%d\n\n", s1, sizeof(s1), strlen(s));

	for (int i = 0; i < 5; i++)
		printf("%c", s2[i]);
	printf("\n");

	printf("s2=%s\n", s2);

	//s3 = s2;
	strcpy(s3, s2);
	strcat(s3, s1);

	printf("s3=%s\n", s3);

	return 0;
}