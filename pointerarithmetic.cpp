//Pointerarithmetic.cpp

#include <iostream>
using namespace std;

int main(){

int a=10,b=15;
int *ptr1=&a,*ptr2=&b;
(*ptr1)++;
(*ptr2)--;
cout<<"A is:"<<a<<endl<<"B is:"<<b<<endl;
cout<<"Sum is:"<<(*ptr1)+(*ptr2);

    return 0;
}