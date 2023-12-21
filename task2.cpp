#include <iostream>
using namespace std;


float add(float x, float y) {
    return x + y;
}

float subtract(float x, float y) {
    return x - y;
}

float multiply(float x, float y) {
    return x * y;
}

float divide(float x, float y) {
    if (y == 0) {
        cout << "Error! Division by zero is not allowed." << endl;
        return 0;
    }
    return x / y;
}

int main() {
    float num1, num2;
    int choice;

    cout << "Select operation:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    switch(choice) {
        case 1:
            cout << num1 << " + " << num2 << " = " << add(num1, num2) << endl;
            break;
        case 2:
            cout << num1 << " - " << num2 << " = " << subtract(num1, num2) << endl;
            break;
        case 3:
            cout << num1 << " * " << num2 << " = " << multiply(num1, num2) << endl;
            break;
        case 4:
            cout << num1 << " / " << num2 << " = " << divide(num1, num2) << endl;
            break;
        default:
            cout << "Invalid Input" << endl;
    }

    return 0;
}

