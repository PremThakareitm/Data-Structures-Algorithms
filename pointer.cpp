//Pointer.cpp

#include <iostream>
using namespace std;

int main(){
int a=5;
int *ptr=&a;

cout<<a<<endl<<ptr<<endl<<*ptr<<endl;
cout<<sizeof(a)<<endl<<sizeof(ptr)<<endl<<sizeof(*ptr);

return 0;
}