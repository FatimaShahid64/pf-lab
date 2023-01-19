#include<iostream>
using namespace std;
string checktitle(char gender, int age);

main()
{
	int age;
	string result;
	char gender;
	cout<<"Enter your age: ";
	cin>>age;
	cout<<"Enter your gender: ";
	cin>>gender;
	result=checktitle(gender, age);
	cout<<"Title: "<<result;
}
string checktitle(char gender, int age)
{
	string title;
	if (gender == 'm' && age>=16)
	{
		title = "Mr";
	}
	if (gender = 'm' && age<16)
	{
		title = "Master";
	}
	if (gender == 'f' && age>=16)
	{
		title = "Ms";
	}
	if (gender == 'f' && age<16)
	{
		title = "Miss";
	}
	return title;
}