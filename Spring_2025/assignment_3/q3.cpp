#include <iostream>
using namespace std;

int main() {
    
    // Outer loop for printing the first division of pattern  
    for (int i = 0; i <= 9; i++) {
    
    	// Printing leading spaces
    	for (int j = 20 - 2 * i; j > 0; j--) {
    	
            cout << " ";
    }
        
        // Printing green * in two sets
        for (int j = 0; j <= i - 1; j++) {
        
            cout << "\033[32m*\033[0m";
            
        }
    
        for (int j = 0; j <= i - 1; j++) {
        
            cout << "\033[32m*\033[0m";
            
        }
    
        // Printing purple |
        for (int j = 1; j <= 1; j++) {
        
            cout << "\033[35m|\033[0m";
            
        }
    
        // Printing red + in two sets
        for (int j = 0; j <= i - 1; j++) {
        
            cout << "\033[31m+\033[0m";
            
        }
    
        for (int j = 0; j <= i - 1; j++) {
        
            cout << "\033[31m+\033[0m";
            
        }
        cout << endl;
    }

    // Printing - purple line
    for (int j = 42; j > 0; j--) {  
        cout << "\033[35m-\033[0m";
    }
    cout << endl;
    
    // Printing second part of the pattern
    for (int i = 0; i <= 9; i++) {
    
    	// Printing leading numbers
    	for (int j = 0; j <= i - 1; j++) {
    	
            cout << "1";
            
        }
            
        // Printing blue numbers and diagonal elements
        
        for (int j = 0; j <= (9 - i) * 2; j++) {
        
            if (j == 0 && i == 9) {
            
                cout << "\033[35m\\/\033[0m";
                
            } 
            else if (j == (9 - i) * 2) {
            
                cout << "\033[35m/\033[0m";
                
            } 
            else if (i / 9 == j) {
            
                cout << "\033[35m\\\033[0m\033[36m2\033[0m";
                
            }
            else {

                cout << "\033[36m2\033[0m";
            }
        }
        
        // Printing yellow 3s
        for (int j = 0; j <= i; j++) {
        
            cout << "\033[33m3\033[0m";
        }
        
        for (int j = 0; j <= i - 1; j++) {
        
            cout << "\033[33m3\033[0m";
        }
        
        // Printing green 4s and diagonal elements
        
        for (int j = 0; j <= (9 - i) * 2; j++) {
        
            if (j == 0 && i == 9) {
            
                cout << "\033[35m\\/\033[0m";
                
            } 
            else if (j == (9 - i) * 2) {
            
                cout << "\033[35m/\033[0m";
                
            } 
            else if (i / 9 == j) {
            
                cout << "\033[35m\\\033[0m\033[32m4\033[0m";
                
            } 
            else {
            
                cout << "\033[32m4\033[0m";
            }
        }
        
        // Printing blue 5s
        for (int j = 0; j <= i - 1; j++) {
        
            cout << "\033[34m5\033[0m";  
        }
    
        cout << endl;
    }
    
    // Printing horizontal purple line again
    for (int j = 42; j > 0; j--) {
    
        cout << "\033[35m-\033[0m";
    }
    cout << endl;
    
    // Printing third part of the pattern
    for (int i = 0; i <= 9; i++) {
    
        // Printing leading spaces
        for (int j = 0; j <= i; j++) {
        
            cout << " ";
        }
    
        for (int j = 0; j <= i; j++) {
        
            cout << " ";
        }
        
        // Printing yellow * in two sets
        for (int j = 9; j >= i + 1; j--) {
        
            cout << "\033[33m*\033[0m";
        }
    
        for (int j = 9; j >= i + 1; j--) {
        
            cout << "\033[33m*\033[0m";
        }
    
        // Printing purple |
        for (int j = 1; j <= 1; j++) {
        
            cout << "\033[35m|\033[0m";
        }
    
        // Printing blue + in two sets
        for (int j = 9; j >= i + 1; j--) {
        
            cout << "\033[34m+\033[0m";
        }
    
        for (int j = 9; j >= i + 1; j--) {
        
            cout << "\033[34m+\033[0m";
        }
    
        cout << endl;
    }
    	
    return 0;
}

