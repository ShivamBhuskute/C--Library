#include <bits/stdc++.h>
using namespace std;

class hero
{
public:
    string name;
    float health;
    char level;

    // Default constructor
    hero()
    {
        name = "Spiderman";
        health = 90;
        level = 'A';
    }

    // Constructor with parameters
    hero(string n, float h, char l)
    {
        name = n;
        health = h;
        level = l;
    }
};

int main()
{
    // Default constructor is called automatically
    hero h1;

    cout << "Default Hero: " << h1.name << " " << h1.health << " " << h1.level << endl;

    // Constructor with parameters is called
    hero h2("Superman", 95.5, 'S');

    cout << "overloaded Hero: " << h2.name << " " << h2.health << " " << h2.level << endl;

    return 0;
}
