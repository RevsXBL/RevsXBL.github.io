#include <iostream>
using namespace std;

// Function to safely get menu choice
int getChoice() {
    int choice;
    cout << "1. Subtract\n2. Add\n3. Divide\n5. Exit\n";

    if (!(cin >> choice)) {
        cin.clear();
        cin.ignore(1000, '\n');
        return -1; // invalid input
    }
    return choice;
}

// Function to safely get two numbers
bool getNumbers(int& num1, int& num2) {
    if (!(cin >> num1 >> num2)) {
        cin.clear();
        cin.ignore(1000, '\n');
        return false;
    }
    return true;
}

int main() {
    int choice = 0;
    int num1, num2;

    while (choice != 5) {
        choice = getChoice();

        if (choice == -1) {
            cout << "Invalid input.\n";
            continue;
        }

        if (choice == 1) {
            cout << "Enter two numbers: ";
            if (getNumbers(num1, num2)) {
                cout << "Result: " << num1 - num2 << endl;
            }
            else {
                cout << "Invalid input.\n";
            }
        }
        else if (choice == 2) {
            cout << "Enter two numbers: ";
            if (getNumbers(num1, num2)) {
                cout << "Result: " << num1 + num2 << endl;
            }
            else {
                cout << "Invalid input.\n";
            }
        }
        else if (choice == 3) {
            cout << "Enter two numbers: ";
            if (getNumbers(num1, num2)) {

                // Prevent division by zero
                if (num2 == 0) {
                    cout << "Error: Cannot divide by zero.\n";
                }
                else {
                    cout << "Result: " << num1 / num2 << endl;
                }
            }
            else {
                cout << "Invalid input.\n";
            }
        }
    }

    return 0;
}