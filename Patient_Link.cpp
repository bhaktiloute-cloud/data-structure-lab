#include<iostream>
#include<string>
#include<limits>
using namespace std;

struct Patient
{
int id;
string name;
int age;
string disease;

Patient*next;
Patient*hashNext;
};

Patient*head=NULL;
const int SIZE=10;
Patient*hashTable[SIZE]={NULL};
int hashFunction(int id)
{
 return id%SIZE;
}

void registerPatient()
{
 Patient*p=new Patient;
 cout<<"enter patient id:";
 cin>>p->id;

 int index=hashFunction(p->id);

 Patient*temp=hashTable[index];

 while(temp!=NULL)
 {
   if(temp->id==p->id)
   {
     cout<<"patient id already exits\n:";
     delete p;
     return;
   }
   temp=temp->hashNext;
 }

cin.ignore(numeric_limits<streamsize>::max(),'\n');

cout<<"Enter Patient name:";

getline(cin,p->name);

cout<<"enter age:";

cin>>p->age;

cin.ignore(numeric_limits<streamsize>::max(),'\n');

cout<<"enter diease:";

p->next=head;

head=p;

p->hashNext=hashTable[index];

hashTable[index]=p;

cout<<"patient registered successfully!\n";

}

void searchPatient()
{
int id;
cout<<"enter patient id to searcg:";
cin>>id;
int index=hashFunction(id);
Patient*temp=hashTable[index];
while(temp!=NULL)
{
 if(temp->id==id)
 {
   cout<<"\npatient found!\n";
   cout<<"id:"<<temp->id<<endl;
   cout<<"name:"<<temp->name<<endl;
   cout<<"age:"<<temp->age<<endl;
   cout<<"disease:"<<temp->disease<<endl;

   return;
 }

  temp=temp->hashNext;
}

cout<<"patiet not found!\n"; 
}

void displayPatient()
{
  Patient*temp=head;
  
  if(temp==NULL)
  {
   cout<<"no patient records available.\n";
   return;
  }
  
  cout<<"\n----all patient records----\n";
  while(temp!=NULL)
  {
   cout<<"\npatient id:"<<temp->id<<endl;
   cout<<"name:"<<temp->name<<endl;
   cout<<"age:"<<temp->age<<endl;
   cout<<"disease:"<<temp->disease<<endl;
   temp=temp->next;
  }
}

int main()
{
  int choice;
 
  do
  {
    cout<<"\n---HOSPITAL MANAGEMENT SYSTEM---\n";
    cout<<"1.Register Patient\n";
    cout<<"2.Search Patient\n";
    cout<<"3.Display all Patients\n";
    cout<<"4.Exit\n";
    cout<<"enter your choice:";
    cin>>choice;
    switch(choice)
    {
      case 1:
         registerPatient();
         break;
    
     case 2:
         searchPatient();
         break;

     case 3:
         displayPatient();
         break;

     case 4:
        cout<<"Existing program...\n";
        break;

     default:
       cout<<"invalid choice\n";
    }

  }while(choice!=4);
  return 0;
}
