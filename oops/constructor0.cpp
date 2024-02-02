// this is parameterized constructor

#include <bits/stdc++.h>
using namespace std;

class hero // created a class hero
{

    // properties of hero
public:
    string name;
    float health;
    char level;

    // parameters are passed in this constructors
    hero(string n, float h, char l)
    {
        name = n;
        health = h;
        level = l;
    }
};

int main()
{
    // creating a object of class hero and assigning the values
    hero h1("Batman", 95, 'A');
    hero h2("Superman", 90, 'b');

    // print values
    cout << h1.name << " " << h1.health << " " << h1.level << endl;
    cout << h2.name << " " << h2.health << " " << h2.level << endl;

    return 0;
}




















