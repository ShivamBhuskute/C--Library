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

    // Copy constructor
    hero(hero &t)
    {
        name = t.name;
        health = t.health;
        level = t.level;
    }
};

int main()
{
    hero h1; // Default constructor is called

    cout << "Original Hero: " << h1.name << " " << h1.health << " " << h1.level << endl;

    // Create a new hero using the copy constructor
    hero h2 = h1;

    cout << "Copied Hero: " << h2.name << " " << h2.health << " " << h2.level << endl;

    return 0;
}
