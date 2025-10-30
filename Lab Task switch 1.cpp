#include<iostream>
using namespace std;
int main()
{
	int day;
	cout<<"enter your number:";
	cin>>day;
	switch(day)
	{
	 case 1:
	 cout<<"Monday";
	 break;
	 case 2:
	 cout<<"tusday";
	 break;
	 case 3:
	 cout<<"wensday";
	 break;
	 case 4:
	 cout<<"thursday";
	 break;
	 case 5:
	 cout<<"friday";
	 break;
	 case 6:
	 cout<<"saturday";
	 break;
	 case 7:
	 cout<<"sunday";
	 break;
	 Defult:
	 cout<<"weekend";
	 break;
	}
	return 0;
}