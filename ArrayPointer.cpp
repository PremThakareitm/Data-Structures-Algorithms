#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int arr1[5] = {11, 12, 13, 14, 15};
    int arr2[5] = {21, 22, 23, 24, 25};
    int sum = 0;
    int sum1 = 0;
    int sum2 = 0;
    int *ptrarray[3] = {arr, arr1, arr2};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            cout << *(ptrarray[i] + j) << " ";
            if (i == 0 && j >= 0 && j < 5) {
                sum += *(ptrarray[i] + j);
            }
            if (i == 1 && j >= 0 && j < 5) {
                sum1 += *(ptrarray[i] + j);
            }
            if (i == 2 && j >= 0 && j < 5) {
                sum2 += *(ptrarray[i] + j);
            }
        }
    }
    cout << endl << sum/5 << endl << sum1/5 << endl << sum2/5 << endl;

    return 0;
}
