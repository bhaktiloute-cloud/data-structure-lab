include<iostream>
using namespace std;

int main()
{
       int book[10];
       int n=0;
       int choice;
       int searchID;

       do
      {
      cout<<"\n\n===SMART LIBRARY===";
      cout<<"\n1.Add Book";
      cout<<"\n2.Display Books";
      cout<<"\n3.Search Book";
      cout<<"\n4.Exit";
      cout<<"\nEnter your choice";
      cin>>choice;

      if(choice==1)
      {
             cout<<"Enter book ID:";
             cin>>book[n]
             n++;
             cout<<"BOOK ADDED";
      }
      else if(choice==2)
      {
              cout<<"\nBook in library:\n";
              for(int i=0;i<n;i++)
              {
                     cout<<book[i]<<end;
              }
      }
      else if (choice==3)
      {
              cout<<"enter book id to search:";
              cin>>searchID;
              bool found=false;
              for (int i=0;i<n;i++)
              {
                       if(book[i]==searchID)
                       {
                                 found=true;
                       }
              }
              if(found)
              {
                     cout<<"BOOK FOUND";
              }
              else
              {
                     cout<<"BOOK NOT FOUND";
              }
      } 
      else if(choice==1)
      {
              cout<<"THANK YOU!";
      }
      else
      {
              cout<<"INVALID CHOICE!";
      }
      }while(choice!=4);
      return 0;
 }
