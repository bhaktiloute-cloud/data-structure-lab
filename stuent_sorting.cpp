#include<iostream>
using namespace std;

int main()
{
int marks[5];
cout<<"enter marks";

	for(int i=0;i<5;i++)
	{
		cin>>marks[i];
	}

	cout<<"entered marks are";
	for(int i=0;i<5;i++)
	{
		cout<<marks[i]<<"\n";
	}

	for(int i=0;i<4;i++)
	{
       		for(int j=0;j<5-i;j++)
       		{
            		if(marks[j]<marks[j+1])
            		{
                		int temp=marks[j];
                		marks[j]=marks[j+i];
                		marks[j+1]=temp;
            		}
       		}
	}

for (int i = 0; i < 5; i++)
    {
        cout << marks[i] << " ";
    }

return 0;
}
