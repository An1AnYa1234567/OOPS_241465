// Write a program to demonstrate operator overloading for +,-,++,== and << operators.
#include <iostream>
using namespace std;

class Number 
{
    int value;

public:
    // Constructor
    Number(int v = 0) 
    {
        value = v;
    }

    // Overload + operator
    Number operator+(const Number& obj) 
    {
        return Number(value + obj.value);
    }

    // Overload - operator
    Number operator-(const Number& obj) 
    {
        return Number(value - obj.value);
    }

    // Overload pre-increment ++ operator
    Number operator++() 
    {
        ++value;
        return *this;
    }

    // Overload == operator
    bool operator==(const Number& obj) 
    {
        return (value == obj.value);
    }

    // Friend function to overload << operator
    friend ostream& operator<<(ostream& out, const Number& obj);
};

// Definition of << operator
ostream& operator<<(ostream& out, const Number& obj) 
{
    out << obj.value;
    return out;
}

int main() 
{
    Number n1(10), n2(5), n3;

    // + operator
    n3 = n1 + n2;
    cout << "Addition: " << n3 << endl;

    // - operator
    n3 = n1 - n2;
    cout << "Subtraction: " << n3 << endl;

    // ++ operator
    ++n1;
    cout << "After increment n1: " << n1 << endl;

    // == operator
    if (n1 == n2)
        cout << "n1 and n2 are equal" << endl;
    else
        cout << "n1 and n2 are not equal" << endl;

    // << operator
    cout << "n1: " << n1 << ", n2: " << n2 << endl;

    return 0;
}