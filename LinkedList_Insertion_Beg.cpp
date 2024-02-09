#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};
Node *head=nullptr;

void atstart(){
    char cho;
    Node* ptr=new Node();
    if (ptr==nullptr){
        cout<<"Overflow";
    }
    else{
        int num;
        cout<<"Enter Value: ";
        cin>>num;
        ptr->data=num;
        ptr->next=head;
        head=ptr;
    }
    cout<<"Enter the value Again?(y/n):";
    cin>>cho;
    if(cho=='y' || cho=='Y'){
        atstart();
    }
}


void display(){
    Node* ptr=head;
    if (ptr==nullptr) {
        cout<<"Nothing to print";
    } 
    else{
        cout<<"\nValues\n";
        while (ptr != nullptr) {
            cout<< "\n"<< ptr->data<<" Adrs: "<< &ptr ->data;
            ptr=ptr->next;
        }
    }
}


int main(){
    atstart();
    display();
    return 0;
}