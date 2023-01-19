#include<iostream>
using namespace std;
int digitsum(int number)
	{
		int quotient1, quotient2, quotient3, quotient4;
		int rem1, rem2, rem3, rem4;
		int sum;
		quotient1 = number / 10;
		rem1 = number % 10;
		quotient2 = quotient1 / 10;
		rem2 = quotient1 % 10;
		quotient3 = quotient2 / 10;
		rem3 = quotient2 % 10;
		quotient4 = quotient3 / 10;
		rem4 = quotient3 % 10;
		sum = rem1 + rem2 + rem3 + rem4;
		return sum;
	}
}
main()
{
	int number, result;
	cout<<"Enter number: ";
	cin>>number;
	result=digitsum(number);
	cout<<"Sum: "<<result;
}
