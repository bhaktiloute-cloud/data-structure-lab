#include<iostream>
using namespace std;

int main()
{
 int stack[5];
 int top=-1;

 cout<<"enter token numbers:";

 for(int i=0;i<5;i++)
 {
  cin>>stack[++top];
 }

 cout<<"display the service history:";

 while(top>=0)
 {
  cout<<stack[top]<<endl;
  top--;
 }
}
