#include <iostream>
using namespace std;

int main() {
	
	
        // Taking input from user the max number in the pattern
	int numRows;
	cout<<"Enter The Number of rows for third pattern: ";
	cin>>numRows;	
	
	// Upper half of the pattern
	for (int i = 0; i<=numRows-1 ; i++) {
 	
 		// Printing left-side numbers
	 	for (int j = 0; j<=i ; j++) {
    	
			 	cout<<i;
			 }
			 
			 // Printing spaces in the middle
			 for (int j = 0; j < (numRows - i) * 2+1; j++) {
			 	
            cout << " ";
            
        }
        		// Printing middle numbers
    		 	for (int j = 0; j<=i ; j++) {
    	
			 	cout<<i;
			 }
			 
			 // Printing extra middle numbers to create the exact pattern
			 for (int j = 0; j<=i ; j++) {
    	
			 	cout<<i;
			 }
			
			 // Printing spaces again
			for (int j = 0; j < (numRows - i) * 2+1; j++) {
			   
        		 cout << " ";
        		 
        	}
        	
        	// Printing numbers on the right side 
			 for (int j = 0; j<=i ; j++) {
    	
			 	cout<<i;
			 }
			 
	  		cout<<endl;
			
			}
				
			
	// Lower half of the pattern
	for (int i = numRows; i>=0 ; i--) {
		 
     // Printing left-side numbers	
    for (int k = i; k>=0; k--) {
    		
    		cout<<i;
    		
    		 } 
		
		 // Printing spaces in the middle	 
		 for (int j = 0; j < (numRows - i) * 2+1; j++) {
			 	
            cout << " ";
            
        }  
        
        // Printing middle numbers
        for (int k = i; k>=0; k--) {
    		
    		cout<<i;
    		
    		 } 
    	
		// Printing extra middle numbers to mirror the left side	 
    	for (int k = i; k>=0; k--) {
    		
    		cout<<i;
    		
    		 } 
    		
			// Printing spaces again 
    		for (int j = 0; j < (numRows - i) * 2+1; j++) {
			 	
            cout << " ";
            
        } 
        
        // Printing right-side numbers
        for (int k = i; k>=0; k--) {
    		
    		cout<<i;
    		
    		 } 
	  
    		 cout<<endl;
    	}
			
    return 0;
}
