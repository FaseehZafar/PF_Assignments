#include <iostream>
using namespace std;
  int main() {
  	
  	bool n;
  	cout<<"Do you want to input four numbers ?(1/0)"<<endl;
  	cin>>n;
  	
  	if(n==1){
  		int x=0,y=0,z=0,d=0,greatest_valuee=0;
  	cout<<"Enter Four Numbers : "<<endl;
  	cout<<"Enter the 1st number: "<<endl;
  	cin>>x;
  	
  	cout<<"Enter the 2nd number: "<<endl;
  	cin>>y;
  	
  	cout<<"Enter the 3rd number: "<<endl;
  	cin>>z;
  	
  	cout<<"Enter the 4th number: "<<endl;
  	cin>>d;
  	
  	greatest_valuee=(x > y && x > z && x > d) ? x:(y > z && y > x && y>d) ? y:(z > x && z > y && z > d) ? z:d;
  	cout<<"The Greatest Number is: "<<greatest_valuee<<endl;
  	
	  }
  	
  	else{
  	int a=0,b=0,c=0,greatest_value=0;
  	
  	cout<<"Enter Three Numbers : "<<endl;
  	cout<<"Enter the 1st number: "<<endl;
  	cin>>a;
  	
  	cout<<"Enter the 2nd number: "<<endl;
  	cin>>b;
  	
  	cout<<"Enter the 3rd number: "<<endl;
  	cin>>c;
  	
  	greatest_value=(a > b && a > c) ? a:(b > a && b > c) ? b:c;
  	cout<<"The Greatest Number is: "<<greatest_value<<endl;
  }
  	
  	  return 0;
}