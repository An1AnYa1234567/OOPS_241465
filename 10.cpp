// Write a program to demonstrate virtual functions and abstract classes using shape example.
#include <iostream>
using namespace std;

// Abstract class
class Shape 
{
public:
    // Pure virtual function
    virtual void area() = 0;
};

// Derived class: Rectangle
class Rectangle : public Shape 
{
    int length, breadth;

public:
    Rectangle(int l, int b) 
    {
        length = l;
        breadth = b;
    }

    void area() 
    {
        cout << "Area of Rectangle: " << length * breadth << endl;
    }
};

// Derived class: Circle
class Circle : public Shape 
{
    float radius;

public:
    Circle(float r) 
    {
        radius = r;
    }

    void area() 
    {
        cout << "Area of Circle: " << 3.14 * radius * radius << endl;
    }
};

int main() 
{
    Shape* s;   // Base class pointer

    Rectangle r(5, 3);
    Circle c(2.5);

    // Runtime polymorphism
    s = &r;
    s->area();

    s = &c;
    s->area();

    return 0;
}