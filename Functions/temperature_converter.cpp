#include <iostream>
using namespace std;

// Function to convert Celsius to Fahrenheit
void CelsiusToFahrenheit(float temp) {
    cout << "Temperature in Fahrenheit: " << (temp * 1.8) + 32 << " °F" << endl;
}

// Function to convert Fahrenheit to Celsius
void FahrenheitToCelsius(float temp) {
    cout << "Temperature in Celsius: " << (temp - 32) * (5.0 / 9.0) << " °C" << endl;
}

// Function to convert Celsius to Kelvin
void CelsiusToKelvin(float temp) {
    cout << "Temperature in Kelvin: " << temp + 273.15 << " K" << endl;
}

// Function to convert Kelvin to Celsius
void KelvinToCelsius(float temp) {
    cout << "Temperature in Celsius: " << temp - 273.15 << " °C" << endl;
}

// Function to convert Fahrenheit to Kelvin
void FahrenheitToKelvin(float temp) {
    float celsius = (temp - 32) * (5.0 / 9.0);
    cout << "Temperature in Kelvin: " << celsius + 273.15 << " K" << endl;
}

// Function to convert Kelvin to Fahrenheit
void KelvinToFahrenheit(float temp) {
    float celsius = temp - 273.15;
    cout << "Temperature in Fahrenheit: " << (celsius * 1.8) + 32 << " °F" << endl;
}

int main() {
    int choice;
    float temp;

    do {
        // Display the menu
        cout << "Temperature Converter Menu:\n";
        cout << "1. Celsius to Fahrenheit\n";
        cout << "2. Fahrenheit to Celsius\n";
        cout << "3. Celsius to Kelvin\n";
        cout << "4. Kelvin to Celsius\n";
        cout << "5. Fahrenheit to Kelvin\n";
        cout << "6. Kelvin to Fahrenheit\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        // Check if the choice is valid
        if (choice >= 1 && choice <= 6) {
            cout << "Enter temperature: ";
            cin >> temp;
        }

        // Execute the corresponding function based on user choice
        switch (choice) {
            case 1:
                CelsiusToFahrenheit(temp);
                break;
            case 2:
                FahrenheitToCelsius(temp);
                break;
            case 3:
                CelsiusToKelvin(temp);
                break;
            case 4:
                KelvinToCelsius(temp);
                break;
            case 5:
                FahrenheitToKelvin(temp);
                break;
            case 6:
                KelvinToFahrenheit(temp);
                break;
            case 7:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 7); // Continue until the user chooses to exit

    return 0;
}