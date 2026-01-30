/*
 * Project: Sphere Geometry Calculator
 * Description: This program takes a user-defined radius and calculates 
 * the total surface area and volume of a sphere. 
 * Features: Includes input sanitization and formatted output.
 */

#include <iostream>
#include <cmath>    
#include <iomanip>  

using namespace std;

// Function to calculate Surface Area: 4 * pi * r^2
double calculateArea(double radius) {
    return 4.0 * M_PI * radius * radius;
}

// Function to calculate Volume: (4/3) * pi * r^3
double calculateVolume(double radius) {
    return (4.0 / 3.0) * M_PI * pow(radius, 3);
}

int main() 
{
    // Collecting user's Information
    cout<< "Enter your name: ";
    string name;
    cin >> name;
    cout << "Hello, " << name << "! How are You Today?" << endl;

    double radius;
    int choice;

    // 1. To Get the value of radius from the user
    cout << "--- Sphere Calculator ---" << endl;
    cout << "Enter the radius of the sphere: ";
    while (!(cin >> radius) || radius < 0) {
        // Simple prompts to tell the user about invalid input
        cout << "Invalid input. Please enter a positive number for radius: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }

    // 2. Display the menu options
    cout << "\nWhat would you like to calculate?" << endl;
    cout << "1. Surface Area only" << endl;
    cout << "2. Volume only" << endl;
    cout << "3. Both Area and Volume" << endl;
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    cout << fixed << setprecision(2) << endl; 

    // 3. Process the choice
    switch (choice) {
        case 1:
            cout << "Surface Area: " << calculateArea(radius) << " units squared" << endl;
            break;

        case 2:
            cout << "Volume: " << calculateVolume(radius) << " units cubed" << endl;
            break;

        case 3:
            cout << "--- Results ---" << endl;
            cout << "Surface Area: " << calculateArea(radius) << " units squared" << endl;
            cout << "Volume:       " << calculateVolume(radius) << " units cubed" << endl;
            break;

        default:
            cout << "Invalid choice! Please restart the program and select 1, 2, or 3." << endl;
    }

    return 0;
}
