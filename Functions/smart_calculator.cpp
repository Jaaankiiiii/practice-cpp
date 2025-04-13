#include <iostream>
using namespace std;

int calculator() {
    char operation;
    
    while (true) {
        cout << "Enter the operation you want to perform (+, -, *, /, r (remainder), e (exit)): ";
        cin >> operation;

        // Check for exit condition
        if (operation == 'e') {
            cout << "Exiting the calculator." << endl;
            break; // Exit the loop
        }

        int num1, num2;
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;

        switch (operation) {
            case '+':
                cout << "Result: " << num1 + num2 << endl;
                break;
            case '-':
                cout << "Result: " << num1 - num2 << endl;
                break;
            case '*':
                cout << "Result: " << num1 * num2 << endl;
                break;
            case '/':
                if (num2 != 0) {
                    cout << "Result: " << static_cast<float>(num1) / num2 << endl; // Use static_cast for clarity
                } else {
                    cout << "Error: Division by zero is not allowed." << endl;
                }
                break;
            case 'r':
                if (num2 != 0) {
                    cout << "Result: " << num1 % num2 << endl;
                } else {
                    cout << "Error: Division by zero is not allowed for remainder." << endl;
                }
                break;
            default:
                cout << "No such operation available." << endl;
        }
    }
    return 0;
}

int main() {
    calculator();
    return 0; // Return 0 to indicate successful completion
}