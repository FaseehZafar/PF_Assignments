#include <iostream>
using namespace std;
  int main() {
  	
  	int hardness=0,tensile_strength=0;
  	float carbon_content=0;
  	
  	cout<<"Enter the hardness of steel: ";
  	cin>>hardness;
  	
  	cout<<"Enter the Carbon content: ";
  	cin>>carbon_content;
  	
  	cout<<"Enter the tensile strength: ";
  	cin>>tensile_strength;
  	
  	if(hardness>50&&carbon_content<0.7&&tensile_strength>5600){
  	
  		cout<<"><___Grade-10 Steel___><"<<endl;
	  
	  }
	  
	  else if((hardness>50&&carbon_content<0.7)){
  	
  		cout<<"><___Grade-9 Steel___><"<<endl;
	  
	  }
	  
	  else if((carbon_content<0.7&&tensile_strength>5600)){
  	
  		cout<<"><___Grade-8 Steel___><"<<endl;
	  
	  }
	  
	  else if((hardness>50&&tensile_strength>5600)){
  	
  		cout<<"><___Grade-7 Steel___><"<<endl;
	  
	  }
	  
	  else if((hardness>50||tensile_strength>5600||carbon_content<0.7)){
  	
  		cout<<"><___Grade-6 Steel___><"<<endl;
	  
	  }
	  
	  else{
	  	cout<<"><___Grade-5 Steel___><"<<endl;
	  }
  		
  	  return 0;
}