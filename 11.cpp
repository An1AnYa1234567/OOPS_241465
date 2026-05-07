// Write a program to demonstrate containership using real-life classes(car-engine).
#include <iostream>
using namespace std;

// Engine class
class Engine 
{
    int horsepower;

public:
    Engine(int hp) 
    {
        horsepower = hp;
    }

    void showEngine() 
    {
        cout << "Engine Horsepower: " << horsepower << " HP" << endl;
    }
};

// Car class (contains Engine object)
class Car 
{
    string brand;
    Engine engine;   // Containership (has-a relationship)

public:
    // Constructor initializing Engine object
    Car(string b, int hp) : engine(hp) 
    {
        brand = b;
    }

    void showCar()
    {
        cout << "Car Brand: " << brand << endl;
        engine.showEngine();  // Accessing Engine's function
    }
};

int main() 
{
    Car c1("Ford", 150);

    c1.showCar();

    return 0;
}