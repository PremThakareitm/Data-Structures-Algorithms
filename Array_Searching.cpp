#include <iostream>

using namespace std;

int main() {
    int size;
    cout << "Enter the size:";
    cin >> size;
    int array[size];

    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }

    cout << "Elements:";
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }

    int val;
    int *PTR = &array[0];

    cout << "\nEnter the number:";
    cin >> val;

    int *Pos = nullptr;

    for (int i = 0; i < size; i++) {  
        if (val == *PTR) {
            Pos = PTR;
            break;
        }
        PTR++;
    }

    if (Pos != nullptr) {
        cout << "Value " << val << " found at index " << (Pos - array) << endl;
    } else {
        cout << "Value " << val << " not found in the array." << endl;
    }

    return 0;
}
