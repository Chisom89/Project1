//This program would help a club to determine whether a specific individual is allowed to enter. It would also provide the price ranges for each group.
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string name;
	string permission;
	int age;
	int num;
	int currentYear=2022;
	int yearOfBirth;
	int amount;
	int change;
	int groupSetting = 500;
	int soloSetting = 300;
	int vip = 750;
	char alone;
	char group;
	char vips;
	
	cout<<"WELCOME TO CHISOM'S LOUNGE"<<endl;
	cout<<"RIGHTS OF PERMISSION RESERVED"<<endl;
	cout<<"ENTER AT YOUR OWN RISK"<<endl;
	cout<<"******************************************"<<endl;
	cout<<"Enter your name"<<endl;
	cin>>name;
	cout<<"Enter your year of birth"<<endl;
	cin>>yearOfBirth;
	cout<<"Are you alone"<<endl;
	cin>>alone;
	cout<<"Are you part of a group"<<endl;
	cin>>group;
	cout<<"Are you part of a vip group"<<endl;
	cin>>vips;
	cout<<"***********************************************"<<endl;
	
	//an individual shpuld be granted entrance if older than 18 years 
	age= currentYear - yearOfBirth;
    
	if(age >= 18 && alone =='Y'|| alone=='y')
	{
		permission="GRANTED";
		cout<<"Answer the following questions to grant you full access to the lounge"<<endl;
        cout<<"	You qualify for the SOLO SETTING , You will be required to pay a fee of R300 "<<endl;
        cout<<"Enter the amount you have"<<endl;
        cin>>amount;
        
	   	if(amount >= 300)
		{
			change= soloSetting - amount;
      	}
      	cout<<"Your change is R "<<change<<endl;
		cout<<"#####################################################################"<<endl;	
		cout<<"THANK YOU FOR CHOOSING US AS YOUR NUMBER ONE SPOT"<<endl;
		cout<<"ENJOY THE REST OF YOUR NIGHT"<<endl;
		cout<<"SEE YOU SOON"<<endl;
		cout<<"#####################################################################"<<endl;
	}
	else if(age >= 18 && group == 'Y' || group =='y')
	{
		
		permission="GRANTED";
		cout<<"Answer the following questions to grant you full access to the lounge"<<endl;
        cout<<"	You qualify for the GROUP SETTING , You will be required to pay a fee of R500 "<<endl;
        cout<<"Enter the amount you have"<<endl;
        cin>>amount;
        change= groupSetting - amount;
	   	if(amount >= groupSetting)
		   {
		       change= groupSetting - amount;
		   }
		   	cout<<"Your change is R "<<change<<endl;
		   
		cout<<"#####################################################################"<<endl;	
		cout<<"THANK YOU FOR CHOOSING US AS YOUR NUMBER ONE SPOT"<<endl;
		cout<<"ENJOY THE REST OF YOUR NIGHT"<<endl;
		cout<<"SEE YOU SOON"<<endl;
		cout<<"#####################################################################"<<endl;
           
	}
	else if(age >= 18 && vips == 'Y' ||vips=='y')
	{
		
		permission="GRANTED";
		cout<<"Answer the following questions to grant you full access to the lounge"<<endl;
        cout<<"	You qualify for the GROUP SETTING , You will be required to pay a fee of R750 "<<endl;
        cout<<"Enter the amount you have"<<endl;
        cin>>amount;
	   	if(amount >= vip)
	   {
		change= vip - amount;
	   }
		cout<<"Your change is R "<<change<<endl;
		cout<<"#####################################################################"<<endl;	
		cout<<"THANK YOU FOR CHOOSING US AS YOUR NUMBER ONE SPOT"<<endl;
		cout<<"ENJOY THE REST OF YOUR NIGHT"<<endl;
		cout<<"SEE YOU SOON"<<endl;
		cout<<"#####################################################################"<<endl;     
	}
	else
	{
		permission="NOT GRANTED";
		cout<<"DEAR "<<name<<" you're not "<<permission<<" to enter the permises ,reason being because you're underage !!!"<<endl;
	}
return 0;
}