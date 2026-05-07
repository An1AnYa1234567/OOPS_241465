// Write a program to design a bank management system using oop concepts.
#include <iostream>
#include <string>
using namespace std;

#define MAX 50

class BankAccount 
{
private:
    string name;        
    int accLast4;
    double balance;
    string password;   // password for login
    int pin;           // pin for login

public:
    // using Setters 
    void setName(string n) { name = n; }
    void setAccLast4(int a) { accLast4 = a; }
    void setBalance(double b) { balance = (b >= 0) ? b : 0; }
    void setPassword(string p) { password = p; }
    void setPin(int p) { pin = p; }

    // using Getters
    string getName()
     {
         return name; 
     }
    int getAccLast4() 
    { 
        return accLast4; 
    }
    double getBalance() 
    { 
        return balance; 
    }
    string getPassword() 
    {
         return password; 
    }
    int getPin() 
    { 
        return pin; 
    }

    // Login verification
    bool login(int acc, string pass, int p) 
    {
        if (accLast4 == acc && password == pass && pin == p)
            return true;
        return false;
    }

    // Banking operations
    void deposit(double amt) 
    {
        if (amt > 0) 
        {
            balance += amt;
            cout << "Money deposited successfully.\n";
        }
         else
            cout << "Invalid amount.\n";
    }

    void withdraw(double amt) 
    {
        if (amt > 0 && amt <= balance) 
        {
            balance -= amt;
            cout << "Money withdrawn successfully.\n";
        } 
        else if(amt<0)
        {
            cout << " invalid amount.\n";
        }
        else
          cout<<"Insufficient balance.\n";

    }

    void display() 
    {
        cout << "\n--- Account Details ---\n";
        cout << "Name             : " << name << endl;
        cout << "Account (Last 4) : " << accLast4 << endl;
        cout << "Balance          : Rs." << balance << endl;
    }
};

// Home page menu
void HomePage() {
    cout << "\n=========== HOME PAGE ===========\n";
    cout << "1. Create Account\n";
    cout << "2. Login\n";
    cout << "3. Exit\n";
    cout << "================================\n";
    cout << "Enter your choice: ";
}

// Logged in menu
void AccountMenu() {
    cout << "\n------- ACCOUNT MENU -------\n";
    cout << "1. Deposit Money\n";
    cout << "2. Withdraw Money\n";
    cout << "3. Check Balance\n";
    cout << "4. Logout\n";
    cout << "----------------------------\n";
    cout << "Enter your choice: ";
}

int main() 
{
    BankAccount users[MAX];
    int count = 0;
    int choice;

    cout << "Welcome to State bank of India (PIN + Password + Login Required)\n";

    while (true) {
        HomePage();
        cin >> choice;

        if (choice == 1) {  // Create Account
            if (count >= MAX) {
                cout << "Account limit reached!\n";
                continue;
            }

            string name, pass;
            int acc, pin;
            double bal;

            cout << "Enter Name: ";
            cin.ignore();
            getline(cin, name);

            cout << "Enter last 4 digits of account number: ";
            cin >> acc;

            cout << "Set Password: ";
            cin >> pass;

            cout << "Set 4-digit PIN: ";
            cin >> pin;

            cout << "Enter initial balance: ";
            cin >> bal;

            users[count].setName(name);
            users[count].setAccLast4(acc);
            users[count].setPassword(pass);
            users[count].setPin(pin);
            users[count].setBalance(bal);

            count++;
            cout << "Account created successfully! Please login to continue.\n";
        }

        else if (choice == 2) {  // Login
            int acc, pin;
            string pass;

            cout << "Enter last 4 digits of account number: ";
            cin >> acc;
            cout << "Enter Password: ";
            cin >> pass;
            cout << "Enter PIN: ";
            cin >> pin;

            bool found = false;

            for (int i = 0; i < count; i++) {
                if (users[i].login(acc, pass, pin)) {
                    found = true;
                    cout << "\nLogin successful. Welcome " << users[i].getName() << "!\n";

                    int opt;
                    do {
                        AccountMenu();
                        cin >> opt;

                        if (opt == 1) {
                            double amt;
                            cout << "Enter amount to deposit: ";
                            cin >> amt;
                            users[i].deposit(amt);
                        }
                        else if (opt == 2) {
                            double amt;
                            cout << "Enter amount to withdraw: ";
                            cin >> amt;
                            users[i].withdraw(amt);
                        }
                        else if (opt == 3) {
                            users[i].display();
                        }
                        else if (opt == 4) {
                            cout << "Logged out successfully.\n";
                        }
                        else {
                            cout << "Invalid choice.\n";
                        }

                    } while (opt != 4);  // Logout

                    break;
                }
            }

            if (!found) {
                cout << "Invalid account number, password, or PIN.\n";
            }
        }

        else if (choice == 3) {  // Exit
            cout << "Thank you for using  state bank of India.\n";
            break;
        }

        else 
        {
            cout << "Invalid choice. Try again.\n";
        }
    }
    return 0;
}