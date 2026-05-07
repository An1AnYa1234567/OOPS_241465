// Write a program to demonstrate dynamic initialization using constructors.
#include <iostream>
using namespace std;

class Rectangle 
{
    int length, breadth;

public:
    // Constructor with parameters (dynamic initialization)
    Rectangle(int l, int b) 
    {
        length = l;
        breadth = b;
    }

    int area() 
    {
        return length * breadth;
    }

    void display() 
    {
        cout << "Length: " << length << endl;
        cout << "Breadth: " << breadth << endl;
        cout << "Area: " << area() << endl;
    }
};

int main() 
{
    int l, b;

    cout << "Enter length and breadth: ";
    cin >> l >> b;

    // Passing runtime values to constructor
    Rectangle r(l, b);

    r.display();

    return 0;
}