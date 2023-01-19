#include<iostream>
using namespace std;
string checkspeed(float speed);
main()
{
	float speed;
	string result;
	cout<<"Enter speed: ";
	cin>>speed;
	result=checkspeed(speed);
	cout<<"Result: "<<result;
}
string checkspeed(float speed)
{
	string title;
	if (speed == 10)
	{
		title = "slow";
	}
	if (speed>10 && speed<=50)
	{
		title = "average";
	}
	if (speed>50 && speed<=150)
	{
		title = "fast";
	}
	if (speed>150 && speed<=1000)
	{
		title = "ultra fast";
	}
	else
	{
		title = "extremely fast";
	}
	return title;
}