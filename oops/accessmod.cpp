#include <bits/stdc++.h>
using namespace std;

class hero // created a class hero
{
    // properties of hero

    string name;

public:
    float health;

private:
    char level;
};

int main()
{
    // created a object of hero
    hero h1;

    cout << "health of h1 is " << h1.health << endl;
    cout << "level of h1 " << h1.level << endl;
    // will get error here cz level is declared as private in line 12 we cannot access level out of class hero
    cout << "name of h1 is " << h1.name << endl;
    // will get error here cz name is not declared as public we cannot access name out of class hero  it will take default access i.e. private

    return 0;
}