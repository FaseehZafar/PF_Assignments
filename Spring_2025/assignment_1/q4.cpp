#include <iostream>
#include <cmath>

  using namespace std;
  int main() {
  	
  	int i=0,a=0,b=0,u=3,p=4;
  	
  	cout<<"Enter the value of i: ";
  	cin>>i;
  	
  	cout<<"Enter the value of a: ";
  	cin>>a;
  	
  	cout<<"Enter the value of b: ";
  	cin>>b;
  	
  	double result;
  	
  		result=pow((u*(i)*a*1/b*((i*i)-1)),0.5)*1/(pow((p*i)-2,0.5)+pow((p*i)-1,0.5));
  	
	 	cout<<result;
	  
  	  return 0;
}