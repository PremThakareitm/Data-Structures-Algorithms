//void pointer.cpp

#include <iostream>
using namespace std;

int main(){
    char a='P';
    void *ptr=&a;

    cout<<a<<endl<<*(char*)ptr<<endl<<endl;
    cout<<typeid(a).name()<<endl;

return 0;
}
