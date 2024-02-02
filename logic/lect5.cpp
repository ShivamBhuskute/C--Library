#include <iostream>
using namespace std;

int create()
{
    int name, email, pass;
    cin >> name >> email >> pass;
    cout << "Account created successfully \n\n" ;
}

int login()
{
    string name, pass;
    cin >> name >> pass;
    if (name == "abc" && pass == "123")
    {
        cout << "Login successful";
    }
    else
    {
        cout << "Login unsuccessful /n";
    }
}

int main()
{
    int option;
    cout << "Welcome";
    for (int i = 0; i <= 5; i++)
    {
        cout << "1. Create account 2. Login"
             << "\n";
        cout << "Enter an option ";
        cin >> option;
        if (option == 1)
        {
            create();
        }
        else if (option == 2)
        {
            login();
        }
        else
        {
            cout << " ";
        }
    }

    return 0;
}
