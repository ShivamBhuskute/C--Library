#include <bits/stdc++.h>
using namespace std;
// Parent class
class Animal
{
public:
    void eat()
    {
        cout << "eating" << endl;
    }
};

// Child class
class Dog : public Animal
{
public:
    void bark()
    {
        cout << "barking" << endl;
    }
};

class BabyDog : public Dog
{
public:
    void weep()
    {
        cout << "weeping";
    }
};

int main()
{

    // Creating an object of the child class
    BabyDog obj;

    // calling methods
    obj.eat();
    obj.bark();
    obj.weep();
}



























// javascript
// how to run javascript prog
// let var const difference after master 
// operators arithmetic assignment 
// data type function object string string method string search string template numbers number bigint number method array array method array CRUD array sorting 
// intermediate -> array sorting logical problems
// boolean 
// conditional statements
// loops for while for_each
// break 
// set 
// map
// type conversion 
// hoisting
// strict mode 
// javascript arrow functions 
// class objects 
// json 
// object defination 
// object properties 
// object methods 
// functions function call function closures
// pure functions 
// javascript callback (tricky)
// asynchrous
// promises 
// async await (API call  library axios )

