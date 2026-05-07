// Write a program to demonstrate single,multiple,multilevel,hierarchical and hybrid inheritance.
#include <iostream>
using namespace std;

//  SINGLE INHERITANCE 
class A {
public:
    void showA() 
    {
        cout << "Class A (Base Class)" << endl;
    }
};

class B : public A 
{   // Single inheritance
public:
    void showB() 
    {
        cout << "Class B (Derived from A)" << endl;
    }
};

//  MULTILEVEL INHERITANCE 
class C : public B 
{   // B -> A already
public:
    void showC() 
    {
        cout << "Class C (Derived from B)" << endl;
    }
};

// HIERARCHICAL INHERITANCE 
class D : public A 
{
public:
    void showD() 
    {
        cout << "Class D (Derived from A)" << endl;
    }
};

class E : public A 
{
public:
    void showE() 
    {
        cout << "Class E (Derived from A)" << endl;
    }
};

// MULTIPLE INHERITANCE 
class X 
{
public:
    void showX() 
    {
        cout << "Class X" << endl;
    }
};

class Y 
{
public:
    void showY() 
    {
        cout << "Class Y" << endl;
    }
};

class Z : public X, public Y 
{   // Multiple inheritance
public:
    void showZ() 
    {
        cout << "Class Z (Derived from X and Y)" << endl;
    }
};

// HYBRID INHERITANCE
// Combination of multilevel + multiple
class P : public C, public Z {
public:
    void showP() {
        cout << "Class P (Hybrid Inheritance)" << endl;
    }
};

// MAIN FUNCTION 
int main() {

    cout << "\nSingle Inheritance\n";
    B obj1;
    obj1.showA();
    obj1.showB();

    cout << "\nMultilevel Inheritance\n";
    C obj2;
    obj2.showA();
    obj2.showB();
    obj2.showC();

    cout << "\nHierarchical Inheritance\n";
    D obj3;
    E obj4;
    obj3.showA();
    obj3.showD();
    obj4.showA();
    obj4.showE();

    cout << "\nMultiple Inheritance\n";
    Z obj5;
    obj5.showX();
    obj5.showY();
    obj5.showZ();

    cout << "\nHybrid Inheritance\n";
    P obj6;
    obj6.showA();  // from A through C
    obj6.showC();
    obj6.showZ();
    obj6.showP();

    return 0;
}