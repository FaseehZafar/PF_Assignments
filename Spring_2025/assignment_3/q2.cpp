#include <iostream>
using namespace std;

int main() {
	
	int a;
	cout<<"Enter The Number of rows for pattern: ";
	cin>>a;	
	
	char b;
	cout<<"Enter your first character: ";
	cin>>b;
	
	char c;
	cout<<"Enter your second character: ";
	cin>>c;
	
	for (int i = a/3; i>=1 ; i--) {
 	
	 	for (int j = i; j>=1 ; j--) {
    	
			 	cout<<" ";
			 }
			 
			for (int j = 0; j < (a/3 - i) * 2+1; j++) {
				
			 	if(i/a==j||j == (a/3 - i) * 2){
				 
				 if(i%2==0){
				 	
            cout << b;
        }
        
         if(i%2!=0){
				 	
            cout << c;
        }
        
    }
        
        else if(j == ((a/3 - i) * 2)-2||j==2){
        	
        	if(i%2==0){
				 	
            cout << c;
        }
        
         if(i%2!=0){
				 	
            cout << b;
        }
        	
		}
		
            else{
            	cout<<" ";
			}
            
        }
        
        for (int j = i; j>=0 ; j--) {
    	
			 	cout<<" ";
			 }
			 
	  		cout<<endl;
			
			}
		
		
		for (int i = a/3 + 1; i>=1 ; i--) {
 	
	 	for (int j = a/10; j>=1 ; j--) {
    	
			 if(j==a/10){
			 	
			 	if(i%2==0){
				 	
            cout << b;
        }
        
         if(i%2!=0){
				 	
            cout << c;
        } 	
			 }
			 
			 if(j==a/10-1){
			 	
			 	if(i%2==0){
				 	
            cout << c;
        }
        
         else if(i%2!=0){
				 	
            cout << b;
        }
	}
		
		else{
			cout<<" ";
		}		
			 }
			
			for (int j = a/10; j>1 ; j--) {
			
			cout<<" ";
			
		}
			 
			 for (int j = a/4; j < i; j++) {
            cout << b;
        }
        
    for (int j = 1; j <= a/3; j++) {
        	
            cout << c;
    }
        
        
        for (int j = a/10; j>=1 ; j--) {
    	
			 if(j==a/10){
			 	
			 	if(i%2==0){
				 	
            cout << b;
        }
        
         if(i%2!=0){
				 	
            cout << c;
        } 	
			 }
			 
			 if(j==a/10-1){
			 	
			 	if(i%2==0){
				 	
            cout << c;
        }
        
         else if(i%2!=0){
				 	
            cout << b;
        }
	}
		
		else{
			cout<<" ";
		}		
			 }
			
			for (int j = a/10; j>1 ; j--) {
			
			cout<<" ";
			
		}
        
			 cout<<endl;
	}
	
			for (int i = 1; i<=a/3+1 ; i++) {
 	
	 	for (int j = 1; j<=i ; j++) {
    	
			 	cout<<" ";
			 }
			 
			for (int j = 0; j < (a/3 - i) * 2+1; j++) {
				
			 	if(i/a/3==j||j == (a/3 - i) * 2){
				 
            if(i%2==0){
				 	
            cout << b;
        }
        
         if(i%2!=0){
				 	
            cout << c;
        }
        }
        
        else if(j == ((a/3 - i) * 2)-2||j==2){
        	
        	if(i%2==0){
				 	
            cout << b;
        }
        
         if(i%2!=0){
				 	
            cout << c;
        }
        	
		}
		
		
            else{
            	cout<<" ";
			}
           
        }
        cout<<endl; 
    }
			return 0;
			
		}