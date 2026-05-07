// Write a program to demonstrate static data member and static member function.
#include <iostream>
using namespace std;

class Student 
{
private:
    int rollNo;
    string name;

public:
    static int count;  // static data member

    // Constructor
    Student(string n) 
    {
        name = n;
        count++;  // increment count for each object
        rollNo = count;
    }

    void display() 
    {
        cout << "Roll No: " << rollNo << ", Name: " << name << endl;
    }

    // Static member function
    static void showCount() 
    {
        cout << "Total Students: " << count << endl;
    }
};

// Definition of static data member
int Student::count = 0;

int main() 
{
    Student s1("Ananya");
    Student s2("Riya");
    Student s3("Manas");

    s1.display();
    s2.display();
    s3.display();

    // Calling static function
    Student::showCount();

    return 0;
}