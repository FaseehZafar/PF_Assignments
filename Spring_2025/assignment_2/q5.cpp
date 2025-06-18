#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
  int main() {
  	
  	int a=0,b=0,d=0,e=0,f=0,price=0,seats_available=0,randomDigit=0,limit=0;
  	bool c;
  	
  	srand(time(0));
  	
  	cout << "1. 27 Feb 2020 _ Islamabad United v Quetta Gladiators, Pindi Cricket Stadium"<<endl;
    cout << "   (7pm-10.15pm)\n"<<endl;

    cout << "2. 28 Feb 2020 _ Peshawar Zalmi v Lahore Qalandars, Pindi Cricket Stadium"<<endl;
    cout << "   (8pm-11.15pm)\n"<<endl;

    cout << "3. 29 Feb 2020 _ Islamabad United v Peshawar Zalmi, Pindi Cricket Stadium"<<endl;
    cout << "   (7pm-10.15pm)\n"<<endl;

    cout << "4. 1 Mar 2020 _ Islamabad United v Karachi Kings, Pindi Cricket Stadium"<<endl;
    cout << "   (7pm-10.15pm)\n"<<endl;

    cout << "5. 2 Mar 2020 _ Peshawar Zalmi v Karachi Kings, Pindi Cricket Stadium"<<endl;
    cout << "   (7pm-10.15pm)\n"<<endl;

    cout << "6. 5 Mar 2020 _ Peshawar Zalmi v Quetta Gladiators, Pindi Cricket Stadium"<<endl;
    cout << "   (7pm-10.15pm)\n"<<endl;

    cout << "7. 7 Mar 2020 _ Peshawar Zalmi v Islamabad United, Pindi Cricket Stadium"<<endl;
    cout << "   (2pm-5.15pm)\n"<<endl;

    cout << "8. 8 Mar 2020 _ Multan Sultans v Islamabad United, Pindi Cricket Stadium"<<endl;
    cout << "   (2pm-5.15pm)\n"<<endl;

		
  	cout<<"Enter which Match Ticket u want to purchase(1-8): ";
  	cin>>a;
  	
switch (a) {
    case 1:
    	//IU vs QG
    	cout << "  27 February 2020 | Islamabad United v Quetta Gladiators (7 pm-10.15 pm)\n"<<endl;
    	cout << "(VIP _ Rs. 3000, PREMIUM _ Rs. 1500, FIRST_CLASS _ Rs. 1000, GENERAL _ Rs. 500)\n"<<endl;
    	cout<<" There are 8 enclosures select one: \n"<<endl;
    	cout << "  1. JAVED-AKHTER (VIP Enclosure) Max_1000 seats. \n"<<endl;
    	cout << "  2. JAVED-MIANDAD (VIP Enclosure) Max_1000 seats.\n"<<endl;
    	cout << "  3. IMRAN KHAN (VIP Enclosure) Max_1000 seats.\n"<<endl;
    	cout << "  4. AZHAR MEHMOOD (VIP Enclosure) Max_1000 seats.\n"<<endl;
    	cout << "  5. SOHAIL TANVEER (FIRST_CLASS Enclosure) Max_3000 seats.\n"<<endl;
    	cout << "  6. SHOAIB AKHTAR (PREMIUM Enclosure) Max_3000 seats.\n"<<endl;
    	cout << "  7. IMRAN BUKSH (GENERAL Enclosure) Max_2500 seats.\n"<<endl;
    	cout << "  8. YASIR ARAFAT (GENERAL Enclosure) Max_2500 seats.\n"<<endl;
    	cout<<"Enter which Enclosure u want to take(1-8): ";
  	    cin>>b;
    	
		switch (b) {
    	
    case 1:
    	limit = 1000;
  	    randomDigit = rand() % limit;
    	seats_available=randomDigit;
    	cout<<"The Available seats are: "<<seats_available<<endl;
    	cout<<"Do You Want To Buy Ticket For Family?(1/0)"<<endl;
    	cin>>c;
    	
    	if(c==1){
    		cout<<"Enter the number of Adult Tickets(1-4):"<<endl;
    		cin>>d;
    		cout<<"Enter the number of Children Tickets(1-5):"<<endl;
    		cin>>e;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=4)&&(d>=1)&&(e<=5)&&(e>=0)){
	
    		if(d>=4){
    			price=(3000*d)-((3000*d*10)/100)+(3000*e)-((3000*e*20)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(3000*d)+(3000*e)-((3000*e*20)/100);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		else{
			cout<<"Enter the number of Adult Tickets(1-8):"<<endl;
    		cin>>d;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=8)&&(d>=0)){
			if(d>=4){
    			price=(3000*d)-((3000*d*10)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(3000*d);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}	
		break;	
		
        
    case 2:
    	limit = 1000;
  	    randomDigit = rand() % limit;
    	seats_available=randomDigit;
    	cout<<"The Available seats are: "<<seats_available<<endl;
    	cout<<"Do You Want To Buy Ticket For Family?(1/0)"<<endl;
    	cin>>c;
    	
    	if(c==1){
    		cout<<"Enter the number of Adult Tickets(1-4):"<<endl;
    		cin>>d;
    		cout<<"Enter the number of Children Tickets(1-5):"<<endl;
    		cin>>e;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=4)&&(d>=0)&&(e<=5)&&(e>=0)){
	
    		if(d>=4){
    			price=(3000*d)-((3000*d*10)/100)+(3000*e)-((3000*e*20)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(3000*d)+(3000*e)-((3000*e*20)/100);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		else{
			cout<<"Enter the number of Adult Tickets(1-8):"<<endl;
    		cin>>d;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=8)&&(d>=0)){
			if(d>=4){
    			price=(3000*d)-((3000*d*10)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(3000*d);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		break;
    case 3:
    	limit = 1000;
  	    randomDigit = rand() % limit;
    	seats_available=randomDigit;
    	cout<<"The Available seats are: "<<seats_available<<endl;
    	cout<<"Do You Want To Buy Ticket For Family?(1/0)"<<endl;
    	cin>>c;
    	
    	if(c==1){
    		cout<<"Enter the number of Adult Tickets(1-4):"<<endl;
    		cin>>d;
    		cout<<"Enter the number of Children Tickets(1-5):"<<endl;
    		cin>>e;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=4)&&(d>=0)&&(e<=5)&&(e>=0)){
	
    		if(d>=4){
    			price=(3000*d)-((3000*d*10)/100)+(3000*e)-((3000*e*20)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(3000*d)+(3000*e)-((3000*e*20)/100);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		else{
			cout<<"Enter the number of Adult Tickets(1-8):"<<endl;
    		cin>>d;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=8)&&(d>=0)){
			if(d>=4){
    			price=(3000*d)-((3000*d*10)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(3000*d);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
        break;
    case 4:
    	limit = 1000;
  	    randomDigit = rand() % limit;
    	seats_available=randomDigit;
    	cout<<"The Available seats are: "<<seats_available<<endl;
    	cout<<"Do You Want To Buy Ticket For Family?(1/0)"<<endl;
    	cin>>c;
    	
    	if(c==1){
    		cout<<"Enter the number of Adult Tickets(1-4):"<<endl;
    		cin>>d;
    		cout<<"Enter the number of Children Tickets(1-5):"<<endl;
    		cin>>e;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=4)&&(d>=0)&&(e<=5)&&(e>=0)){
	
    		if(d>=4){
    			price=(3000*d)-((3000*d*10)/100)+(3000*e)-((3000*e*20)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(3000*d)+(3000*e)-((3000*e*20)/100);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		else{
			cout<<"Enter the number of Adult Tickets(1-8):"<<endl;
    		cin>>d;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=8)&&(d>=0)){
			if(d>=4){          
    			price=(3000*d)-((3000*d*10)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(3000*d);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
        break;
    case 5:
    	limit = 3000;
  	    randomDigit = rand() % limit;
    	seats_available=randomDigit;
    	cout<<"The Available seats are: "<<seats_available<<endl;
    	cout<<"Do You Want To Buy Ticket For Family?(1/0)"<<endl;
    	cin>>c;
    	
    	if(c==1){
    		cout<<"Enter the number of Adult Tickets(1-4):"<<endl;
    		cin>>d;
    		cout<<"Enter the number of Children Tickets(1-5):"<<endl;
    		cin>>e;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=4)&&(d>=0)&&(e<=5)&&(e>=0)){
	
    		if(d>=4){
    			price=(1000*d)-((1000*d*10)/100)+(1000*e)-((1000*e*20)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(1000*d)+(1000*e)-((1000*e*20)/100);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		else{
			cout<<"Enter the number of Adult Tickets(1-8):"<<endl;
    		cin>>d;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=8)&&(d>=0)){
			if(d>=4){
    			price=(1000*d)-((1000*d*10)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(1000*d);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
        break;    
    case 6:
    	limit = 3000;
  	    randomDigit = rand() % limit;
    	seats_available=randomDigit;
    	cout<<"The Available seats are: "<<seats_available<<endl;
    	cout<<"Do You Want To Buy Ticket For Family?(1/0)"<<endl;
    	cin>>c;
    	
    	if(c==1){
    		cout<<"Enter the number of Adult Tickets(1-4):"<<endl;
    		cin>>d;
    		cout<<"Enter the number of Children Tickets(1-5):"<<endl;
    		cin>>e;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=4)&&(d>=0)&&(e<=5)&&(e>=0)){
	
    		if(d>=4){
    			price=(1500*d)-((1500*d*10)/100)+(1500*e)-((1500*e*20)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(1500*d)+(1500*e)-((1500*e*20)/100);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		else{
			cout<<"Enter the number of Adult Tickets(1-8):"<<endl;
    		cin>>d;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=8)&&(d>=0)){
			if(d>=4){
    			price=(1500*d)-((1500*d*10)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(1500*d);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
        break;
	case 7:
    	limit = 2500;
  	    randomDigit = rand() % limit;
    	seats_available=randomDigit;
    	cout<<"The Available seats are: "<<seats_available<<endl;
    	cout<<"Do You Want To Buy Ticket For Family?(1/0)"<<endl;
    	cin>>c;
    	
    	if(c==1){
    		cout<<"Enter the number of Adult Tickets(1-4):"<<endl;
    		cin>>d;
    		cout<<"Enter the number of Children Tickets(1-5):"<<endl;
    		cin>>e;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=4)&&(d>=0)&&(e<=5)&&(e>=0)){
	
    		if(d>=4){
    			price=(500*d)-((500*d*10)/100)+(500*e)-((500*e*20)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(500*d)+(500*e)-((500*e*20)/100);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		else{
			cout<<"Enter the number of Adult Tickets(1-8):"<<endl;
    		cin>>d;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=8)&&(d>=0)){
			if(d>=4){
    			price=(500*d)-((500*d*10)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(500*d);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
        break;	    
    case 8:
    	limit = 2500;
  	    randomDigit = rand() % limit;
    	seats_available=randomDigit;
    	cout<<"The Available seats are: "<<seats_available<<endl;
    	cout<<"Do You Want To Buy Ticket For Family?(1/0)"<<endl;
    	cin>>c;
    	
    	if(c==1){
    		cout<<"Enter the number of Adult Tickets(1-4):"<<endl;
    		cin>>d;
    		cout<<"Enter the number of Children Tickets(1-5):"<<endl;
    		cin>>e;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=4)&&(d>=0)&&(e<=5)&&(e>=0)){
	
    		if(d>=4){
    			price=(500*d)-((500*d*10)/100)+(500*e)-((500*e*20)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(500*d)+(500*e)-((500*e*20)/100);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		else{
			cout<<"Enter the number of Adult Tickets(1-8):"<<endl;
    		cin>>d;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=8)&&(d>=0)){
			if(d>=4){
    			price=(500*d)-((500*d*10)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(500*d);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
        break;
    default:
    	cout<<" The enclosure is not Present"<<endl;
        break;
        }
        break;
    
    case 2:
    	//PZ vs LQ
    	cout << "  28 February 2020 | Peshawar Zalmi v Lahore Qalandars (7 pm-10.15 pm)\n"<<endl;
    	cout << "(VIP _ Rs. 3000, PREMIUM _ Rs. 1500, FIRST_CLASS _ Rs. 1000, GENERAL _ Rs. 500)\n"<<endl;
    	cout<<" There are 8 enclosures select one: \n"<<endl;
    	cout << "  1. JAVED-AKHTER (VIP Enclosure) Max_1000 seats. \n"<<endl;
    	cout << "  2. JAVED-MIANDAD (VIP Enclosure) Max_1000 seats.\n"<<endl;
    	cout << "  3. IMRAN KHAN (VIP Enclosure) Max_1000 seats.\n"<<endl;
    	cout << "  4. AZHAR MEHMOOD (VIP Enclosure) Max_1000 seats.\n"<<endl;
    	cout << "  5. SOHAIL TANVEER (FIRST_CLASS Enclosure) Max_3000 seats.\n"<<endl;
    	cout << "  6. SHOAIB AKHTAR (PREMIUM Enclosure) Max_3000 seats.\n"<<endl;
    	cout << "  7. IMRAN BUKSH (GENERAL Enclosure) Max_2500 seats.\n"<<endl;
    	cout << "  8. YASIR ARAFAT (GENERAL Enclosure) Max_2500 seats.\n"<<endl;
    	cout<<"Enter which Enclosure u want to take(1-8): ";
  	    cin>>b;
    	
		switch (b) {
    	
    case 1:
    	limit = 1000;
  	    randomDigit = rand() % limit;
    	seats_available=randomDigit;
    	cout<<"The Available seats are: "<<seats_available<<endl;
    	cout<<"Do You Want To Buy Ticket For Family?(1/0)"<<endl;
    	cin>>c;
    	
    	if(c==1){
    		cout<<"Enter the number of Adult Tickets(1-4):"<<endl;
    		cin>>d;
    		cout<<"Enter the number of Children Tickets(1-5):"<<endl;
    		cin>>e;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=4)&&(d>=0)&&(e<=5)&&(e>=0)){
	
    		if(d>=4){
    			price=(3000*d)-((3000*d*10)/100)+(3000*e)-((3000*e*20)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(3000*d)+(3000*e)-((3000*e*20)/100);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		else{
			cout<<"Enter the number of Adult Tickets(1-8):"<<endl;
    		cin>>d;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=8)&&(d>=0)){
			if(d>=4){
    			price=(3000*d)-((3000*d*10)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(3000*d);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}	
		break;	
		
        
    case 2:
    	limit = 1000;
  	    randomDigit = rand() % limit;
    	seats_available=randomDigit;
    	cout<<"The Available seats are: "<<seats_available<<endl;
    	cout<<"Do You Want To Buy Ticket For Family?(1/0)"<<endl;
    	cin>>c;
    	
    	if(c==1){
    		cout<<"Enter the number of Adult Tickets(1-4):"<<endl;
    		cin>>d;
    		cout<<"Enter the number of Children Tickets(1-5):"<<endl;
    		cin>>e;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=4)&&(d>=0)&&(e<=5)&&(e>=0)){
	
    		if(d>=4){
    			price=(3000*d)-((3000*d*10)/100)+(3000*e)-((3000*e*20)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(3000*d)+(3000*e)-((3000*e*20)/100);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		else{
			cout<<"Enter the number of Adult Tickets(1-8):"<<endl;
    		cin>>d;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=8)&&(d>=0)){
			if(d>=4){
    			price=(3000*d)-((3000*d*10)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(3000*d);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		break;
    case 3:
    	limit = 1000;
  	    randomDigit = rand() % limit;
    	seats_available=randomDigit;
    	cout<<"The Available seats are: "<<seats_available<<endl;
    	cout<<"Do You Want To Buy Ticket For Family?(1/0)"<<endl;
    	cin>>c;
    	
    	if(c==1){
    		cout<<"Enter the number of Adult Tickets(1-4):"<<endl;
    		cin>>d;
    		cout<<"Enter the number of Children Tickets(1-5):"<<endl;
    		cin>>e;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=4)&&(d>=0)&&(e<=5)&&(e>=0)){
	
    		if(d>=4){
    			price=(3000*d)-((3000*d*10)/100)+(3000*e)-((3000*e*20)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(3000*d)+(3000*e)-((3000*e*20)/100);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		else{
			cout<<"Enter the number of Adult Tickets(1-8):"<<endl;
    		cin>>d;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=8)&&(d>=0)){
			if(d>=4){
    			price=(3000*d)-((3000*d*10)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(3000*d);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
        break;
    case 4:
    	limit = 1000;
  	    randomDigit = rand() % limit;
    	seats_available=randomDigit;
    	cout<<"The Available seats are: "<<seats_available<<endl;
    	cout<<"Do You Want To Buy Ticket For Family?(1/0)"<<endl;
    	cin>>c;
    	
    	if(c==1){
    		cout<<"Enter the number of Adult Tickets(1-4):"<<endl;
    		cin>>d;
    		cout<<"Enter the number of Children Tickets(1-5):"<<endl;
    		cin>>e;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=4)&&(d>=0)&&(e<=5)&&(e>=0)){
	
    		if(d>=4){
    			price=(3000*d)-((3000*d*10)/100)+(3000*e)-((3000*e*20)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(3000*d)+(3000*e)-((3000*e*20)/100);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		else{
			cout<<"Enter the number of Adult Tickets(1-8):"<<endl;
    		cin>>d;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=8)&&(d>=0)){
			if(d>=4){          
    			price=(3000*d)-((3000*d*10)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(3000*d);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
        break;
    case 5:
    	limit = 3000;
  	    randomDigit = rand() % limit;
    	seats_available=randomDigit;
    	cout<<"The Available seats are: "<<seats_available<<endl;
    	cout<<"Do You Want To Buy Ticket For Family?(1/0)"<<endl;
    	cin>>c;
    	
    	if(c==1){
    		cout<<"Enter the number of Adult Tickets(1-4):"<<endl;
    		cin>>d;
    		cout<<"Enter the number of Children Tickets(1-5):"<<endl;
    		cin>>e;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=4)&&(d>=0)&&(e<=5)&&(e>=0)){
	
    		if(d>=4){
    			price=(1000*d)-((1000*d*10)/100)+(1000*e)-((1000*e*20)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(1000*d)+(1000*e)-((1000*e*20)/100);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		else{
			cout<<"Enter the number of Adult Tickets(1-8):"<<endl;
    		cin>>d;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=8)&&(d>=0)){
			if(d>=4){
    			price=(1000*d)-((1000*d*10)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(1000*d);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
        break;    
    case 6:
    	limit = 3000;
  	    randomDigit = rand() % limit;
    	seats_available=randomDigit;
    	cout<<"The Available seats are: "<<seats_available<<endl;
    	cout<<"Do You Want To Buy Ticket For Family?(1/0)"<<endl;
    	cin>>c;
    	
    	if(c==1){
    		cout<<"Enter the number of Adult Tickets(1-4):"<<endl;
    		cin>>d;
    		cout<<"Enter the number of Children Tickets(1-5):"<<endl;
    		cin>>e;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=4)&&(d>=0)&&(e<=5)&&(e>=0)){
	
    		if(d>=4){
    			price=(1500*d)-((1500*d*10)/100)+(1500*e)-((1500*e*20)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(1500*d)+(1500*e)-((1500*e*20)/100);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		else{
			cout<<"Enter the number of Adult Tickets(1-8):"<<endl;
    		cin>>d;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=8)&&(d>=0)){
			if(d>=4){
    			price=(1500*d)-((1500*d*10)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(1500*d);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
        break;
	case 7:
    	limit = 2500;
  	    randomDigit = rand() % limit;
    	seats_available=randomDigit;
    	cout<<"The Available seats are: "<<seats_available<<endl;
    	cout<<"Do You Want To Buy Ticket For Family?(1/0)"<<endl;
    	cin>>c;
    	
    	if(c==1){
    		cout<<"Enter the number of Adult Tickets(1-4):"<<endl;
    		cin>>d;
    		cout<<"Enter the number of Children Tickets(1-5):"<<endl;
    		cin>>e;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=4)&&(d>=0)&&(e<=5)&&(e>=0)){
	
    		if(d>=4){
    			price=(500*d)-((500*d*10)/100)+(500*e)-((500*e*20)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(500*d)+(500*e)-((500*e*20)/100);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		else{
			cout<<"Enter the number of Adult Tickets(1-8):"<<endl;
    		cin>>d;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=8)&&(d>=0)){
			if(d>=4){
    			price=(500*d)-((500*d*10)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(500*d);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
        break;	    
    case 8:
    	limit = 2500;
  	    randomDigit = rand() % limit;
    	seats_available=randomDigit;
    	cout<<"The Available seats are: "<<seats_available<<endl;
    	cout<<"Do You Want To Buy Ticket For Family?(1/0)"<<endl;
    	cin>>c;
    	
    	if(c==1){
    		cout<<"Enter the number of Adult Tickets(1-4):"<<endl;
    		cin>>d;
    		cout<<"Enter the number of Children Tickets(1-5):"<<endl;
    		cin>>e;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=4)&&(d>=0)&&(e<=5)&&(e>=0)){
	
    		if(d>=4){
    			price=(500*d)-((500*d*10)/100)+(500*e)-((500*e*20)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(500*d)+(500*e)-((500*e*20)/100);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		else{
			cout<<"Enter the number of Adult Tickets(1-8):"<<endl;
    		cin>>d;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=8)&&(d>=0)){
			if(d>=4){
    			price=(500*d)-((500*d*10)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(500*d);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
        break;
    default:
    	cout<<" The enclosure is not Present"<<endl;
        break;
        }
        break;
    case 3:
    	//IU vs PZ
    	cout << "  29 February 2020 | Islamabad United v Peshawar Zalmi (7 pm-10.15 pm)\n"<<endl;
    	cout << "(VIP _ Rs. 3000, PREMIUM _ Rs. 1500, FIRST_CLASS _ Rs. 1000, GENERAL _ Rs. 500)\n"<<endl;
    	cout<<" There are 8 enclosures select one: \n"<<endl;
    	cout << "  1. JAVED-AKHTER (VIP Enclosure) Max_1000 seats. \n"<<endl;
    	cout << "  2. JAVED-MIANDAD (VIP Enclosure) Max_1000 seats.\n"<<endl;
    	cout << "  3. IMRAN KHAN (VIP Enclosure) Max_1000 seats.\n"<<endl;
    	cout << "  4. AZHAR MEHMOOD (VIP Enclosure) Max_1000 seats.\n"<<endl;
    	cout << "  5. SOHAIL TANVEER (FIRST_CLASS Enclosure) Max_3000 seats.\n"<<endl;
    	cout << "  6. SHOAIB AKHTAR (PREMIUM Enclosure) Max_3000 seats.\n"<<endl;
    	cout << "  7. IMRAN BUKSH (GENERAL Enclosure) Max_2500 seats.\n"<<endl;
    	cout << "  8. YASIR ARAFAT (GENERAL Enclosure) Max_2500 seats.\n"<<endl;
    	cout<<"Enter which Enclosure u want to take(1-8): ";
  	    cin>>b;
    	
		switch (b) {
    	
    case 1:
    	limit = 1000;
  	    randomDigit = rand() % limit;
    	seats_available=randomDigit;
    	cout<<"The Available seats are: "<<seats_available<<endl;
    	cout<<"Do You Want To Buy Ticket For Family?(1/0)"<<endl;
    	cin>>c;
    	
    	if(c==1){
    		cout<<"Enter the number of Adult Tickets(1-4):"<<endl;
    		cin>>d;
    		cout<<"Enter the number of Children Tickets(1-5):"<<endl;
    		cin>>e;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=4)&&(d>=0)&&(e<=5)&&(e>=0)){
	
    		if(d>=4){
    			price=(3000*d)-((3000*d*10)/100)+(3000*e)-((3000*e*20)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(3000*d)+(3000*e)-((3000*e*20)/100);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		else{
			cout<<"Enter the number of Adult Tickets(1-8):"<<endl;
    		cin>>d;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=8)&&(d>=0)){
			if(d>=4){
    			price=(3000*d)-((3000*d*10)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(3000*d);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}	
		break;	
		
        
    case 2:
    	limit = 1000;
  	    randomDigit = rand() % limit;
    	seats_available=randomDigit;
    	cout<<"The Available seats are: "<<seats_available<<endl;
    	cout<<"Do You Want To Buy Ticket For Family?(1/0)"<<endl;
    	cin>>c;
    	
    	if(c==1){
    		cout<<"Enter the number of Adult Tickets(1-4):"<<endl;
    		cin>>d;
    		cout<<"Enter the number of Children Tickets(1-5):"<<endl;
    		cin>>e;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=4)&&(d>=0)&&(e<=5)&&(e>=0)){
	
    		if(d>=4){
    			price=(3000*d)-((3000*d*10)/100)+(3000*e)-((3000*e*20)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(3000*d)+(3000*e)-((3000*e*20)/100);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		else{
			cout<<"Enter the number of Adult Tickets(1-8):"<<endl;
    		cin>>d;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=8)&&(d>=0)){
			if(d>=4){
    			price=(3000*d)-((3000*d*10)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(3000*d);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		break;
    case 3:
    	limit = 1000;
  	    randomDigit = rand() % limit;
    	seats_available=randomDigit;
    	cout<<"The Available seats are: "<<seats_available<<endl;
    	cout<<"Do You Want To Buy Ticket For Family?(1/0)"<<endl;
    	cin>>c;
    	
    	if(c==1){
    		cout<<"Enter the number of Adult Tickets(1-4):"<<endl;
    		cin>>d;
    		cout<<"Enter the number of Children Tickets(1-5):"<<endl;
    		cin>>e;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=4)&&(d>=0)&&(e<=5)&&(e>=0)){
	
    		if(d>=4){
    			price=(3000*d)-((3000*d*10)/100)+(3000*e)-((3000*e*20)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(3000*d)+(3000*e)-((3000*e*20)/100);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		else{
			cout<<"Enter the number of Adult Tickets(1-8):"<<endl;
    		cin>>d;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=8)&&(d>=0)){
			if(d>=4){
    			price=(3000*d)-((3000*d*10)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(3000*d);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
        break;
    case 4:
    	limit = 1000;
  	    randomDigit = rand() % limit;
    	seats_available=randomDigit;
    	cout<<"The Available seats are: "<<seats_available<<endl;
    	cout<<"Do You Want To Buy Ticket For Family?(1/0)"<<endl;
    	cin>>c;
    	
    	if(c==1){
    		cout<<"Enter the number of Adult Tickets(1-4):"<<endl;
    		cin>>d;
    		cout<<"Enter the number of Children Tickets(1-5):"<<endl;
    		cin>>e;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=4)&&(d>=0)&&(e<=5)&&(e>=0)){
	
    		if(d>=4){
    			price=(3000*d)-((3000*d*10)/100)+(3000*e)-((3000*e*20)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(3000*d)+(3000*e)-((3000*e*20)/100);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		else{
			cout<<"Enter the number of Adult Tickets(1-8):"<<endl;
    		cin>>d;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=8)&&(d>=0)){
			if(d>=4){          
    			price=(3000*d)-((3000*d*10)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(3000*d);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
        break;
    case 5:
    	limit = 3000;
  	    randomDigit = rand() % limit;
    	seats_available=randomDigit;
    	cout<<"The Available seats are: "<<seats_available<<endl;
    	cout<<"Do You Want To Buy Ticket For Family?(1/0)"<<endl;
    	cin>>c;
    	
    	if(c==1){
    		cout<<"Enter the number of Adult Tickets(1-4):"<<endl;
    		cin>>d;
    		cout<<"Enter the number of Children Tickets(1-5):"<<endl;
    		cin>>e;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=4)&&(d>=0)&&(e<=5)&&(e>=0)){
	
    		if(d>=4){
    			price=(1000*d)-((1000*d*10)/100)+(1000*e)-((1000*e*20)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(1000*d)+(1000*e)-((1000*e*20)/100);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		else{
			cout<<"Enter the number of Adult Tickets(1-8):"<<endl;
    		cin>>d;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=8)&&(d>=0)){
			if(d>=4){
    			price=(1000*d)-((1000*d*10)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(1000*d);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
        break;    
    case 6:
    	limit = 3000;
  	    randomDigit = rand() % limit;
    	seats_available=randomDigit;
    	cout<<"The Available seats are: "<<seats_available<<endl;
    	cout<<"Do You Want To Buy Ticket For Family?(1/0)"<<endl;
    	cin>>c;
    	
    	if(c==1){
    		cout<<"Enter the number of Adult Tickets(1-4):"<<endl;
    		cin>>d;
    		cout<<"Enter the number of Children Tickets(1-5):"<<endl;
    		cin>>e;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=4)&&(d>=0)&&(e<=5)&&(e>=0)){
	
    		if(d>=4){
    			price=(1500*d)-((1500*d*10)/100)+(1500*e)-((1500*e*20)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(1500*d)+(1500*e)-((1500*e*20)/100);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		else{
			cout<<"Enter the number of Adult Tickets(1-8):"<<endl;
    		cin>>d;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=8)&&(d>=0)){
			if(d>=4){
    			price=(1500*d)-((1500*d*10)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(1500*d);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
        break;
	case 7:
    	limit = 2500;
  	    randomDigit = rand() % limit;
    	seats_available=randomDigit;
    	cout<<"The Available seats are: "<<seats_available<<endl;
    	cout<<"Do You Want To Buy Ticket For Family?(1/0)"<<endl;
    	cin>>c;
    	
    	if(c==1){
    		cout<<"Enter the number of Adult Tickets(1-4):"<<endl;
    		cin>>d;
    		cout<<"Enter the number of Children Tickets(1-5):"<<endl;
    		cin>>e;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=4)&&(d>=0)&&(e<=5)&&(e>=0)){
	
    		if(d>=4){
    			price=(500*d)-((500*d*10)/100)+(500*e)-((500*e*20)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(500*d)+(500*e)-((500*e*20)/100);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		else{
			cout<<"Enter the number of Adult Tickets(1-8):"<<endl;
    		cin>>d;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=8)&&(d>=0)){
			if(d>=4){
    			price=(500*d)-((500*d*10)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(500*d);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
        break;	    
    case 8:
    	limit = 2500;
  	    randomDigit = rand() % limit;
    	seats_available=randomDigit;
    	cout<<"The Available seats are: "<<seats_available<<endl;
    	cout<<"Do You Want To Buy Ticket For Family?(1/0)"<<endl;
    	cin>>c;
    	
    	if(c==1){
    		cout<<"Enter the number of Adult Tickets(1-4):"<<endl;
    		cin>>d;
    		cout<<"Enter the number of Children Tickets(1-5):"<<endl;
    		cin>>e;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=4)&&(d>=0)&&(e<=5)&&(e>=0)){
	
    		if(d>=4){
    			price=(500*d)-((500*d*10)/100)+(500*e)-((500*e*20)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(500*d)+(500*e)-((500*e*20)/100);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		else{
			cout<<"Enter the number of Adult Tickets(1-8):"<<endl;
    		cin>>d;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=8)&&(d>=0)){
			if(d>=4){
    			price=(500*d)-((500*d*10)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(500*d);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
        break;
    default:
    	cout<<" The enclosure is not Present"<<endl;
        break;
        }
    	break;
    case 4:
    	//IU vs KK
    	cout << "  1 March 2020 | Islamabad United v Karachi Kings (7 pm-10.15 pm)\n"<<endl;
    	cout << "(VIP _ Rs. 2000, PREMIUM _ Rs. 1000, FIRST_CLASS _ Rs. 500, GENERAL _ Rs. 250)\n"<<endl;
    	cout<<" There are 8 enclosures select one: \n"<<endl;
    	cout << "  1. JAVED-AKHTER (VIP Enclosure) Max_1000 seats. \n"<<endl;
    	cout << "  2. JAVED-MIANDAD (VIP Enclosure) Max_1000 seats.\n"<<endl;
    	cout << "  3. IMRAN KHAN (VIP Enclosure) Max_1000 seats.\n"<<endl;
    	cout << "  4. AZHAR MEHMOOD (VIP Enclosure) Max_1000 seats.\n"<<endl;
    	cout << "  5. SOHAIL TANVEER (FIRST_CLASS Enclosure) Max_3000 seats.\n"<<endl;
    	cout << "  6. SHOAIB AKHTAR (PREMIUM Enclosure) Max_3000 seats.\n"<<endl;
    	cout << "  7. IMRAN BUKSH (GENERAL Enclosure) Max_2500 seats.\n"<<endl;
    	cout << "  8. YASIR ARAFAT (GENERAL Enclosure) Max_2500 seats.\n"<<endl;
    	cout<<"Enter which Enclosure u want to take(1-8): ";
  	    cin>>b;
    	
		switch (b) {
    	
    case 1:
    	limit = 1000;
  	    randomDigit = rand() % limit;
    	seats_available=randomDigit;
    	cout<<"The Available seats are: "<<seats_available<<endl;
    	cout<<"Do You Want To Buy Ticket For Family?(1/0)"<<endl;
    	cin>>c;
    	
    	if(c==1){
    		cout<<"Enter the number of Adult Tickets(1-4):"<<endl;
    		cin>>d;
    		cout<<"Enter the number of Children Tickets(1-5):"<<endl;
    		cin>>e;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=4)&&(d>=0)&&(e<=5)&&(e>=0)){
	
    		if(d>=4){
    			price=(2000*d)-((2000*d*10)/100)+(2000*e)-((2000*e*20)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(2000*d)+(2000*e)-((2000*e*20)/100);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		else{
			cout<<"Enter the number of Adult Tickets(1-8):"<<endl;
    		cin>>d;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=8)&&(d>=0)){
			if(d>=4){
    			price=(2000*d)-((2000*d*10)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(2000*d);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}	
		break;	
		
        
    case 2:
    	limit = 1000;
  	    randomDigit = rand() % limit;
    	seats_available=randomDigit;
    	cout<<"The Available seats are: "<<seats_available<<endl;
    	cout<<"Do You Want To Buy Ticket For Family?(1/0)"<<endl;
    	cin>>c;
    	
    	if(c==1){
    		cout<<"Enter the number of Adult Tickets(1-4):"<<endl;
    		cin>>d;
    		cout<<"Enter the number of Children Tickets(1-5):"<<endl;
    		cin>>e;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=4)&&(d>=0)&&(e<=5)&&(e>=0)){
	
    		if(d>=4){
    			price=(2000*d)-((2000*d*10)/100)+(2000*e)-((2000*e*20)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(2000*d)+(2000*e)-((2000*e*20)/100);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		else{
			cout<<"Enter the number of Adult Tickets(1-8):"<<endl;
    		cin>>d;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=8)&&(d>=0)){
			if(d>=4){
    			price=(2000*d)-((2000*d*10)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(2000*d);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		break;
    case 3:
    	limit = 2000;
  	    randomDigit = rand() % limit;
    	seats_available=randomDigit;
    	cout<<"The Available seats are: "<<seats_available<<endl;
    	cout<<"Do You Want To Buy Ticket For Family?(1/0)"<<endl;
    	cin>>c;
    	
    	if(c==1){
    		cout<<"Enter the number of Adult Tickets(1-4):"<<endl;
    		cin>>d;
    		cout<<"Enter the number of Children Tickets(1-5):"<<endl;
    		cin>>e;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=4)&&(d>=0)&&(e<=5)&&(e>=0)){
	
    		if(d>=4){
    			price=(2000*d)-((2000*d*10)/100)+(2000*e)-((2000*e*20)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(2000*d)+(2000*e)-((2000*e*20)/100);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		else{
			cout<<"Enter the number of Adult Tickets(1-8):"<<endl;
    		cin>>d;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=8)&&(d>=0)){
			if(d>=4){
    			price=(2000*d)-((2000*d*10)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(2000*d);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
        break;
    case 4:
    	limit = 1000;
  	    randomDigit = rand() % limit;
    	seats_available=randomDigit;
    	cout<<"The Available seats are: "<<seats_available<<endl;
    	cout<<"Do You Want To Buy Ticket For Family?(1/0)"<<endl;
    	cin>>c;
    	
    	if(c==1){
    		cout<<"Enter the number of Adult Tickets(1-4):"<<endl;
    		cin>>d;
    		cout<<"Enter the number of Children Tickets(1-5):"<<endl;
    		cin>>e;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=4)&&(d>=0)&&(e<=5)&&(e>=0)){
	
    		if(d>=4){
    			price=(2000*d)-((2000*d*10)/100)+(2000*e)-((2000*e*20)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(2000*d)+(2000*e)-((2000*e*20)/100);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		else{
			cout<<"Enter the number of Adult Tickets(1-8):"<<endl;
    		cin>>d;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=8)&&(d>=0)){
			if(d>=4){          
    			price=(2000*d)-((2000*d*10)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(2000*d);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
        break;
    case 5:
    	limit = 3000;
  	    randomDigit = rand() % limit;
    	seats_available=randomDigit;
    	cout<<"The Available seats are: "<<seats_available<<endl;
    	cout<<"Do You Want To Buy Ticket For Family?(1/0)"<<endl;
    	cin>>c;
    	
    	if(c==1){
    		cout<<"Enter the number of Adult Tickets(1-4):"<<endl;
    		cin>>d;
    		cout<<"Enter the number of Children Tickets(1-5):"<<endl;
    		cin>>e;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=4)&&(d>=0)&&(e<=5)&&(e>=0)){
	
    		if(d>=4){
    			price=(500*d)-((500*d*10)/100)+(500*e)-((500*e*20)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(500*d)+(500*e)-((500*e*20)/100);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		else{
			cout<<"Enter the number of Adult Tickets(1-8):"<<endl;
    		cin>>d;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=8)&&(d>=0)){
			if(d>=4){
    			price=(500*d)-((500*d*10)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(500*d);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
        break;    
    case 6:
    	limit = 3000;
  	    randomDigit = rand() % limit;
    	seats_available=randomDigit;
    	cout<<"The Available seats are: "<<seats_available<<endl;
    	cout<<"Do You Want To Buy Ticket For Family?(1/0)"<<endl;
    	cin>>c;
    	
    	if(c==1){
    		cout<<"Enter the number of Adult Tickets(1-4):"<<endl;
    		cin>>d;
    		cout<<"Enter the number of Children Tickets(1-5):"<<endl;
    		cin>>e;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=4)&&(d>=0)&&(e<=5)&&(e>=0)){
	
    		if(d>=4){
    			price=(1000*d)-((1000*d*10)/100)+(1000*e)-((1000*e*20)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(1000*d)+(1000*e)-((1000*e*20)/100);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		else{
			cout<<"Enter the number of Adult Tickets(1-8):"<<endl;
    		cin>>d;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=8)&&(d>=0)){
			if(d>=4){
    			price=(1000*d)-((1000*d*10)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(1000*d);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
        break;
	case 7:
    	limit = 2500;
  	    randomDigit = rand() % limit;
    	seats_available=randomDigit;
    	cout<<"The Available seats are: "<<seats_available<<endl;
    	cout<<"Do You Want To Buy Ticket For Family?(1/0)"<<endl;
    	cin>>c;
    	
    	if(c==1){
    		cout<<"Enter the number of Adult Tickets(1-4):"<<endl;
    		cin>>d;
    		cout<<"Enter the number of Children Tickets(1-5):"<<endl;
    		cin>>e;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=4)&&(d>=0)&&(e<=5)&&(e>=0)){
	
    		if(d>=4){
    			price=(250*d)-((250*d*10)/100)+(250*e)-((250*e*20)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(250*d)+(250*e)-((250*e*20)/100);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		else{
			cout<<"Enter the number of Adult Tickets(1-8):"<<endl;
    		cin>>d;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=8)&&(d>=0)){
			if(d>=4){
    			price=(250*d)-((250*d*10)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(250*d);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
        break;	    
    case 8:
    	limit = 2500;
  	    randomDigit = rand() % limit;
    	seats_available=randomDigit;
    	cout<<"The Available seats are: "<<seats_available<<endl;
    	cout<<"Do You Want To Buy Ticket For Family?(1/0)"<<endl;
    	cin>>c;
    	
    	if(c==1){
    		cout<<"Enter the number of Adult Tickets(1-4):"<<endl;
    		cin>>d;
    		cout<<"Enter the number of Children Tickets(1-5):"<<endl;
    		cin>>e;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=4)&&(d>=0)&&(e<=5)&&(e>=0)){
	
    		if(d>=4){
    			price=(250*d)-((250*d*10)/100)+(250*e)-((250*e*20)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(250*d)+(500*e)-((250*e*20)/100);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		else{
			cout<<"Enter the number of Adult Tickets(1-8):"<<endl;
    		cin>>d;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=8)&&(d>=0)){
			if(d>=4){
    			price=(250*d)-((250*d*10)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(250*d);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
        break;
    default:
    	cout<<" The enclosure is not Present"<<endl;
        break;
        }
        break;
    case 5:
    	//PZ vs KK
    	cout << "  2 March 2020 | Peshawar Zalmi v Karachi Kings (7 pm-10.15 pm)\n"<<endl;
    	cout << "(VIP _ Rs. 1500, PREMIUM _ Rs. 1000, FIRST_CLASS _ Rs. 500, GENERAL _ Rs. 250)\n"<<endl;
    	cout<<" There are 8 enclosures select one: \n"<<endl;
    	cout << "  1. JAVED-AKHTER (VIP Enclosure) Max_1000 seats. \n"<<endl;
    	cout << "  2. JAVED-MIANDAD (VIP Enclosure) Max_1000 seats.\n"<<endl;
    	cout << "  3. IMRAN KHAN (VIP Enclosure) Max_1000 seats.\n"<<endl;
    	cout << "  4. AZHAR MEHMOOD (VIP Enclosure) Max_1000 seats.\n"<<endl;
    	cout << "  5. SOHAIL TANVEER (FIRST_CLASS Enclosure) Max_3000 seats.\n"<<endl;
    	cout << "  6. SHOAIB AKHTAR (PREMIUM Enclosure) Max_3000 seats.\n"<<endl;
    	cout << "  7. IMRAN BUKSH (GENERAL Enclosure) Max_2500 seats.\n"<<endl;
    	cout << "  8. YASIR ARAFAT (GENERAL Enclosure) Max_2500 seats.\n"<<endl;
    	cout<<"Enter which Enclosure u want to take(1-8): ";
  	    cin>>b;
    	
		switch (b) {
    	
    case 1:
    	limit = 1000;
  	    randomDigit = rand() % limit;
    	seats_available=randomDigit;
    	cout<<"The Available seats are: "<<seats_available<<endl;
    	cout<<"Do You Want To Buy Ticket For Family?(1/0)"<<endl;
    	cin>>c;
    	
    	if(c==1){
    		cout<<"Enter the number of Adult Tickets(1-4):"<<endl;
    		cin>>d;
    		cout<<"Enter the number of Children Tickets(1-5):"<<endl;
    		cin>>e;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=4)&&(d>=0)&&(e<=5)&&(e>=0)){
	
    		if(d>=4){
    			price=(1500*d)-((1500*d*10)/100)+(1500*e)-((1500*e*20)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(1500*d)+(1500*e)-((1500*e*20)/100);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		else{
			cout<<"Enter the number of Adult Tickets(1-8):"<<endl;
    		cin>>d;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=8)&&(d>=0)){
			if(d>=4){
    			price=(1500*d)-((1500*d*10)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(1500*d);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}	
		break;	
		
        
    case 2:
    	limit = 1000;
  	    randomDigit = rand() % limit;
    	seats_available=randomDigit;
    	cout<<"The Available seats are: "<<seats_available<<endl;
    	cout<<"Do You Want To Buy Ticket For Family?(1/0)"<<endl;
    	cin>>c;
    	
    	if(c==1){
    		cout<<"Enter the number of Adult Tickets(1-4):"<<endl;
    		cin>>d;
    		cout<<"Enter the number of Children Tickets(1-5):"<<endl;
    		cin>>e;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=4)&&(d>=0)&&(e<=5)&&(e>=0)){
	
    		if(d>=4){
    			price=(1500*d)-((1500*d*10)/100)+(1500*e)-((1500*e*20)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(1500*d)+(1500*e)-((1500*e*20)/100);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		else{
			cout<<"Enter the number of Adult Tickets(1-8):"<<endl;
    		cin>>d;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=8)&&(d>=0)){
			if(d>=4){
    			price=(1500*d)-((1500*d*10)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(1500*d);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		break;
    case 3:
    	limit = 1000;
  	    randomDigit = rand() % limit;
    	seats_available=randomDigit;
    	cout<<"The Available seats are: "<<seats_available<<endl;
    	cout<<"Do You Want To Buy Ticket For Family?(1/0)"<<endl;
    	cin>>c;
    	
    	if(c==1){
    		cout<<"Enter the number of Adult Tickets(1-4):"<<endl;
    		cin>>d;
    		cout<<"Enter the number of Children Tickets(1-5):"<<endl;
    		cin>>e;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=4)&&(d>=0)&&(e<=5)&&(e>=0)){
	
    		if(d>=4){
    			price=(1500*d)-((1500*d*10)/100)+(1500*e)-((1500*e*20)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(1500*d)+(1500*e)-((1500*e*20)/100);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		else{
			cout<<"Enter the number of Adult Tickets(1-8):"<<endl;
    		cin>>d;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=8)&&(d>=0)){
			if(d>=4){
    			price=(1500*d)-((1500*d*10)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(1500*d);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
        break;
    case 4:
    	limit = 1000;
  	    randomDigit = rand() % limit;
    	seats_available=randomDigit;
    	cout<<"The Available seats are: "<<seats_available<<endl;
    	cout<<"Do You Want To Buy Ticket For Family?(1/0)"<<endl;
    	cin>>c;
    	
    	if(c==1){
    		cout<<"Enter the number of Adult Tickets(1-4):"<<endl;
    		cin>>d;
    		cout<<"Enter the number of Children Tickets(1-5):"<<endl;
    		cin>>e;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=4)&&(d>=0)&&(e<=5)&&(e>=0)){
	
    		if(d>=4){
    			price=(1500*d)-((1500*d*10)/100)+(1500*e)-((1500*e*20)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(1500*d)+(1500*e)-((1500*e*20)/100);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		else{
			cout<<"Enter the number of Adult Tickets(1-8):"<<endl;
    		cin>>d;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=8)&&(d>=0)){
			if(d>=4){          
    			price=(1500*d)-((1500*d*10)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(1500*d);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
        break;
    case 5:
    	limit = 3000;
  	    randomDigit = rand() % limit;
    	seats_available=randomDigit;
    	cout<<"The Available seats are: "<<seats_available<<endl;
    	cout<<"Do You Want To Buy Ticket For Family?(1/0)"<<endl;
    	cin>>c;
    	
    	if(c==1){
    		cout<<"Enter the number of Adult Tickets(1-4):"<<endl;
    		cin>>d;
    		cout<<"Enter the number of Children Tickets(1-5):"<<endl;
    		cin>>e;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=4)&&(d>=0)&&(e<=5)&&(e>=0)){
	
    		if(d>=4){
    			price=(500*d)-((500*d*10)/100)+(500*e)-((500*e*20)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(500*d)+(500*e)-((500*e*20)/100);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		else{
			cout<<"Enter the number of Adult Tickets(1-8):"<<endl;
    		cin>>d;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=8)&&(d>=0)){
			if(d>=4){
    			price=(500*d)-((500*d*10)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(500*d);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
        break;    
    case 6:
    	limit = 3000;
  	    randomDigit = rand() % limit;
    	seats_available=randomDigit;
    	cout<<"The Available seats are: "<<seats_available<<endl;
    	cout<<"Do You Want To Buy Ticket For Family?(1/0)"<<endl;
    	cin>>c;
    	
    	if(c==1){
    		cout<<"Enter the number of Adult Tickets(1-4):"<<endl;
    		cin>>d;
    		cout<<"Enter the number of Children Tickets(1-5):"<<endl;
    		cin>>e;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=4)&&(d>=0)&&(e<=5)&&(e>=0)){
	
    		if(d>=4){
    			price=(1000*d)-((1000*d*10)/100)+(1000*e)-((1000*e*20)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(1000*d)+(1000*e)-((1000*e*20)/100);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		else{
			cout<<"Enter the number of Adult Tickets(1-8):"<<endl;
    		cin>>d;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=8)&&(d>=0)){
			if(d>=4){
    			price=(1000*d)-((1000*d*10)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(1000*d);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
        break;
	case 7:
    	limit = 2500;
  	    randomDigit = rand() % limit;
    	seats_available=randomDigit;
    	cout<<"The Available seats are: "<<seats_available<<endl;
    	cout<<"Do You Want To Buy Ticket For Family?(1/0)"<<endl;
    	cin>>c;
    	
    	if(c==1){
    		cout<<"Enter the number of Adult Tickets(1-4):"<<endl;
    		cin>>d;
    		cout<<"Enter the number of Children Tickets(1-5):"<<endl;
    		cin>>e;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=4)&&(d>=0)&&(e<=5)&&(e>=0)){
	
    		if(d>=4){
    			price=(250*d)-((250*d*10)/100)+(250*e)-((250*e*20)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(250*d)+(250*e)-((250*e*20)/100);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		else{
			cout<<"Enter the number of Adult Tickets(1-8):"<<endl;
    		cin>>d;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=8)&&(d>=0)){
			if(d>=4){
    			price=(250*d)-((250*d*10)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(250*d);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
        break;	    
    case 8:
    	limit = 2500;
  	    randomDigit = rand() % limit;
    	seats_available=randomDigit;
    	cout<<"The Available seats are: "<<seats_available<<endl;
    	cout<<"Do You Want To Buy Ticket For Family?(1/0)"<<endl;
    	cin>>c;
    	
    	if(c==1){
    		cout<<"Enter the number of Adult Tickets(1-4):"<<endl;
    		cin>>d;
    		cout<<"Enter the number of Children Tickets(1-5):"<<endl;
    		cin>>e;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=4)&&(d>=0)&&(e<=5)&&(e>=0)){
	
    		if(d>=4){
    			price=(250*d)-((250*d*10)/100)+(250*e)-((250*e*20)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(250*d)+(500*e)-((250*e*20)/100);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		else{
			cout<<"Enter the number of Adult Tickets(1-8):"<<endl;
    		cin>>d;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=8)&&(d>=0)){
			if(d>=4){
    			price=(250*d)-((250*d*10)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(250*d);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
        break;
    default:
    	cout<<" The enclosure is not Present"<<endl;
        break;
        }
        break;
    case 6:
    	//PZ vs QG
    	cout << "  5 March 2020 | Peshawar Zalmi v Quetta Gladiators (7 pm-10.15 pm)\n"<<endl;
    	cout << "(VIP _ Rs. 1500, PREMIUM _ Rs. 1000, FIRST_CLASS _ Rs. 500, GENERAL _ Rs. 250)\n"<<endl;
    	cout<<" There are 8 enclosures select one: \n"<<endl;
    	cout << "  1. JAVED-AKHTER (VIP Enclosure) Max_1000 seats. \n"<<endl;
    	cout << "  2. JAVED-MIANDAD (VIP Enclosure) Max_1000 seats.\n"<<endl;
    	cout << "  3. IMRAN KHAN (VIP Enclosure) Max_1000 seats.\n"<<endl;
    	cout << "  4. AZHAR MEHMOOD (VIP Enclosure) Max_1000 seats.\n"<<endl;
    	cout << "  5. SOHAIL TANVEER (FIRST_CLASS Enclosure) Max_3000 seats.\n"<<endl;
    	cout << "  6. SHOAIB AKHTAR (PREMIUM Enclosure) Max_3000 seats.\n"<<endl;
    	cout << "  7. IMRAN BUKSH (GENERAL Enclosure) Max_2500 seats.\n"<<endl;
    	cout << "  8. YASIR ARAFAT (GENERAL Enclosure) Max_2500 seats.\n"<<endl;
    	cout<<"Enter which Enclosure u want to take(1-8): ";
  	    cin>>b;
    	
	switch (b) {
    	
    case 1:
    	limit = 1000;
  	    randomDigit = rand() % limit;
    	seats_available=randomDigit;
    	cout<<"The Available seats are: "<<seats_available<<endl;
    	cout<<"Do You Want To Buy Ticket For Family?(1/0)"<<endl;
    	cin>>c;
    	
    	if(c==1){
    		cout<<"Enter the number of Adult Tickets(1-4):"<<endl;
    		cin>>d;
    		cout<<"Enter the number of Children Tickets(1-5):"<<endl;
    		cin>>e;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=4)&&(d>=0)&&(e<=5)&&(e>=0)){
	
    		if(d>=4){
    			price=(1500*d)-((1500*d*10)/100)+(1500*e)-((1500*e*20)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(1500*d)+(1500*e)-((1500*e*20)/100);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		else{
			cout<<"Enter the number of Adult Tickets(1-8):"<<endl;
    		cin>>d;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=8)&&(d>=0)){
			if(d>=4){
    			price=(1500*d)-((1500*d*10)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(1500*d);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}	
		break;	
		
        
    case 2:
    	limit = 1000;
  	    randomDigit = rand() % limit;
    	seats_available=randomDigit;
    	cout<<"The Available seats are: "<<seats_available<<endl;
    	cout<<"Do You Want To Buy Ticket For Family?(1/0)"<<endl;
    	cin>>c;
    	
    	if(c==1){
    		cout<<"Enter the number of Adult Tickets(1-4):"<<endl;
    		cin>>d;
    		cout<<"Enter the number of Children Tickets(1-5):"<<endl;
    		cin>>e;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=4)&&(d>=0)&&(e<=5)&&(e>=0)){
	
    		if(d>=4){
    			price=(1500*d)-((1500*d*10)/100)+(1500*e)-((1500*e*20)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(1500*d)+(1500*e)-((1500*e*20)/100);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		else{
			cout<<"Enter the number of Adult Tickets(1-8):"<<endl;
    		cin>>d;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=8)&&(d>=0)){
			if(d>=4){
    			price=(1500*d)-((1500*d*10)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(1500*d);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		break;
    case 3:
    	limit = 1000;
  	    randomDigit = rand() % limit;
    	seats_available=randomDigit;
    	cout<<"The Available seats are: "<<seats_available<<endl;
    	cout<<"Do You Want To Buy Ticket For Family?(1/0)"<<endl;
    	cin>>c;
    	
    	if(c==1){
    		cout<<"Enter the number of Adult Tickets(1-4):"<<endl;
    		cin>>d;
    		cout<<"Enter the number of Children Tickets(1-5):"<<endl;
    		cin>>e;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=4)&&(d>=0)&&(e<=5)&&(e>=0)){
	
    		if(d>=4){
    			price=(1500*d)-((1500*d*10)/100)+(1500*e)-((1500*e*20)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(1500*d)+(1500*e)-((1500*e*20)/100);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		else{
			cout<<"Enter the number of Adult Tickets(1-8):"<<endl;
    		cin>>d;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=8)&&(d>=0)){
			if(d>=4){
    			price=(1500*d)-((1500*d*10)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(1500*d);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
        break;
    case 4:
    	limit = 1000;
  	    randomDigit = rand() % limit;
    	seats_available=randomDigit;
    	cout<<"The Available seats are: "<<seats_available<<endl;
    	cout<<"Do You Want To Buy Ticket For Family?(1/0)"<<endl;
    	cin>>c;
    	
    	if(c==1){
    		cout<<"Enter the number of Adult Tickets(1-4):"<<endl;
    		cin>>d;
    		cout<<"Enter the number of Children Tickets(1-5):"<<endl;
    		cin>>e;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=4)&&(d>=0)&&(e<=5)&&(e>=0)){
	
    		if(d>=4){
    			price=(1500*d)-((1500*d*10)/100)+(1500*e)-((1500*e*20)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(1500*d)+(1500*e)-((1500*e*20)/100);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		else{
			cout<<"Enter the number of Adult Tickets(1-8):"<<endl;
    		cin>>d;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=8)&&(d>=0)){
			if(d>=4){          
    			price=(1500*d)-((1500*d*10)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(1500*d);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
        break;
    case 5:
    	limit = 3000;
  	    randomDigit = rand() % limit;
    	seats_available=randomDigit;
    	cout<<"The Available seats are: "<<seats_available<<endl;
    	cout<<"Do You Want To Buy Ticket For Family?(1/0)"<<endl;
    	cin>>c;
    	
    	if(c==1){
    		cout<<"Enter the number of Adult Tickets(1-4):"<<endl;
    		cin>>d;
    		cout<<"Enter the number of Children Tickets(1-5):"<<endl;
    		cin>>e;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=4)&&(d>=0)&&(e<=5)&&(e>=0)){
	
    		if(d>=4){
    			price=(500*d)-((500*d*10)/100)+(500*e)-((500*e*20)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(500*d)+(500*e)-((500*e*20)/100);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		else{
			cout<<"Enter the number of Adult Tickets(1-8):"<<endl;
    		cin>>d;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=8)&&(d>=0)){
			if(d>=4){
    			price=(500*d)-((500*d*10)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(500*d);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
        break;    
    case 6:
    	limit = 3000;
  	    randomDigit = rand() % limit;
    	seats_available=randomDigit;
    	cout<<"The Available seats are: "<<seats_available<<endl;
    	cout<<"Do You Want To Buy Ticket For Family?(1/0)"<<endl;
    	cin>>c;
    	
    	if(c==1){
    		cout<<"Enter the number of Adult Tickets(1-4):"<<endl;
    		cin>>d;
    		cout<<"Enter the number of Children Tickets(1-5):"<<endl;
    		cin>>e;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=4)&&(d>=0)&&(e<=5)&&(e>=0)){
	
    		if(d>=4){
    			price=(1000*d)-((1000*d*10)/100)+(1000*e)-((1000*e*20)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(1000*d)+(1000*e)-((1000*e*20)/100);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		else{
			cout<<"Enter the number of Adult Tickets(1-8):"<<endl;
    		cin>>d;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=8)&&(d>=0)){
			if(d>=4){
    			price=(1000*d)-((1000*d*10)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(1000*d);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
        break;
	case 7:
    	limit = 2500;
  	    randomDigit = rand() % limit;
    	seats_available=randomDigit;
    	cout<<"The Available seats are: "<<seats_available<<endl;
    	cout<<"Do You Want To Buy Ticket For Family?(1/0)"<<endl;
    	cin>>c;
    	
    	if(c==1){
    		cout<<"Enter the number of Adult Tickets(1-4):"<<endl;
    		cin>>d;
    		cout<<"Enter the number of Children Tickets(1-5):"<<endl;
    		cin>>e;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=4)&&(d>=0)&&(e<=5)&&(e>=0)){
	
    		if(d>=4){
    			price=(250*d)-((250*d*10)/100)+(250*e)-((250*e*20)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(250*d)+(250*e)-((250*e*20)/100);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		else{
			cout<<"Enter the number of Adult Tickets(1-8):"<<endl;
    		cin>>d;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=8)&&(d>=0)){
			if(d>=4){
    			price=(250*d)-((250*d*10)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(250*d);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
        break;	    
    case 8:
    	limit = 2500;
  	    randomDigit = rand() % limit;
    	seats_available=randomDigit;
    	cout<<"The Available seats are: "<<seats_available<<endl;
    	cout<<"Do You Want To Buy Ticket For Family?(1/0)"<<endl;
    	cin>>c;
    	
    	if(c==1){
    		cout<<"Enter the number of Adult Tickets(1-4):"<<endl;
    		cin>>d;
    		cout<<"Enter the number of Children Tickets(1-5):"<<endl;
    		cin>>e;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=4)&&(d>=0)&&(e<=5)&&(e>=0)){
	
    		if(d>=4){
    			price=(250*d)-((250*d*10)/100)+(250*e)-((250*e*20)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(250*d)+(500*e)-((250*e*20)/100);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		else{
			cout<<"Enter the number of Adult Tickets(1-8):"<<endl;
    		cin>>d;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=8)&&(d>=0)){
			if(d>=4){
    			price=(250*d)-((250*d*10)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(250*d);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
        break;
    default:
    	cout<<" The enclosure is not Present"<<endl;
        break;
        }
        break;
    case 7:
    	//PZ vs IU
    	cout << "  7 March 2020 | Peshawar Zalmi v Islamabad United (2 pm-5.15 pm)\n"<<endl;
    	cout << "(VIP _ Rs. 2000, PREMIUM _ Rs. 1000, FIRST_CLASS _ Rs. 500, GENERAL _ Rs. 250)\n"<<endl;
    	cout<<" There are 8 enclosures select one: \n"<<endl;
    	cout << "  1. JAVED-AKHTER (VIP Enclosure) Max_1000 seats. \n"<<endl;
    	cout << "  2. JAVED-MIANDAD (VIP Enclosure) Max_1000 seats.\n"<<endl;
    	cout << "  3. IMRAN KHAN (VIP Enclosure) Max_1000 seats.\n"<<endl;
    	cout << "  4. AZHAR MEHMOOD (VIP Enclosure) Max_1000 seats.\n"<<endl;
    	cout << "  5. SOHAIL TANVEER (FIRST_CLASS Enclosure) Max_3000 seats.\n"<<endl;
    	cout << "  6. SHOAIB AKHTAR (PREMIUM Enclosure) Max_3000 seats.\n"<<endl;
    	cout << "  7. IMRAN BUKSH (GENERAL Enclosure) Max_2500 seats.\n"<<endl;
    	cout << "  8. YASIR ARAFAT (GENERAL Enclosure) Max_2500 seats.\n"<<endl;
    	cout<<"Enter which Enclosure u want to take(1-8): ";
  	    cin>>b;
    	
			switch (b) {
    	
    case 1:
    	limit = 1000;
  	    randomDigit = rand() % limit;
    	seats_available=randomDigit;
    	cout<<"The Available seats are: "<<seats_available<<endl;
    	cout<<"Do You Want To Buy Ticket For Family?(1/0)"<<endl;
    	cin>>c;
    	
    	if(c==1){
    		cout<<"Enter the number of Adult Tickets(1-4):"<<endl;
    		cin>>d;
    		cout<<"Enter the number of Children Tickets(1-5):"<<endl;
    		cin>>e;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=4)&&(d>=0)&&(e<=5)&&(e>=0)){
	
    		if(d>=4){
    			price=(2000*d)-((2000*d*10)/100)+(2000*e)-((2000*e*20)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(2000*d)+(2000*e)-((2000*e*20)/100);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		else{
			cout<<"Enter the number of Adult Tickets(1-8):"<<endl;
    		cin>>d;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=8)&&(d>=0)){
			if(d>=4){
    			price=(2000*d)-((2000*d*10)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(2000*d);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}	
		break;	
		
        
    case 2:
    	limit = 1000;
  	    randomDigit = rand() % limit;
    	seats_available=randomDigit;
    	cout<<"The Available seats are: "<<seats_available<<endl;
    	cout<<"Do You Want To Buy Ticket For Family?(1/0)"<<endl;
    	cin>>c;
    	
    	if(c==1){
    		cout<<"Enter the number of Adult Tickets(1-4):"<<endl;
    		cin>>d;
    		cout<<"Enter the number of Children Tickets(1-5):"<<endl;
    		cin>>e;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=4)&&(d>=0)&&(e<=5)&&(e>=0)){
	
    		if(d>=4){
    			price=(2000*d)-((2000*d*10)/100)+(2000*e)-((2000*e*20)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(2000*d)+(2000*e)-((2000*e*20)/100);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		else{
			cout<<"Enter the number of Adult Tickets(1-8):"<<endl;
    		cin>>d;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=8)&&(d>=0)){
			if(d>=4){
    			price=(2000*d)-((2000*d*10)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(2000*d);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		break;
    case 3:
    	limit = 1000;
  	    randomDigit = rand() % limit;
    	seats_available=randomDigit;
    	cout<<"The Available seats are: "<<seats_available<<endl;
    	cout<<"Do You Want To Buy Ticket For Family?(1/0)"<<endl;
    	cin>>c;
    	
    	if(c==1){
    		cout<<"Enter the number of Adult Tickets(1-4):"<<endl;
    		cin>>d;
    		cout<<"Enter the number of Children Tickets(1-5):"<<endl;
    		cin>>e;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=4)&&(d>=0)&&(e<=5)&&(e>=0)){
	
    		if(d>=4){
    			price=(2000*d)-((2000*d*10)/100)+(2000*e)-((2000*e*20)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(2000*d)+(2000*e)-((2000*e*20)/100);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		else{
			cout<<"Enter the number of Adult Tickets(1-8):"<<endl;
    		cin>>d;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=8)&&(d>=0)){
			if(d>=4){
    			price=(2000*d)-((2000*d*10)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(2000*d);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
        break;
    case 4:
    	limit = 1000;
  	    randomDigit = rand() % limit;
    	seats_available=randomDigit;
    	cout<<"The Available seats are: "<<seats_available<<endl;
    	cout<<"Do You Want To Buy Ticket For Family?(1/0)"<<endl;
    	cin>>c;
    	
    	if(c==1){
    		cout<<"Enter the number of Adult Tickets(1-4):"<<endl;
    		cin>>d;
    		cout<<"Enter the number of Children Tickets(1-5):"<<endl;
    		cin>>e;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=4)&&(d>=0)&&(e<=5)&&(e>=0)){
	
    		if(d>=4){
    			price=(2000*d)-((2000*d*10)/100)+(2000*e)-((2000*e*20)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(2000*d)+(2000*e)-((2000*e*20)/100);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		else{
			cout<<"Enter the number of Adult Tickets(1-8):"<<endl;
    		cin>>d;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=8)&&(d>=0)){
			if(d>=4){          
    			price=(2000*d)-((2000*d*10)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(2000*d);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
        break;
    case 5:
    	limit = 3000;
  	    randomDigit = rand() % limit;
    	seats_available=randomDigit;
    	cout<<"The Available seats are: "<<seats_available<<endl;
    	cout<<"Do You Want To Buy Ticket For Family?(1/0)"<<endl;
    	cin>>c;
    	
    	if(c==1){
    		cout<<"Enter the number of Adult Tickets(1-4):"<<endl;
    		cin>>d;
    		cout<<"Enter the number of Children Tickets(1-5):"<<endl;
    		cin>>e;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=4)&&(d>=0)&&(e<=5)&&(e>=0)){
	
    		if(d>=4){
    			price=(500*d)-((500*d*10)/100)+(500*e)-((500*e*20)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(500*d)+(500*e)-((500*e*20)/100);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		else{
			cout<<"Enter the number of Adult Tickets(1-8):"<<endl;
    		cin>>d;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=8)&&(d>=0)){
			if(d>=4){
    			price=(500*d)-((500*d*10)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(500*d);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
        break;    
    case 6:
    	limit = 3000;
  	    randomDigit = rand() % limit;
    	seats_available=randomDigit;
    	cout<<"The Available seats are: "<<seats_available<<endl;
    	cout<<"Do You Want To Buy Ticket For Family?(1/0)"<<endl;
    	cin>>c;
    	
    	if(c==1){
    		cout<<"Enter the number of Adult Tickets(1-4):"<<endl;
    		cin>>d;
    		cout<<"Enter the number of Children Tickets(1-5):"<<endl;
    		cin>>e;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=4)&&(d>=0)&&(e<=5)&&(e>=0)){
	
    		if(d>=4){
    			price=(1000*d)-((1000*d*10)/100)+(1000*e)-((1000*e*20)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(1000*d)+(1000*e)-((1000*e*20)/100);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		else{
			cout<<"Enter the number of Adult Tickets(1-8):"<<endl;
    		cin>>d;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=8)&&(d>=0)){
			if(d>=4){
    			price=(1000*d)-((1000*d*10)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(1000*d);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
        break;
	case 7:
    	limit = 2500;
  	    randomDigit = rand() % limit;
    	seats_available=randomDigit;
    	cout<<"The Available seats are: "<<seats_available<<endl;
    	cout<<"Do You Want To Buy Ticket For Family?(1/0)"<<endl;
    	cin>>c;
    	
    	if(c==1){
    		cout<<"Enter the number of Adult Tickets(1-4):"<<endl;
    		cin>>d;
    		cout<<"Enter the number of Children Tickets(1-5):"<<endl;
    		cin>>e;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=4)&&(d>=0)&&(e<=5)&&(e>=0)){
	
    		if(d>=4){
    			price=(250*d)-((250*d*10)/100)+(250*e)-((250*e*20)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(250*d)+(250*e)-((250*e*20)/100);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		else{
			cout<<"Enter the number of Adult Tickets(1-8):"<<endl;
    		cin>>d;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=8)&&(d>=0)){
			if(d>=4){
    			price=(250*d)-((250*d*10)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(250*d);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
        break;	    
    case 8:
    	limit = 2500;
  	    randomDigit = rand() % limit;
    	seats_available=randomDigit;
    	cout<<"The Available seats are: "<<seats_available<<endl;
    	cout<<"Do You Want To Buy Ticket For Family?(1/0)"<<endl;
    	cin>>c;
    	
    	if(c==1){
    		cout<<"Enter the number of Adult Tickets(1-4):"<<endl;
    		cin>>d;
    		cout<<"Enter the number of Children Tickets(1-5):"<<endl;
    		cin>>e;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=4)&&(d>=0)&&(e<=5)&&(e>=0)){
	
    		if(d>=4){
    			price=(250*d)-((250*d*10)/100)+(250*e)-((250*e*20)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(250*d)+(500*e)-((250*e*20)/100);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		else{
			cout<<"Enter the number of Adult Tickets(1-8):"<<endl;
    		cin>>d;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=8)&&(d>=0)){
			if(d>=4){
    			price=(250*d)-((250*d*10)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(250*d);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
        break;
    default:
    	cout<<" The enclosure is not Present"<<endl;
        break;
        }
        break;
    case 8:
    	//MS vs IU
    	cout << "  8 March 2020 | Multan Sultans v Islamabad United (2 pm-5.15 pm)\n"<<endl;
    	cout << "(VIP _ Rs. 1500, PREMIUM _ Rs. 1000, FIRST_CLASS _ Rs. 500, GENERAL _ Rs. 250)\n"<<endl;
    	cout<<" There are 8 enclosures select one: \n"<<endl;
    	cout << "  1. JAVED-AKHTER (VIP Enclosure) Max_1000 seats. \n"<<endl;
    	cout << "  2. JAVED-MIANDAD (VIP Enclosure) Max_1000 seats.\n"<<endl;
    	cout << "  3. IMRAN KHAN (VIP Enclosure) Max_1000 seats.\n"<<endl;
    	cout << "  4. AZHAR MEHMOOD (VIP Enclosure) Max_1000 seats.\n"<<endl;
    	cout << "  5. SOHAIL TANVEER (FIRST_CLASS Enclosure) Max_3000 seats.\n"<<endl;
    	cout << "  6. SHOAIB AKHTAR (PREMIUM Enclosure) Max_3000 seats.\n"<<endl;
    	cout << "  7. IMRAN BUKSH (GENERAL Enclosure) Max_2500 seats.\n"<<endl;
    	cout << "  8. YASIR ARAFAT (GENERAL Enclosure) Max_2500 seats.\n"<<endl;
    	cout<<"Enter which Enclosure u want to take(1-8): ";
  	    cin>>b;
    	
			switch (b) {
    	
    case 1:
    	limit = 1000;
  	    randomDigit = rand() % limit;
    	seats_available=randomDigit;
    	cout<<"The Available seats are: "<<seats_available<<endl;
    	cout<<"Do You Want To Buy Ticket For Family?(1/0)"<<endl;
    	cin>>c;
    	
    	if(c==1){
    		cout<<"Enter the number of Adult Tickets(1-4):"<<endl;
    		cin>>d;
    		cout<<"Enter the number of Children Tickets(1-5):"<<endl;
    		cin>>e;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=4)&&(d>=0)&&(e<=5)&&(e>=0)){
	
    		if(d>=4){
    			price=(1500*d)-((1500*d*10)/100)+(1500*e)-((1500*e*20)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(1500*d)+(1500*e)-((1500*e*20)/100);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		else{
			cout<<"Enter the number of Adult Tickets(1-8):"<<endl;
    		cin>>d;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=8)&&(d>=0)){
			if(d>=4){
    			price=(1500*d)-((1500*d*10)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(1500*d);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}	
		break;	
		
        
    case 2:
    	limit = 1000;
  	    randomDigit = rand() % limit;
    	seats_available=randomDigit;
    	cout<<"The Available seats are: "<<seats_available<<endl;
    	cout<<"Do You Want To Buy Ticket For Family?(1/0)"<<endl;
    	cin>>c;
    	
    	if(c==1){
    		cout<<"Enter the number of Adult Tickets(1-4):"<<endl;
    		cin>>d;
    		cout<<"Enter the number of Children Tickets(1-5):"<<endl;
    		cin>>e;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=4)&&(d>=0)&&(e<=5)&&(e>=0)){
	
    		if(d>=4){
    			price=(1500*d)-((1500*d*10)/100)+(1500*e)-((1500*e*20)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(1500*d)+(1500*e)-((1500*e*20)/100);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		else{
			cout<<"Enter the number of Adult Tickets(1-8):"<<endl;
    		cin>>d;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=8)&&(d>=0)){
			if(d>=4){
    			price=(1500*d)-((1500*d*10)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(1500*d);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		break;
    case 3:
    	limit = 1000;
  	    randomDigit = rand() % limit;
    	seats_available=randomDigit;
    	cout<<"The Available seats are: "<<seats_available<<endl;
    	cout<<"Do You Want To Buy Ticket For Family?(1/0)"<<endl;
    	cin>>c;
    	
    	if(c==1){
    		cout<<"Enter the number of Adult Tickets(1-4):"<<endl;
    		cin>>d;
    		cout<<"Enter the number of Children Tickets(1-5):"<<endl;
    		cin>>e;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=4)&&(d>=0)&&(e<=5)&&(e>=0)){
	
    		if(d>=4){
    			price=(1500*d)-((1500*d*10)/100)+(1500*e)-((1500*e*20)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(1500*d)+(1500*e)-((1500*e*20)/100);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		else{
			cout<<"Enter the number of Adult Tickets(1-8):"<<endl;
    		cin>>d;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=8)&&(d>=0)){
			if(d>=4){
    			price=(1500*d)-((1500*d*10)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(1500*d);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
        break;
    case 4:
    	limit = 1000;
  	    randomDigit = rand() % limit;
    	seats_available=randomDigit;
    	cout<<"The Available seats are: "<<seats_available<<endl;
    	cout<<"Do You Want To Buy Ticket For Family?(1/0)"<<endl;
    	cin>>c;
    	
    	if(c==1){
    		cout<<"Enter the number of Adult Tickets(1-4):"<<endl;
    		cin>>d;
    		cout<<"Enter the number of Children Tickets(1-5):"<<endl;
    		cin>>e;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=4)&&(d>=0)&&(e<=5)&&(e>=0)){
	
    		if(d>=4){
    			price=(1500*d)-((1500*d*10)/100)+(1500*e)-((1500*e*20)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(1500*d)+(1500*e)-((1500*e*20)/100);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		else{
			cout<<"Enter the number of Adult Tickets(1-8):"<<endl;
    		cin>>d;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=8)&&(d>=0)){
			if(d>=4){          
    			price=(1500*d)-((1500*d*10)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(1500*d);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
        break;
    case 5:
    	limit = 3000;
  	    randomDigit = rand() % limit;
    	seats_available=randomDigit;
    	cout<<"The Available seats are: "<<seats_available<<endl;
    	cout<<"Do You Want To Buy Ticket For Family?(1/0)"<<endl;
    	cin>>c;
    	
    	if(c==1){
    		cout<<"Enter the number of Adult Tickets(1-4):"<<endl;
    		cin>>d;
    		cout<<"Enter the number of Children Tickets(1-5):"<<endl;
    		cin>>e;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=4)&&(d>=0)&&(e<=5)&&(e>=0)){
	
    		if(d>=4){
    			price=(500*d)-((500*d*10)/100)+(500*e)-((500*e*20)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(500*d)+(500*e)-((500*e*20)/100);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		else{
			cout<<"Enter the number of Adult Tickets(1-8):"<<endl;
    		cin>>d;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=8)&&(d>=0)){
			if(d>=4){
    			price=(500*d)-((500*d*10)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(500*d);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
        break;    
    case 6:
    	limit = 3000;
  	    randomDigit = rand() % limit;
    	seats_available=randomDigit;
    	cout<<"The Available seats are: "<<seats_available<<endl;
    	cout<<"Do You Want To Buy Ticket For Family?(1/0)"<<endl;
    	cin>>c;
    	
    	if(c==1){
    		cout<<"Enter the number of Adult Tickets(1-4):"<<endl;
    		cin>>d;
    		cout<<"Enter the number of Children Tickets(1-5):"<<endl;
    		cin>>e;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=4)&&(d>=0)&&(e<=5)&&(e>=0)){
	
    		if(d>=4){
    			price=(1000*d)-((1000*d*10)/100)+(1000*e)-((1000*e*20)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(1000*d)+(1000*e)-((1000*e*20)/100);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		else{
			cout<<"Enter the number of Adult Tickets(1-8):"<<endl;
    		cin>>d;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=8)&&(d>=0)){
			if(d>=4){
    			price=(1000*d)-((1000*d*10)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(1000*d);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
        break;
	case 7:
    	limit = 2500;
  	    randomDigit = rand() % limit;
    	seats_available=randomDigit;
    	cout<<"The Available seats are: "<<seats_available<<endl;
    	cout<<"Do You Want To Buy Ticket For Family?(1/0)"<<endl;
    	cin>>c;
    	
    	if(c==1){
    		cout<<"Enter the number of Adult Tickets(1-4):"<<endl;
    		cin>>d;
    		cout<<"Enter the number of Children Tickets(1-5):"<<endl;
    		cin>>e;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=4)&&(d>=0)&&(e<=5)&&(e>=0)){
	
    		if(d>=4){
    			price=(250*d)-((250*d*10)/100)+(250*e)-((250*e*20)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(250*d)+(250*e)-((250*e*20)/100);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		else{
			cout<<"Enter the number of Adult Tickets(1-8):"<<endl;
    		cin>>d;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=8)&&(d>=0)){
			if(d>=4){
    			price=(250*d)-((250*d*10)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(250*d);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
        break;	    
    case 8:
    	limit = 2500;
  	    randomDigit = rand() % limit;
    	seats_available=randomDigit;
    	cout<<"The Available seats are: "<<seats_available<<endl;
    	cout<<"Do You Want To Buy Ticket For Family?(1/0)"<<endl;
    	cin>>c;
    	
    	if(c==1){
    		cout<<"Enter the number of Adult Tickets(1-4):"<<endl;
    		cin>>d;
    		cout<<"Enter the number of Children Tickets(1-5):"<<endl;
    		cin>>e;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=4)&&(d>=0)&&(e<=5)&&(e>=0)){
	
    		if(d>=4){
    			price=(250*d)-((250*d*10)/100)+(250*e)-((250*e*20)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(250*d)+(500*e)-((250*e*20)/100);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
		else{
			cout<<"Enter the number of Adult Tickets(1-8):"<<endl;
    		cin>>d;
    		cout<<"Enter the your CNIC.NO:"<<endl;
    		cin>>f;
    		if((d<=8)&&(d>=0)){
			if(d>=4){
    			price=(250*d)-((250*d*10)/100);
    			cout<<"Total price of tickets: "<<price;
			}
			else{
				price=(250*d);
				cout<<"Total price of tickets: "<<price;
			}	
		}
		else{
			cout<<"Amount exceeds the Limit!!"<<endl;
		}
		}
        break;
    default:
    	cout<<" The enclosure is not Present"<<endl;
        break;
        }
        break;
        
    default:
    	cout<<"Ticket is out of Range!!!"<<endl;
        break;
}


  	  return 0;
}