#include<iostream>
using namespace std;
void eligible(int age);
main()
{
int age;
while(true)
{
cout<<"Enter your age please ";
cin>>age;
eligible(age);
}
}
void eligible(int age)
{
if(age>=18)
{
cout<<"You are eligible to cast your vote "<<endl;
}
}
