#include<iostream>
using namespace std;
main()
{
	int hours, minutes;
	cout<<"Enter hours: ";
	cin>>hours;
	cout<<"Enter minutes: ";
	cin>>minutes;
	minutes=minutes+15;
        if(minutes>=60)
	{
	hours++;
	minutes=minutes-60;
	}
	if(hours>=23)
	{
	hours=0;
	}
	cout<<hours<<":"<<minutes;
}