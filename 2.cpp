//Write a program to demonstrate default arguments using simple interest calculation.
#include <iostream>
using namespace std;

// Function with default arguments
float simpleInterest(float principal, float rate = 5.0, float time = 2.0) 
{
    return (principal * rate * time) / 100;
}

int main() 
{
    float p;

    cout << "Enter principal amount: ";
    cin >> p;

    // Calling function with only principal (rate and time take default values)
    cout << "Simple Interest (default rate & time): "
         << simpleInterest(p) << endl;

    // Calling function with principal and rate (time takes default value)
    cout << "Simple Interest (custom rate, default time): "
         << simpleInterest(p, 7.5) << endl;

    // Calling function with all arguments
    cout << "Simple Interest (custom rate & time): "
         << simpleInterest(p, 7.5, 3) << endl;

    return 0;
}