#include<iostream>
using namespace std;
main()
{
float matric;
float inter;
float ecat;
float aggregate;
cout<<"enter matric marks   ";
cin>>matric;
cout<<"enter inter marks  ";
cin>>inter;
cout<<"enter ecat marks  ";
cin>>ecat;
aggregate=(matric/1100)*0.1+(inter/550)*0.4+(ecat/400)*0.5;
cout<<"aggregate"<<aggregate;
} 
