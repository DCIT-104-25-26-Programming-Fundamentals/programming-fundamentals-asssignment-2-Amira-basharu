#include <iostream>
using namespace std;

int findSum(int arr[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
        sum += arr[i];

    return sum;
}

double findAverage(int arr[], int size)
{
    return (double)findSum(arr, size) / size;
}

int findMaximum(int arr[], int size)
{
    int max = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    return max;
}

int findMinimum(int arr[], int size)
{
    int min = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }

    return min;
}

int main()
{
    int size;

    cout << "How many numbers? ";
    cin >> size;

    if (size <= 0)
    {
        cout << "Error: Number of elements must be positive." << endl;
        return 0;
    }

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "\nResults:" << endl;
    cout << "Sum:     " << findSum(arr, size) << endl;
    cout << "Average: " << findAverage(arr, size) << endl;
    cout << "Maximum: " << findMaximum(arr, size) << endl;
    cout << "Minimum: " << findMinimum(arr, size) << endl;

    return 0;
}