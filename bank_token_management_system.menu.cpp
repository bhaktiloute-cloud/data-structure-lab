#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> tokens;
    int choice;
    int tokenNumber = 1;

    do
    {
        cout << "\n===== BANK TOKEN SYSTEM =====\n";
        cout << "1. Issue Token\n";
        cout << "2. Display All Tokens\n";
        cout << "3. Serve a Customer\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                tokens.push(tokenNumber);
                cout << "Token issued: " << tokenNumber << endl;
                tokenNumber++;
                break;

            case 2:
                if(tokens.empty())
                {
                    cout << "No tokens available.\n";
                }
                else
                {
                    queue<int> temp = tokens;

                    cout << "All waiting tokens: ";
                    while(!temp.empty())
                    {
                        cout << temp.front() << " ";
                        temp.pop();
                    }
                    cout << endl;
                }
                break;

            case 3:
                if(tokens.empty())
                {
                    cout << "No customer to serve.\n";
                }
                else
                {
                    cout << "Customer with Token "
                         << tokens.front()
                         << " is served.\n";

                    tokens.pop();
                }
                break;

            case 4:
                cout << "Program exited successfully.\n";
                break;

            default:
                cout << "Invalid choice! Please try again.\n";
        }

    } while(choice != 4);

    return 0;
}
