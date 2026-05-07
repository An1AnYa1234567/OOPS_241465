//WAP to demonstrate inline function for basic arithematic operations.
#include <iostream>
using namespace std;

// Inline functions
inline int add(int a, int b) {
    return a + b;
}

inline int subtract(int a, int b) {
    return a - b;
}

inline int multiply(int a, int b) {
    return a * b;
}

inline float divide(int a, int b) {
    if (b != 0)
        return (float)a / b;
    else {
        cout << "Division by zero error!" << endl;
        return 0;
    }
}

int main() {
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Addition: " << add(x, y) << endl;
    cout << "Subtraction: " << subtract(x, y) << endl;
    cout << "Multiplication: " << multiply(x, y) << endl;
    cout << "Division: " << divide(x, y) << endl;

    return 0;
}