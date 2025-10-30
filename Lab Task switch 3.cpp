#include<iostream>
using namespace std;
int main()
{
	int marks=100;
	char grades;
	cout<<"enter your marks";
	cin>>grades;
	switch(grades%10)
	{
	 case 1:
	 if(marks>=90)
	 cout<<"grade A";
	 break;
	 case 2:
	 if(marks>=80 && marks<90)
	 cout<<"grade B";
	 break;
	 case 3:
	 if(marks>=70 && marks<80)
	 cout<<"grade C";
	 break;
	 case 4:
	 if(marks>=60 && marks<70)
	 cout<<"grade D";
	 break;
	 case 5:
	 if(marks>=50 && marks<60)
	 cout<<"grade E";
	 break;
	 case 6:
	 if(marks>=40 && marks<50)
	 cout<<"grade F";
	 break;
	 defult:
	 cout<<"very poor";
	 break;
	}
	return 0;
}