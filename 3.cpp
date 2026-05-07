//Write a program to demonstrate function overloading for area,sum and volume calculation.
#include <iostream>
using namespace std;

// Function overloading for SUM
int calculate(int a, int b, int c) 
{
    return a + b + c;
}

// Function overloading for AREA
int calculate(int length, int breadth) 
{  // Area of rectangle
    return length * breadth;
}

// Function overloading for VOLUME
int calculate(int side) 
{   // Volume of cube
    return side * side * side;
}

int main() {
    cout << "Sum of 3 numbers: " << calculate(10, 20, 30) << endl;

    cout << "Area of rectangle: " << calculate(5, 4) << endl;
    cout << "Volume of cube: " << calculate(3) << endl;

    return 0;
}