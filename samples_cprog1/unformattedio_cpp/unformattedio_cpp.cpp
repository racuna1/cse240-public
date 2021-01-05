#include <iostream>
using namespace std;
void main() {
	char line[25];
	cout << "Please enter a line ended by '@'" << endl;
	cin.getline(line, 25, '@');  // either 25 chars 
				                // or ‘@’ is entered at the end
	cout << line << endl;
}