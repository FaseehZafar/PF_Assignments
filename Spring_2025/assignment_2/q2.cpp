#include <iostream>
using namespace std;
  int main() {
  	
  	int a=0,b=0;
  	
  	cout<<"Enter the Month: ";
  	cin>>a;
  	
  	cout<<"Enter the Day: ";
  	cin>>b;
  	
  	if((a==1&&b<=31&&b>=1)||(a==2&&b<=28&&b>=1)||(a==3&&b<=31&&b>=1)||(a==12&&b>=16&&b<=31)){
  	
  		cout<<"><___W I N T E R___><"<<endl;
	  
	  }
	  
	 else if((a==6&&b<=30&&b>=15)||(a==5&&b<=31&&b>=1)||(a==4&&b<=30&&b>=1)||(a==3&&b>=16&&b<=31)){
  	
  		cout<<"><___S P R I N G___><"<<endl;
	  
	  }
	  
	  else if((a==9&&b<=30&&b>=15)||(a==8&&b<=31&&b>=1)||(a==7&&b<=31&&b>=1)||(a==6&&b>=16&&b<=30)){
  	
  		cout<<"><___S U M M E R___><"<<endl;
	  
	  }
	  
	   else if((a==12&&b<=15)||(a==11&&b<=30&&b>=1)||(a==10&&b<=31&&b>=1)||(a==9&&b>=16&&b<=30)){
  	
  		cout<<"><___F A L L___><"<<endl;
	  
	  }
	  
	  else{
	  	cout<<"Wrong range of days/Months!!"<<endl;
	  }
  		
  	  return 0;
}