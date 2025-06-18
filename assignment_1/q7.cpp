#include <iostream>

  using namespace std;
  int main() {
  	
  	unsigned short int t=0;
  	
  	cout<<"Enter the two-byte Time value: ";
  	cin>>t;
  	
  	unsigned short int mask_4=0b1111;
  	unsigned short int mask_6=0b111111;
  	
  	unsigned short int Hours=(t>>12)& mask_4;
  	cout<<"Time is: "<<Hours<<" hours, ";
  	
  	unsigned short int Minutes=(t>>6) & mask_6;
  	cout<<Minutes<<" minutes, ";
  	
  	unsigned short int Seconds= t & mask_6;
  	cout<<Seconds<<" seconds. ";
  	
  	
  	  return 0;
}