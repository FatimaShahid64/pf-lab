#include <iostream>
using namespace std;
string letter1(int number);
string letter2(int number);
main()
{
    int number, num1, num2;
    string result1, result2;
    cout<<"Enter number: ";
    cin >> number;
    num1 = number % 10;
    num2 = number / 10;
    if (number < 10)
    {
        result1 = letter1(num1);
        cout << result1;
    }
    if (number > 10)
    {
        result2 = letter2(num2);
        result1 = letter1(num1);
        cout << result2 << " " << result1;
    }
}

string letter1(int number)

{
    if (number==1)
    {
        return "one";
    }
    if (number==2)
    {
        return "two";
    }
    if (number==3)
    {
        return "three";
    }
    if (number==4)
    {
        return "four";
    }
    if (number==5)
    {
        return "five";
    }
    if (number==6)
    {
        return "six";
    }
    if (number==7)
    {
        return "seven";
    }
    if (number==8)
    {
        return "eight";
    }
    if (number==9)
    {
        return "nine";
    }
}
string letter2(int number)
{
    if (number==1)
    {
        return "ten";
    }
    if (number==2)
    {
        return "twenty";
    }
    if (number==3)
    {
        return "thirty";
    }
    if (number==4)
    {
        return "forty";
    }
    if (number==5)
    {
        return "fifty";
    }
    if (number==6)
    {
        return "sixty";
    }
    if (number==7)
    {
        return "seventy";
    }
    if (number==8)
    {
        return "eighty";
    }
    if (number==9)
    {
        return "ninty";
    }
}