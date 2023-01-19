#include<iostream>
using namespace std;
float totalincome(string screening, int rows, int columns);
main()
{
	int rows, columns;
	float result;
	string screening;
	cout<<"Enter screening: ";
	cin>>screening;
	cout<<"Eneter number of rows: ";
	cin>>rows;
	cout<<"Enter number of columns: ";
	cin>>columns;
	result=totalincome(screening, rows, columns);
	cout<<"Total Income: "<<result;
}
float totalincome(string screening, int rows, int columns)
{
	float income;
	if (screening == "premiere")
	{
		income = 12*(rows*columns);
	}
	if (screening == "normal")
	{
		income = 7.50*(rows*columns);
	}
	if (screening == "kids")
	{
		income = 5*(rows*columns);
	}
	return income;
}