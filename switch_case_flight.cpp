#include <iostream>
using namespace std; 

int main()
{
	int opt = 0, money = 0, change = 0, country = 0;
	int mode;
	double econ = 3500, business = 5600, first = 10000;
	
	cout<<"\n WELCOME TO ALY AIR \n";
	cout<<"press 1 economic class ticket = 3,500 "<<endl;
	cout<<"press 2 business class ticket = 5,600 "<<endl;
	cout<<"press 3 first class ticket = 10,000"<<endl;
	cout<<"enter a flight class type : "<< endl;
	cin >> opt;
	
	
	switch (opt)
	{
		case 1: 
			cout<<"mode of payment "<<endl;
			cout<<"1. cash "<<endl;
			cout<<"2. card "<<endl;
			cout<<"enter mode: ";
			cin>>mode; 
				switch (mode)
				{
					case 1:
						cout<<"\nenter payment: "<<endl;
						cout<<"money ";
						cin>>money;
						
						if (money >= econ)
						{
							change = money - econ;
							cout<<"your change is : "<<change;
						}
						else 
						{
							cout<<"insufficient money";
						}	
						break;
						
					case 2:
						break;
				}
			break;
				
		case 2: 
			cout<<"mode of payment: "<<endl;
			cout<<"1. cash "<<endl;
			cout<<"2. card "<<endl;
			cout<<"enter mode: ";
			cin>>mode; 
				switch (mode)
				{
					case 1:
						cout<<"\nenter payment: "<<endl;
						cout<<"money ";
						cin>>money;
						
						if (money >= business)
						{
							change = money - business;
							cout<<"your change is : "<<change;
						}
						else 
						{
							cout<<"insufficient money";
						}	
						break;
						
					case 2:
						break;
					
				}
			break; 
				
		case 3: 
			cout<<"mode of payment "<<endl;
			cout<<"1. cash "<<endl;
			cout<<"2. card "<<endl;
			cout<<"enter mode: ";
			cin>>mode; 
				switch (mode)
				{
					case 1:
						cout<<"\nenter payment: "<<endl;
						cout<<"money ";
						cin>>money;
						
							if (money >= first)
							{
								change = money - first;
								cout<<"your change is : "<<change;
							}
							else 
							{
								cout<<"insufficient money";
							}	
							break;
					
					case 2:
						break;
				}
			break; 
			
		default:
			cout<<"\ninvalid option! ";
			break;		
		
	}
	
			// san isisingit ko sa nested switch case???
		cout<<"where do you wanna go? " <<endl;
		cout<<"choices: " <<endl;
		cout<<"1. switzerland "<<endl;
		cout<<"2. japan " <<endl;
		cout<<"3. new york city "<<endl;
		cin>>country;
		
		switch (country)
		{
			case 1:
				cout<<"ticket"	//ok dito na yung sa ticket choices. 
		}
		
	cout<<"\ngoodbye! "<<endl;
	
	
	}

