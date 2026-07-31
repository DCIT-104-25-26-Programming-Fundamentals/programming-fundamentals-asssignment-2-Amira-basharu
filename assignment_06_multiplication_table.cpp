#include <iostream>
using namespace std;

void printTable(int number)
{
    cout << "Multiplication Table for " << number << ":" << endl;

    for (int i = 1; i <= 12; i++)
    {
        cout << number << " x " << i << " = " << number * i << endl;
    }
}

void printTables(int n)
{
    if (n <= 0)
    {
        cout << "Error: Number must be positive." << endl;
        return;
    }

    for (int i = 1; i <= n; i++)
    {
        printTable(i);

        if (i != n)
            cout << "---------------------------" << endl;
    }
}

int main()
{
    int number, n;

    cout << "Enter a number: ";
    cin >> number;

    printTable(number);

    cout << "\nEnter a number N: ";
    cin >> n;

    printTables(n);

    return 0;
}