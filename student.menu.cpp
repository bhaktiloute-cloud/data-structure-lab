#include<iostream>
using namespace std;

int main()
{
     int rno[10];
     int marks[10];
     int n=0;
     int m=0;
     int choice;
     int searchID;

     do
     {
     cout<<"\n\n===STUDENT MANAGEMNET SUSTEM===";
     cout<<"\n1.ADD STUDENT";
     cout<<"\n2.DISPLAY STUDENT";
     cout<<"\n3.SEARCH STUDENT";
     cout<<"\n4.EXIT";
     cout<<"enter student:";
     cin>>choice;
     
     if(choice==1)
     {
        cout<<"enter student roll number:";
        cin>>rno[n];
        cout<<"enter student marks:";
        cin>>marks[m];
        n++;
        m++;
        cout<<"STUDENT ADDED";
     }
     else if(choice==2)
     {
        cout<<"roll number of student:";
        for(int i=0;i<n;i++)
        {
             cout<<rno[i]<<endl;
        }
     }
     else if(choice==3)
     {
        cout<<"enter student roll number to search:";
        cin>>searchID;
        bool found=false;
        for(int i=0;i<n;i++)
        {
             if(rno[i]==searchID)
             {
                  found=true;           
             }
        }
        if(found)
        {
            cout<<"STUDENT FOUND";
        }
        else
        {
            cout<<"STUDENT NOT FOUND";
        }
     }
     else if(choice==1)
     {
      cout<<"THANK YOU";
     }
     else
     {
      cout<<"INVALID CHOICE";
     }
     }while(choice!=4);
     return 0;
}
