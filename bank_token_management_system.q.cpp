#include<iostream>
using namespace std;

int main()
{
    int queue[5];
    int rear=0;
    int front=0;

    cout<<"enter 5 customers token numbers:";

    for(int i=0;i<5;i++)
    {
        cin>>queue[rear];
        rear++;
    }

    cout<<"The customers token numbers are:";

    while(front<rear)
    {
        cout<<"token numbers:"<<queue[front]<<endl;
        front++;
    }
    return 0;
    
}
