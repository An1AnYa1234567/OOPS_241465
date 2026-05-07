// Write a program to demonstrate function overriding and runtime polymorphism.
#include <iostream>
using namespace std;

// Base class
class Base 
{
public:
    // Virtual function
    virtual void show() {
        cout << "This is Base class show function" << endl;
    }
};

// Derived class
class Derived : public Base 
{
public:
    // Function overriding
    void show() 
    {
        cout << "This is Derived class show function" << endl;
    }
};

int main() 
{
    Base* ptr;      // Base class pointer
    Derived obj;    // Derived class object

    ptr = &obj;     // Pointing to derived object

    // Runtime polymorphism
    ptr->show();    // Calls Derived's show() at runtime

    return 0;
}