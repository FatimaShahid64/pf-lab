#include <iostream>
using namespace std;

main()
{
int number, rems1, divs1, rems2, divs2, sum;
cout<<"Enter number: ";
cin>>number;

rems1=number%10;
divs1=number/10;
rems2=divs1%10;
divs2=divs1/10;

sum=rems1+divs2+rems2;

if(sum%2==0)
{
cout<<"Number is evenish ";
}
if(sum%2==1)
{
cout<<"Number is oddish ";
}

}