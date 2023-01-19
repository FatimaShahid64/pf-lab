#include<iostream>
using namespace std;
void even(int number);
void odd(int number);
main()
{
int number;
while(true)
{
cout<<"Enter a number ";
cin>>number;
even(number);
odd(number);
}
}
void even(int number)
{
if(number%2==0)
{
cout<<"It is an even number "<<endl;
}
}
void odd(int number)
{
if(number%2==1)
{
cout<<"It is an even number "<<endl;
}
}