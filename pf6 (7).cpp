#include<iostream>
using namespace std;
float calculatediscount(string day, string month, int price);

main()
{
	int price, result;
	string day, month;
	cout<<"Enter your amount: ";
	cin>>price;
	cout<<"Enter day: ";
	cin>>day;
	cout<<"Enter month: ";
	cin>>month;
	result= calculatediscount(day, month, price);
	cout<<"Final amount is: "<<result;
}
float calculatediscount(string day, string month, int price)
{
	float finalamount;
	if (day == "Sunday" && (month == "October" || month == "March" || month == "August"))
	{
		finalamount = price - (price*10)/100;
	}
	else if (day == "Monday" && (month == "November" || month == "December"))
	{
		finalamount = price - (price*8)/100; 
	}
	else 
	{
		return 0;
	}
	return finalamount;
}