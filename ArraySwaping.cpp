//find the largest and smallest element in the array and swap the index.

#include <iostream>
using namespace std;

void operation() {
    int n;
    cout << "Enter the number of Elements:";
    cin >> n;
    int array[n];

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    int max = array[0];
    int min = array[0];
    int maxIndex = 0;
    int minIndex = 0;

    for (int i = 1; i < n; i++) {
        if (array[i] > max) {
            max = array[i];
            maxIndex = i;
        }
        if (array[i] < min) {
            min = array[i];
            minIndex = i;
        }
    }

    int temp = array[maxIndex];
    array[maxIndex] = array[minIndex];
    array[minIndex] = temp;


    cout << "Modified array: ";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }

    cout << "\nMax: " << max << " at index " << minIndex << "\n";
    cout << "Min: " << min << " at index " << maxIndex << "\n";
}

int main() {
    operation();
    return 0;
}
