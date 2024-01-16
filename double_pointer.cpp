//Double pointer.cpp

#include <iostream>
using namespace std;

int main(){
    int a=12;
    int *ptr=&a;
    int **ptr1=&ptr;
    cout<<a<<endl<<*ptr<<endl<<*ptr1<<endl<<**ptr1<<endl;

return 0;
}
