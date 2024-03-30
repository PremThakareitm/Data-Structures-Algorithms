//Write a CPP program to find second smallest of n numbers using an array.

#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of array:";
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the" << i << "th element:";
        cin >> arr[i];
    }

    if (size < 2)
    {
        cout << "There is no second smallest element.\n";
        return 0;
    }

    int min = arr[0];
    int sec_min = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            sec_min = min;
            min = arr[i];
        }
        else if (arr[i] < sec_min && arr[i] != min)
        {
            sec_min = arr[i];
        }
    }

    cout << "Second smallest Element:" << sec_min;
}