#include <iostream>

  using namespace std;
  int main() {
  	
  	int net_pay,hourly_wage=0,no_of_hours=0,withholding_tax=0;
  	
  	cout<<"Enter the Hourly Wage: ";
  	cin>>hourly_wage;
  	
  	cout<<"Enter the Number of Hours: ";
	cin>>no_of_hours;  	
	
	cout<<"Enter the withholding tax percentage: ";
	cin>>withholding_tax;
  		
	  net_pay=(hourly_wage*no_of_hours)-(25*(hourly_wage*no_of_hours))/100;
	  cout<<"Net Pay :  "<<net_pay<<endl;
	  
  	  return 0;
}