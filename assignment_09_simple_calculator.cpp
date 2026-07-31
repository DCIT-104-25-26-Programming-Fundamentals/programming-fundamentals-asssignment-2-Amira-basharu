#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double addition(double a, double b)
{
    return a + b;
}

double subtraction(double a, double b)
{
    return a - b;
}

double multiplication(double a, double b)
{
    return a * b;
}

double division(double a, double b)
{
    return a / b;
}

double modulus(double a, double b)
{
    return fmod(a, b);
}

double exponentiation(double a, double b)
{
    return pow(a, b);
}

int main()
{
    int choice;
    double num1, num2;

    cout << fixed << setprecision(2);

    do
    {
        cout << "\n============================\n";
        cout << "       SIMPLE CALCULATOR\n";
        cout << "============================\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Modulus\n";
        cout << "6. Exponentiation\n";
        cout << "7. Quit\n";
        cout << "Select an operation (1-7): ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter first number: ";
                cin >> num1;
                cout << "Enter second number: ";
                cin >> num2;
                cout << "Result: " << addition(num1, num2) << endl;
                break;

            case 2:
                cout << "Enter first number: ";
                cin >> num1;
                cout << "Enter second number: ";
                cin >> num2;
                cout << "Result: " << subtraction(num1, num2) << endl;
                break;

            case 3:
                cout << "Enter first number: ";
                cin >> num1;
                cout << "Enter second number: ";
                cin >> num2;
                cout << "Result: " << multiplication(num1, num2) << endl;
                break;

            case 4:
                cout << "Enter first number: ";
                cin >> num1;
                cout << "Enter second number: ";
                cin >> num2;

                if(num2 == 0)
                {
                    cout << "Error: Cannot divide by zero." << endl;
                }
                else
                {
                    cout << "Result: " << division(num1, num2) << endl;
                }
                break;

            case 5:
                cout << "Enter first number: ";
                cin >> num1;
                cout << "Enter second number: ";
                cin >> num2;

                if(num2 == 0)
                {
                    cout << "Error: Cannot perform modulus by zero." << endl;
                }
                else
                {
                    cout << "Result: " << modulus(num1, num2) << endl;
                }
                break;

            case 6:
                cout << "Enter base number: ";
                cin >> num1;
                cout << "Enter exponent: ";
                cin >> num2;
                cout << "Result: " << exponentiation(num1, num2) << endl;
                break;

            case 7:
                cout << "Goodbye!" << endl;
                break;

            default:
                cout << "Invalid choice. Please select 1-7." << endl;
        }

    } while(choice != 7);

    return 0;
}