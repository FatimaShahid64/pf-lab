#include <iostream>
using namespace std;
main()
{
float volume,pipe1,pipe2,workerAbsent,poolfilled,poolpercentage,percent1,percent2,overflows;
cout<<"Enter volume of pool :";
cin>>volume;
cout<<"Enter flow rate of pipe1:";
cin>>pipe1;
cout<<"Enter flow rate of pipe2:";
cin>>pipe2;
cout<<"Worker absent hours:";
cin>>workerAbsent;
poolfilled=volume-(workerAbsent*pipe1 +workerAbsent*pipe2);
cout<<poolfilled<<endl;
poolpercentage=poolfilled*100/volume;
percent1=(pipe1*100)/volume;
percent2=(pipe2*100)/volume;
overflows=-poolfilled;
if(overflows<volume)
{
cout<<"Pool is "<<poolpercentage<<"% filled"<<endl;
cout<<"Pipe1 has "<<percent1<<"% "<<" contribution"<<endl;
cout<<"Pipe2 has "<<percent2<<"% "<<" contribution"<<endl;
}
if(overflows>volume)
{
cout<<"For "<<workerAbsent<<" hours the pool overflows with ";
cout<<overflows<<"litres"<<endl;

}
}