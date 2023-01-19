#include<iostream>
using namespace std;
int function(int num);

main()
{
	int number, result;
	cout<<"Enter some number ";
	cin>>number;
	result=function(number);
	cout<<"Final answer is "<<result;
}

int function(int num)
{
	int total= num*5;
	return total;
}

