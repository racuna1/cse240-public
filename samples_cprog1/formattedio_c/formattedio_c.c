#include <stdio.h>
void foo(int* n) {
    printf("%d\n", *n);
    *n = 30;
    printf("%d\n", *n);
}
void main() {
    int i = 0;
    scanf("%d", &i);  // enter 20
    foo(&i);     // the ampersand is used for address of i
    printf("%d\n", i);
    i = 10;
    foo(&i);
    printf("%d\n", i);
}