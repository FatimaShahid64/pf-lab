#include<iostream>
using namespace std;
char calculategrade(int mark);

main()
{
	int marks, result;
	cout<<"Enter your marks: ";
	cin>>marks;
	result=calculategrade(marks);
	cout<<"Your grade is: "<<result;
}

char calculategrade(int mark)
{
	char grade;
	if (mark<50)
	{
		grade = 'F';
	}
	if (mark>=50 && mark<=60)
	{
		grade = 'E';
	}
	if (mark>=61 && mark<=70)
	{
		grade = 'D';
	}
	if (mark>=71 && mark<=80)
	{
		grade = 'C';
	}
	if (mark>=81 && mark<=85)
	{
		grade = 'B';
	}
	if (mark>85)
	{
		grade = 'A';
	}
	return grade;
}
