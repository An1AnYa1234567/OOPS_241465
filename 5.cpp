// Write a program to demonstrate default,parameterized,copy and overloaded constructors.
#include <iostream>
using namespace std;

class Demo 
{
private:
    int x, y;

public:
    // Default Constructor
    Demo() 
    {
        x = 0;
        y = 0;
        cout << "Default Constructor called\n";
    }

    // Parameterized Constructor
    Demo(int a, int b) 
    {
        x = a;
        y = b;
        cout << "Parameterized Constructor called\n";
    }

    // Copy Constructor
    Demo(const Demo &obj) 
    {
        x = obj.x;
        y = obj.y;
        cout << "Copy Constructor called\n";
    }

    // Overloaded Constructor (single parameter)
    Demo(int a) 
    {
        x = a;
        y = 0;
        cout << "Overloaded Constructor called\n";
    }

    void display() 
    {
        cout << "x = " << x << ", y = " << y << endl;
    }
};

int main() 
{
    // Default constructor
    Demo d1;
    d1.display();

    // Parameterized constructor
    Demo d2(10, 20);
    d2.display();

    // Copy constructor
    Demo d3 = d2;
    d3.display();

    // Overloaded constructor
    Demo d4(50);
    d4.display();

    return 0;
}