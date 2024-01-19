#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Ente the Number of Entries:";
    cin>>n;
    float arr[n],sum=0;
    for(int i=1; i<=n; i++){
        cout<<"Enter the "<<i<<"st Number to Find Mean:";
        cin>>arr[i];
        sum+=arr[i];
    }
    float mean=sum/n;
    cout<<"Mean is: "<<mean;
}