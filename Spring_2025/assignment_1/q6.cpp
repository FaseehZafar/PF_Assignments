#include <iostream>

  using namespace std;
  int main() {
  	
  	int a,b_500,b_100,b_50,b_20,b_10,b_5,b_1;
  	cout<<"Enter the Amount to be converted into currency notes: ";
  	cin>>a;
  	
  	cout<<"Currency Notes :  Number "<<endl;	
  		
	  b_500=a/500;
	  cout<<"   500         :    "<<b_500<<endl;
	  
	  b_100=(a-(b_500*500))/100;
	  cout<<"   100         :    "<<b_100<<endl;
	  
	  b_50=(a-((b_500*500)+(b_100*100)))/50;
	  cout<<"   50          :    "<<b_50<<endl;
	  
	  b_20=(a-((b_500*500)+(b_100*100)+(b_50*50)))/20;
	  cout<<"   20          :    "<<b_20<<endl;
	  
	  b_10=(a-((b_500*500)+(b_100*100)+(b_50*50)+(b_20*20)))/10;
	  cout<<"   10          :    "<<b_10<<endl;
	  
	  b_5=(a-((b_500*500)+(b_100*100)+(b_50*50)+(b_20*20)+(b_10*10)))/5;
	  cout<<"   5           :    "<<b_5<<endl;
	  
	  b_1=(a-((b_500*500)+(b_100*100)+(b_50*50)+(b_20*20)+(b_10*10)+(b_5*5)))/1;
	  cout<<"   1           :    "<<b_1<<endl;
	  
  	  return 0;
}