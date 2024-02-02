#include <iostream>
using namespace std;

class Fraction
{
private:
    int numerator;
    int denominator;

public:
    // Constructor
    Fraction(int num = 0, int denom = 1) : numerator(num), denominator(denom) {}

    // Overloading the '+' operator
    Fraction operator+(Fraction other)
    {
        Fraction sum;
        sum.numerator = (numerator * other.denominator) + (other.numerator * denominator);
        sum.denominator = denominator * other.denominator;
        return sum;
    }

    // Function to display the fraction
    void display()
    {
        cout << numerator << "/" << denominator << endl;
    }
};

int main()
{
    Fraction fraction1(1, 2);
    Fraction fraction2(3, 4);

    // Using overloaded '+' operator
    Fraction result = fraction1 + fraction2;

    // Displaying the fractions and their sum
    cout << "Fraction 1: ";
    fraction1.display();

    cout << "Fraction 2: ";
    fraction2.display();

    cout << "Sum: ";
    result.display();

    return 0;
}