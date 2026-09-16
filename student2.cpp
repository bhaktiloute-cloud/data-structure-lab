#include<iostream>
using namespace std;
int main()
{
int rno[5];
int searchID;
cout<<"enter roll numbers:";
for(int i=0;i<5;i++)
{
cin>>rno[i];
}
cout<<"enter roll no to search:";
cin>>searchID;
for(int i=0;i<5;i++)
{
if(rno[i]==searchID)
{
cout<<"student found!";
return 0;
}
}
cout<<"book not found!";
return 0;
}
