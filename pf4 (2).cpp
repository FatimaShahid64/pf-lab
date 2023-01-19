#include<iostream>
using namespace std;
void add(int num1,int num2);
void mul(int num1,int num2);
void sub(int num1,int num2);
main()
{
	int num1,num2;
	string operation = "";
	cout<<"Enter first number ";
	cin>>num1;
	cout<<"Enter second number ";
	cin>>num2;
	cout<<"Enter operator(+,-,*) ";
	cin>>operation ;
	if(operation == "+"){
		add(num1,num2);
	}
}
void add(int num1,int num2)
{
	int sum;
	sum=num1+num2;
	cout<<"Sum is "<<sum<<endl;
}
void mul(int num1,int num2)
{
	int product;
	product=num1*num2;
	cout<<"Product is "<<product<<endl;
}
void sub(int num1,int num2)
{
	int minus;
	minus=num1-num2;
	cout<<"Subtraction is "<<minus<<endl;
}