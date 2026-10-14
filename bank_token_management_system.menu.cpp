#include <iostream>
using namespace std;

int main()
{
    int queue[5];
    int front = 0, rear = -1;
    int token = 1;
    int choice;

    do
    {
        cout << "\n1. Issue Token";
        cout << "\n2. Display Tokens";
        cout << "\n3. Serve Token";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                if (rear < 4)
                {
                    queue[++rear] = token;
                    cout << "Token issued: " << token;
                    token++;
                }
                else
                {
                    cout << "Queue is full";
                }
                break;

            case 2:
                if (front > rear)
                {
                    cout << "No tokens waiting";
                }
                else
                {
                    cout << "Waiting tokens: ";
                    for (int i = front; i <= rear; i++)
                    {
                        cout << queue[i] << " ";
                    }
                }
                break;

            case 3:
                if (front > rear)
                {
                    cout << "No tokens to serve";
                }
                else
                {
                    cout << "Serving token: " << queue[front];
                    front++;
                }
                break;

            case 4:
                cout << "Exiting...";
                break;

            default:
                cout << "Invalid choice";
        }
    } while (choice != 4);

    return 0;
}
