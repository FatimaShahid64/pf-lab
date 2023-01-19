#include<iostream>
using namespace std;
void printfibanocci()
	{
		int n1 = 0;
		int n2 = 1;
		int nextnum = 0;
		cout << n1 << "," << n2 << ",";
		for (int count = 1; cout <= number - 2; count++)
		{
			nextnum = n1 + n2;
			cout << nextnum << ",";
			n1 = n2;
			n2 = nextnum;
		}
main()
{
	int number;
	cout<<"Enter length of series: ";
	cin>>number;
	printfibanocci();
}


