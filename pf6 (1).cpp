#include<iostream>
using namespace std;
main()
{
	int price;
	string brand;
	cout<<"Enter price: ";
	cin>>price;
	cout<<"Enter brand: ";
	cin>>brand;
	if (price <=1500 && brand == "Breakout")
	{
		cout<<"Buy the dress";
	}
	else 
	{
		cout<<"Don't buy the dress";
	}
}