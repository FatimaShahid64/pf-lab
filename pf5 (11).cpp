#include<iostream>
using namespace std;

int addition(int number1, int number2);
float division(int number1, int number2);
int maximum(int number1, int number2);

main()
{
	int number1, number2, result1, result2, result3;
	cout<<"Enter first number ";
	cin>>number1;
	cout<<"Enter second number ";
	cin>>number2;

	result1 = addition (number1, number2);
	cout<<"Sum: "<<result1<<endl;
	result2 = division (number1, number2);
	cout<<"Division: "<<result2<<endl;
	result3 = maximum (number1, number2);
	cout<<"Maximum: "<<result3<<endl;


}

int addition (int number1, int number2)
{
	int sum=number1+number2;
 	return sum;
	
}

float division(int number1, int number2)
{
	float divide=number1/number2;
	return divide;
}

int maximum(int number1, int number2)
{
	int max;
	if(number1>number2)
	{
	   return number1;
	}
	if(number2>number1)
	{
	   return number2;
	}
	return 0;

}
