#include<iostream>
using namespace std;
void ifpass(int marks);
main()
{
	int marks;
	while(true)
	{
	cout<<"Enter your marks ";
	cin>>marks;
	ifpass(marks);
	}
}
void ifpass(int marks)
{
	if(marks>50)
	{
	cout<<"Congratulations!You have passed the Quiz "<<endl;
	}
	if(marks==50)
	{
	cout<<"You barely passed the Quiz "<<endl;
	}
	if(marks<50)
	{
	cout<<"You have failed the Quiz "<<endl;
	}
}
