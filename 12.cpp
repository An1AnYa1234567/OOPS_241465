// Write a program to develop a currency converter using menu-driven approach.
#include <iostream>
using namespace std;

int main() 
{
    int choice;
    float amount, result;

    do 
    {
        cout << "\n Currency Converter \n";
        cout << "1. INR to USD\n";
        cout << "2. USD to INR\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 2) 
        {
            cout << "Enter amount: ";
            cin >> amount;
        }

        switch (choice) 
        {
            case 1:
                result = amount / 93.0;   // Approx rate
                cout << "Converted Amount: " << result << " USD\n";
                break;

            case 2:
                result = amount * 93.0;
                cout << "Converted Amount: " << result << " INR\n";
                break;

            case 3:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 3);

    return 0;
}