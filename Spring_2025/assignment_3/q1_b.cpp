#include <iostream>
using namespace std;

int main() {
	
	// Taking user input for the number of rows in the pattern
	int numRows;
	cout << "Enter the number of rows for second pattern: ";
	cin >> numRows;
	
	
// Loop for the upper pattern
	for (int i = numRows; i >= 0; i--) {
		
		// Printing leading spaces
		for (int j = i; j >= 0; j--) {
			
			cout << " ";
		}
		
		// Printing pattern symbols
		for (int j = 0; j < (numRows - i) * 2 + 1; j++) {
		
			if (i / numRows == j || j == (numRows - i) * 2) {
			
				cout << "*";
				
			} 
			
			else if (j == ((numRows - i) * 2) - 2 || j == 2) {
			
				cout << "-";
				
			} 
			
			else if (j == ((numRows - i) * 2) - 4 || j == 4) {
			
				cout << "+";
				
			} 
			else {
				
				cout << " ";
				
			}
		}
		
		// Printing trailing spaces
		for (int j = i; j >= 0; j--) {
			
			cout << " ";
		}
		
		cout << endl;
	}

	// Loop for the lower pattern
	for (int i = 0; i <= numRows + 1; i++) {
		
		// Printing leading spaces
		for (int j = 0; j <= i; j++) {
			
			cout << " ";
		}
		
		// Printing pattern symbols
		for (int j = 0; j < (numRows - i) * 2 + 1; j++) {
			
			if (i / numRows == j || j == (numRows - i) * 2) {
			
				cout << "*";
				
			} 
			
			else if (j == ((numRows - i) * 2) - 2 || j == 2) {
			
				cout << "-";
				
			} 
			else if (j == ((numRows - i) * 2) - 4 || j == 4) {
				
				cout << "+";
				
			}
			 else {
			 	
				cout << " ";
			}
		}
		
		for (int j = i; j >= 0; j--) {
			
			cout << " ";
			
		}
		
		cout << endl;
	}
	
	return 0; 
}
