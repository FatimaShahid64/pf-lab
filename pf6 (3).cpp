#include<iostream>
using namespace std;
int isgreatest(int num1, int num2, int num3);

main()
{
	int number1, number2, number3, result;
	cout<<"Enter first number: ";
	cin>>number1;
	cout<<"Enter second number: ";
	cin>>number2;
	cout<<"Enter third number: ";
	cin>>number3;
	result=isgreatest(number1, number2, number3);
	cout<<"Greatest: "<<result;
}

int isgreatest(int num1, int num2, int num3)
{
	int greatest;
	if (num1>num2 && num1>num3)
	{
		greatest = num1;
	}
	else if (num2>num1 && num2>num3)
	{
		greatest = num2;
	}
	else if (num3>num1 && num3>num2)
	{
		greatest = num3;
	}
	else
	{
		greatest=0;
	}
	return greatest;
}