/**
 * Demostrates unformatted IO in C++.
 *
 * Completion time: ? minutes
 *
 * @author Chen
 * @version 1.0
*/
#include <iostream>
using namespace std;
void main() {
	char line[25];
	cout << "Please enter a line ended by '@'" << endl;
	cin.getline(line, 25, '@');  // either 25 chars 
				                // or ‘@’ is entered at the end
	cout << line << endl;
}