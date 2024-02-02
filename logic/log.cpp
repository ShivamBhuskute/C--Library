#include <bits/stdc++.h>
using namespace std;
void login()
{
    string username, password;
    cout << "\nUsername : ";
    cin >> username;
    cout << "Password : ";
    cin >> password;

    if (username == "tejas1936" && password == "asdfghjkl;'")
    {
        cout << "\nLOGIN SUCCESSFUL \n\n";
    }
    else
    {
        cout << "\nLOGIN UNSUCCESSFUL \nPLEASE TRY AGAIN \n\n ";
    }
}

void createac()
{
    string username, email, password;
    cout << "\nCREATE A NEW ACCOUNT \n\n";
    cout << "Username : ";
    cin >> username;
    cout << "Enter email address : ";
    cin >> email;
    cout << "create password : ";
    cin >> password;
    cout << "\nACCOUNT CREATED SUCCESSFULLY \n\n";
}

int main()
{
    int option;
    cout << "WELCOME \n\n";
    for (;;)
    {
        cout << "1. Create account \t\t 2. Login \n\n";

        cout << "Enter an option : ";
        cin >> option;
        switch (option)
        {
        case 1:
            createac();
            break;
        case 2:
            login();
            break;
        default:
            cout << "please try again \n\n";
        }
    }
    return 0;
}