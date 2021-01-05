using namespace std;	// C++ lib for C++ I/O
#include <iostream>	    // C++ lib allows you to use C-style I/O
void foo(int* n) {
	printf("%d\n", *n);
	*n = 30;
	printf("%d\n", *n);
}
int main() {
	int i = 0;
	cin >> i; 	        // enter an integer, e.g., 20
	foo(&i);     	    // the ampersand is used for address of i
	cout << "i = " << i << endl;// C++ I/O
	i = 10;
	foo(&i);
	cout << "i = " << i << endl;// C++ I/O
	cout << "Press Enter to close the window";

	return 0;
}