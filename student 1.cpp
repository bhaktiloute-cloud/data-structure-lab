include<iostream>
using namespace std;

int main()
{
int rno[5];
cout<<"enter roll number:";

for(int i=0;i<5;i++)
{
cin>>rno[i];
}
cout<<"entered roll numbers are:";
for(int i=0;i<5;i++)
{
cout<<rno[i]<<"\n";
}
return 0;
}
