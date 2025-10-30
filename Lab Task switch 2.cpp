#include<iostream>
using namespace std;
int main()
{
	char oper;
	double num1,num2;
	cout<<"enter first number";
	cin>>num1;
	cout<<"enter second number";
	cin>>num2;
	cout<<"enter oper";
	cin>>oper;
	switch(oper)
	{
		case '+':
		cout<<num1+num2;
		break;
		case '*':
		cout<<num1*num2;
		break;
		case '-':
		cout<<num1-num2;
		break;
		case'/':
		cout<<num1/num2;
		break;
		default:
		cout<<"error";
	}
	return 0;
}