#include <bits/stdc++.h>
using namespace std;

class hero
{
public:
    string name;
    float health;
    char level;

    // this constructor is created by default
    hero()
    {
        name = "Spiderman";
        health = 90;
        level = 'A';
    };
};

class Troop : public hero
{
public:
    string type;

    // this constructor is created by default
    Troop()
    {
        type = "cavalary";
    };
};

int main()
{
    // Create an object of Hero
    hero h1;

    // Create an object of Troop
    Troop T1;

    // 2nd obj
    Troop T2;

    T1.name = "Powerman";
    T1.health = 85;
    T1.level = 'B';

    // Access properties of hero
    cout << "Hero Name: " << h1.name << endl;
    cout << "Hero Health: " << h1.health << endl;
    cout << "Hero Level: " << h1.level << endl;

    // Access properties of Troop
    cout << "Troop Name: " << T1.name << endl;
    cout << "Troop Health: " << T1.health << endl;
    cout << "Troop Level: " << T1.level << endl;
    cout << "Troop Type: " << T1.type << endl;

    T2.type = "infantary";
    // Access properties of Troop
    cout << "Troop Name: " << T2.name << endl;
    cout << "Troop Health: " << T2.health << endl;
    cout << "Troop Level: " << T2.level << endl;
    cout << "Troop Type: " << T2.type << endl;

    return 0;
}
