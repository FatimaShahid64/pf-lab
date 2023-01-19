#include<iostream>
using namespace std;
int TotalDigit(int number)
{
	int count = 0;
	while (number > 0)
	{
		number = number / 10;
		count = count + 1;
	}
	return count;

}
main()
{
	int number, result;
	cout<<"Enter any number: ";
	cin>>number;
	result=TotalDigit(number);
	cout<<"You have entered "<<result<<" digit number";

}

