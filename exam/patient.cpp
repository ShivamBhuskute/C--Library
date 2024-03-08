#include <iostream>
using namespace std;
const int LEN = 80;
class Doctor
{
private:
    char name[LEN];
    char degree[LEN];

public:
    void getdata()
    {
        cout << "Enter the Doctor's name : ";
        cin >> name;
        cout << "Enter the Doctor's degree : ";
        cin >> degree;
    }
    void setdata()
    {
        cout << endl
             << "Doctor's name : " << name;
        cout << endl
             << "Doctor's degree : " << degree;
    }
};

class Patient
{
private:
    char name[LEN];
    char number[LEN];

public:
    void getdata()
    {
        cout << endl
             << "Enter Patient name : ";
        cin >> name;
        cout << endl
             << "Enter bed number : ";
        cin >> number;
    }

    void setdata()
    {
        cout << endl
             << "Patient name : " << name;
        cout << endl
             << "Bed number : " << number;
    }
};

class Department
{
private:
    char ward[LEN];

public:
    void getdata()
    {
        cout << endl
             << "Enter Ward Name : ";
        cin >> ward;
    }
    void setdata()
    {
        cout << endl
             << "Ward Name : " << ward;
    }
};

class amount
{
private:
    int fees;
    Patient pat;
    Doctor doc;
    Department dept;

public:
    void A()
    {
        pat.getdata();
        dept.getdata();
        doc.getdata();
        cout << "Enter Fees of Patient : ";
        cin >> fees;
    }
    void B()
    {
        pat.setdata();
        dept.setdata();
        doc.setdata();
        cout << endl
             << "Total Fees of Patient : " << fees;
    }
};

int main()
{
    amount obj;
    cout << endl
         << "Enter Data" << endl;
    obj.A();
    cout << endl
         << "Inserted Data" << endl;
    obj.B();
    return 0;
}

// A static variable
//         a variable declared as class block and prefix with the static keyword or
//     modifier is known as static variable

//         When a variable is declaered as astatic then a singe copy of the variable is created
//             and it ia shared an = mong all the members of the class
