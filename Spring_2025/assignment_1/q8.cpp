#include <iostream>

  using namespace std;
  int main() {
  	
  	int a=0,b=0,sum=0;
  	
  	cout<<"Enter the first number to be added: "<<endl;
  	cin>>a;
  	
  	cout<<"Enter the second number to be added: "<<endl;
  	cin>>b;
  	
	  	sum=(a^b)+((a&b)<<1);
	  	cout<<"Sum: "<<sum;
          
  	
  	  return 0;
}