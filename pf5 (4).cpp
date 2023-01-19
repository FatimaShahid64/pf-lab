#include <iostream>
using namespace std;
void characterreturn(char char1);

main()
{
	char character;
	cout<<"Enter character: ";
	cin>>character;
	characterreturn(character);

}

void characterreturn(char char1)
{
	if(char1 == 'A')
	{ 
	 cout<<"You have entered capital A";
	}
	if(char1 == 'a')
	{
	 cout<<"You have entered small a";
	}
}	