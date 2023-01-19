#include<iostream>
using namespace std;
void discount(float payableamount);
main()
{
string day;
int amount;
float payableamount;
cout<<"Enter day ";
cin>>day;
cout<<"Enter total purchase amount ";
cin>>amount;
discount(payableamount);
}
void discount(float payableamount)
{
float payableamount;
if(day=="sunday")
{
payableamount=amount-(10*amount)/100;
cout<<"Total payable amount is "<<payableamount;
}
} 