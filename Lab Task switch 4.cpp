#include<iostream>
using namespace std;
int main()
{
	int num1,num2,choice;
	cin>>num1>>num2;
	cout<<"Menu"<<endl;
	cout<<"Press 1 to add"<<endl;
	cout<<"Press 2 to subtract"<<endl;
	cout<<"Press 3 to exit"<<endl;
	cout<<"Enter your choice(1-3):";
	switch(choice)
	{
	 case 1:
	 cout<<"Result(addition)="<<num1 + num2;
	 break;
	 case 2:
	 cout<<"Result(subtract)="<<num1 - num2;
	 break;
	 case 3:
	 cout<<"Exiting program...";
	 break;
	 defult:
	 cout<<"Invalid choice! Please select 1,2,or 3.";	
	 }
	 return 0;
}