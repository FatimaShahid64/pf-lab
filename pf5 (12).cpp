#include<iostream>
#include<cmath>
using namespace std;

main()
{
	int number1, number2, greater, lesser, power, squareroot, cuberoot, big, small;
	float num1, num2, greater1, lesser1;
	cout<<"Enter first number ";
	cin>>number1;
	cout<<"Enter second number ";
	cin>>number2;
	cout<<"Enter first floating point number ";
	cin>>num1;
	cout<<"Enter second floating point number ";
	cin>>num2;
	greater=max(number1, number2);
	cout<<"Greater integer number: "<<greater<<endl;
	greater1=max(num1, num2);
	cout<<"Greater floating point number: "<<greater1<<endl;
	lesser=min(number1, number2);
	cout<<"Lesser integer number: "<<lesser<<endl;
	lesser1=min(num1, num2);
	cout<<"Lesser floating point number: "<<lesser1<<endl;
	power=pow(number1, number2);
	cout<<"Power of integer numbers: "<<power<<endl;
	squareroot=sqrt(number1);
	cout<<"Square root of first integer number: "<<squareroot<<endl;
	cuberoot=cbrt(number2);
	cout<<"Cube root of second integer number: "<<cuberoot<<endl;
	small=ceil(num1);
	cout<<"Rounded off: "<<small<<endl;
	big=floor(num2);
	cout<<"Rounded off "<<big<<endl;
	
}


