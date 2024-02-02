#include <bits/stdc++.h>
using namespace std;

class hero // created a class hero
{
    // properties of hero
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

int main()
{
    // default constructer is called automatically when
    // the object of class is created so
    // no need to call the constructor (DEFAULT)

    hero h1;
    
    cout << h1.name << " " << h1.health << " " << h1.level << endl;

    return 0;
}