#include <stdio.h>
struct contact {
	char name[32];
	char email[32];
	int phone;
};

void callByValue(struct contact y) {
	strcpy(y.name, "Doe");
	printf("callByValue: name=%s, email= %s, phone = %d\n", y.name, y.email, y.phone);
	printf("callByValue: address of y = %x and size of y = %d\n\n", &y, sizeof(y));
}

void callByPointer(struct contact* y) {
	printf("callByPointer: name = %s, email = %s, phone=%d\n", y->name, y->email, y->phone);
	printf("callByPointer: address of y = %x and size of *y = %d\n", y, sizeof(*y));
}

void main() {
	struct contact x;
	strcpy(x.name, "John");
	strcpy(x.email, "John@asu.edu"); x.phone = 1234;
	printf("in main: name = %s\n", x.name);
	printf("in main: address of x = %x and size of x = %d\n\n", &x, sizeof(x));
	callByValue(x);
	callByPointer(&x);
}
