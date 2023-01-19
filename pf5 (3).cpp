#include<iostream>
#include<cmath>
using namespace std;

float quadplus(float a, float b, float c);
float quadminus(float a, float b, float c);
 
main()
{
	float a;
	float b;
	float c;
	cout<<"Enter value of a: ";
	cin>>a;
	cout<<"Enter value of b: ";
	cin>>b;
	cout<<"Enter value of c: ";
	cin>>c;
	float x1;
	float x2;
	x1=quadplus(a, b, c);
	cout<<"Value: "<<x1<<endl;
	x2=quadminus(a, b, c);
	cout<<"Value: "<<x2<<endl;

}

float quadplus(float a, float b, float c)
{
	
	float x1;
	float so1;
	float so2;
	float so3;
	float so4;
	float so5;
	float so6;
	so1=pow(b,2);
	so2=4*a*c;
	so3=so1 - so2;
	so4=sqrt(so3);
	so5=2*a;
	so6=-b+so4;
	x1=so6/so5;
	return x1;
	
}

float quadminus(float a, float b, float c)
{
	float x2;
	float so1;
	float so2;
	float so3;
	float so4;
	float so5;
	float so6;
	so1=pow(b,2);
	so2=4*a*c;
	so3=so1 - so2;
	so4=sqrt(so3);
	so5=2*a;
	so6=-b-so4;
	x2=so6/so5;
	return x2;
}