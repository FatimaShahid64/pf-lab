#include<iostream>
#include<cmath>
using namespace std;

float calculateheight(float distance, float degrees);

 
main()
{
	float degrees;
	float height;
	float base;
	cout<<"Enter base: "<<endl;
	cin>>base;
	cout<<"Enter angle of elevation: "<<endl;
	cin>>degrees;

	height=calculateheight(base, degrees);
	cout<<"Height: "<<height<<endl;
}

float calculateheight(float distance, float degrees)
{
	float radian=57.2958;
	float radians;
	float angle;
	float height;
	radians = degrees/radian;
	angle = tan(radians);
	height = angle*distance;
	return height;
}