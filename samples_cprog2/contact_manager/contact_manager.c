#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAXIMUM_CONTACTS 100

//name, phone, email
struct contact {
	char name[30];
	int phone;
	char email[30];
};

struct contact contactbook[MAXIMUM_CONTACTS];
int tail=0; //next unused space.

void branching(char c);
int insertion();
int search();

void main() {
	char input = ' ';

	while (input != 'q') {
		//display menu
		printf("Enter your selection:\n");
		printf("    i: insert a new entry\n");
		printf("    d: delete an entry\n");
		printf("    s: search an entry\n");
		printf("    p: print all entries\n");
		printf("    q: quit\n");
		scanf(" %c", &input);
		input = tolower(input);

		branching(input);
	}
}

void branching(char c) {
	switch (c) {
	case 'i':
		insertion();
		break;
	case 'd':
		printf("delete()\n");
		break;
	case 's':
		search();
		break;
	case 'p':
		printf("printall()\n");
		break;
	case 'q':
		//do nothing
		break;
	default:
		printf("invalid input\n");
	}
}

int insertion() {
	if (tail == MAXIMUM_CONTACTS) {
		printf("There are no more places to insert.\n");
		return -1;
	}
	else {
		printf("Enter name, phone, email:\n");
		scanf("%s", contactbook[tail].name);
		scanf("%d", &contactbook[tail].phone);
		scanf("%s", contactbook[tail].email);
		tail++;
		printf("The number of entries is %d.\n", tail);
		return 0;
	}
}

int search() {
	char tname[30];
	printf("Please enter the name to be searched for:\n");
	scanf("%s", tname);

	for (int i = 0; i < tail; i++) {
		if (_stricmp(tname, contactbook[i].name) == 0) {
			printf("phone: %d\n", contactbook[i].phone);
			printf("email: %s\n", contactbook[i].email);
			return i;
		}
	}

	printf("The name does not exist.\n");
	return -1;
}