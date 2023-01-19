#include<iostream>
using namespace std;
float lowestprice(string period, int distance);
main()
{
	int distance;
	string period;
	float result;
	cout<<"Enter distance: ";
	cin>>distance;
	cout<<"Enter period: ";
	cin>>period;
	result=lowestprice(period, distance);
	cout<<"Cheapest price: "<<result;
}
float lowestprice(string period, int distance)
{
	float amount;
	if (distance<20 && period=="day")
	{
		amount=0.70+(distance*0.79);
	}
	if (distance<20 && period=="night")
	{
		amount=0.70+(distance*0.98);
	}
	if (distance>=20 && (period=="day" || period=="night"))
	{
		amount=(distance*0.09);
	}
	if (distance>=100 && (period=="day" || period=="night"))
	{
		amount=(distance*0.06);
	}
	return amount;
}