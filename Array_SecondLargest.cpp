#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of Entries:";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter the " << i+1 << "st number: ";
        cin >> arr[i];
    }

    int max = arr[0];
    int s_max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            s_max = max;
            max = arr[i];
        } else if (arr[i] > s_max && arr[i] < max) {
            s_max = arr[i];
        }
    }

    cout << "Max: " << max << endl;
    cout << "Second largest element: " << s_max << endl;
    return 0;
}
