using namespace std;
#include <iostream> 
int i = 1;		    // i is a global variable
void foo(int m, int& n) {   // m and n are formal parameters
    cout << "i = " << i << "  m = " << m << "  n = " << n << endl;
    i = 5; m = 3; n = 4;	   // Modify i, m and n.
    cout << "i = " << i << "  m = " << m << "  n = " << n << endl;
}
void main() {
    int j = 2;     // j is a local variable 
    foo(j, i);
    cout << "i = " << i << "  j = " << j << endl;
}
