#include <bits/stdc++.h>
using namespace std;

class student {  // created a class named student which will hold diff types of
                 // attributes
    int id;      // id will be private bcz public is declared after it
   public:  // made all the attributes public so that they can be accesed from
            // outside
    string name;
    int age;
    bool gender;  // if 0 then male and if 1 then female

    // student(int i, string n, int a, int g){ // made a constructor which will
    // set all values in 1 go before using it comment out all the code in main
    // function
    //     id = i;
    //     name = n;
    //     age = a;
    //     gender =g;

    // }

    void SetId(int i) {  // created a function to set id we can set it outside
                         // by calling the function
        id = i;
    }

    int GetId() {  // created a function to print id from outside by a function
                   // as it is private
        cout << "id : " << endl;
        return id;
    }

    void
    PrintInfo() {  // created a function insidea class to print all the values
        cout << "Id : " << id << endl;
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Gender : " << gender << endl;
    }
};
int main() {
    student
        a;  // created a object (student) a ; still not set name age and gender
    a.name = "tejas";  // this is possible because attributes are set as public
    a.age = 20;
    a.gender =
        0;  // we set all the values to the attributes of the student class

    student arr[3];  // created array for 3 student
    for (int i = 0; i < 3;
         i++)  // used loop for taking input data of 3 students from user
    {
        int id;              // to store id
        cin >> id;           // id is taken as input from the user
        arr[i].SetId(id);    // function is called to manipulate (set) id
        cin >> arr[i].name;  // taking input name for student (i) i.e. 1
        cin >> arr[i].age;
        cin >> arr[i].gender;
    }

    for (int i = 0; i < 3;
         i++)  // using this loop to print all the values taken from the user
    {
        arr[i].PrintInfo();  // called this function to print the info
    }
    return 0;
}