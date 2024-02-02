#include <bits/stdc++.h>
using namespace std;

class hero // created a class hero
{
    // properties of hero

    // access modifier not mentioned so it takes it as default i.e. private
    string name;

public:
    float health;

private:
    char level;

public:
    // Getter and Setter for Name
    string GetName()
    {
        return name;
    }

    void SetName(string n)
    {
        name = n;
    }

    // Getter and Setter for Level
    char GetLevel()
    {
        return level;
    }

    void SetLevel(char l)
    {
        level = l;
    }
};

int main()
{
    // created a object of hero
    hero MyHero;

    MyHero.health = 90;

    cout << "health of MyHero is " << MyHero.health << endl;
    cout << "level of MyHero " << MyHero.GetLevel() << endl;
    cout << "name of MyHero is " << MyHero.GetName() << "\n \n";

    MyHero.SetLevel('A');
    MyHero.SetName("shraavniii");
    MyHero.health = 99;

    cout << "health of MyHero is " << MyHero.health << endl;
    cout << "level of MyHero " << MyHero.GetLevel() << endl;
    cout << "name of MyHero is " << MyHero.GetName() << endl;

    return 0;
}