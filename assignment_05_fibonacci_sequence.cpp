#include <iostream>
using namespace std;

void printFibonacci(int n)
{
    if (n <= 0)
    {
        cout << "Error: Number of terms must be positive." << endl;
        return;
    }

    int first = 0, second = 1;

    cout << "Fibonacci sequence: ";

    for (int i = 1; i <= n; i++)
    {
        cout << first << " ";

        int next = first + second;
        first = second;
        second = next;
    }

    cout << endl;
}

bool isFibonacci(int number)
{
    if (number < 0)
        return false;

    int first = 0, second = 1;

    while (first < number)
    {
        int next = first + second;
        first = second;
        second = next;
    }

    return first == number;
}

int main()
{
    int n, number;

    cout << "How many terms? ";
    cin >> n;

    printFibonacci(n);

    cout << "Enter a number to check: ";
    cin >> number;

    if (isFibonacci(number))
        cout << number << " is a Fibonacci number." << endl;
    else
        cout << number << " is NOT a Fibonacci number." << endl;

    return 0;
}