#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of Entries:";
    cin>>n;

    float array[n];
    for (int i = 1; i <= n; i++) {
        cout<<"Enter the Student" << i << " marks:";
        cin>>array[i];
    }

    int sum = 0, passi_sum = 0, faili_sum;

    for (int i = 0; i < n; i++) {
        sum += array[i];
        if (array[i] > 40) {
            passi_sum+=array[i];
        } else {
            faili_sum-=passi_sum;
        }
    }

    cout<<"Passing percentage: "<< (passi_sum / n)*100 << endl;
    cout<<"Failing percentage: "<< (faili_sum / n)*100 << endl;

    return 0;
}
