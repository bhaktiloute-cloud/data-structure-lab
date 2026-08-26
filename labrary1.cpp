#include<iostream>
#include<string>
using namespace std;

int main()
{
int id1,id2,id3;
string title1,title2,title3;

cout<<"enter book id1";
cin>>id1;

cin.ignore();
cout<<"enter book 1 title";
getline(cin,title1);

cout<<"enter book id2";
cin>>id2;

cin.ignore();
cout<<"enter book 2 title";
getline(cin,title2);

cout<<"enter book id3";
cin>>id3;

cin.ignore();
cout<<"enter book 3 title";
getline(cin,title3);

cout<<"\n====book library====";
cout<<"\n..enter id"<<id1;
cout<<"\n..enter title"<<title1;
cout<<"\n..enter id"<<id2;
cout<<"\n..enter title"<<title2;
cout<<"\n..enter id"<<id3;
cout<<"\n..enter title"<<title3;
return 0;
}
