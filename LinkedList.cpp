#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

Node* head = nullptr;

void beginsert() {
    Node* ptr = new Node();
    if (ptr == nullptr) {
        cout << "\nOVERFLOW";
    } else {
        int item;
        cout << "\nEnter value: ";
        cin >> item;
        ptr->data = item;
        ptr->next = head;
        head = ptr;
        cout << "\nNode inserted";
    }
}

void lastinsert() {
    Node* ptr = new Node();
    if (ptr == nullptr) {
        cout << "\nOVERFLOW";
    } else {
        int item;
        cout << "\nEnter value: ";
        cin >> item;
        ptr->data = item;
        if (head == nullptr) {
            ptr->next = nullptr;
            head = ptr;
            cout << "\nNode inserted";
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->next = nullptr;
            cout << "\nNode inserted";
        }
    }
}

void randominsert() {
    int loc, item;
    Node* ptr = new Node();
    if (ptr == nullptr) {
        cout << "\nOVERFLOW";
    } else {
        cout << "\nEnter element value: ";
        cin >> item;
        ptr->data = item;
        cout << "\nEnter the location after which you want to insert: ";
        cin >> loc;
        Node* temp = head;
        for (int i = 0; i < loc; i++) {
            temp = temp->next;
            if (temp == nullptr) {
                cout << "\nCan't insert\n";
                return;
            }
        }
        ptr->next = temp->next;
        temp->next = ptr;
        cout << "\nNode inserted";
    }
}

void begin_delete() {
    Node* ptr;
    if (head == nullptr) {
        cout << "\nList is empty\n";
    } else {
        ptr = head;
        head = ptr->next;
        delete ptr;
        cout << "\nNode deleted from the beginning ...\n";
    }
}

void last_delete() {
    Node* ptr, * ptr1;
    if (head == nullptr) {
        cout << "\nList is empty";
    } else if (head->next == nullptr) {
        head = nullptr;
        delete head;
        cout << "\nOnly node of the list deleted ...\n";
    } else {
        ptr = head;
        while (ptr->next != nullptr) {
            ptr1 = ptr;
            ptr = ptr->next;
        }
        ptr1->next = nullptr;
        delete ptr;
        cout << "\nDeleted Node from the last ...\n";
    }
}

void random_delete() {
    Node* ptr, * ptr1;
    int loc, i;
    cout << "\nEnter the location of the node after which you want to perform deletion: ";
    cin >> loc;
    ptr = head;
    for (i = 0; i < loc; i++) {
        ptr1 = ptr;
        ptr = ptr->next;

        if (ptr == nullptr) {
            cout << "\nCan't delete";
            return;
        }
    }
    ptr1->next = ptr->next;
    delete ptr;
    cout << "\nDeleted node " << loc + 1;
}

void search() {
    Node* ptr = head;
    int item, i = 0, flag = 0;
    if (ptr == nullptr) {
        cout << "\nEmpty List\n";
    } else {
        cout << "\nEnter item which you want to search: ";
        cin >> item;
        while (ptr != nullptr) {
            if (ptr->data == item) {
                cout << "Item found at location " << i + 1;
                flag = 0;
            } else {
                flag = 1;
            }
            i++;
            ptr = ptr->next;
        }
        if (flag == 1) {
            cout << "Item not found\n";
        }
    }
}

void display() {
    Node* ptr = head;
    if (ptr == nullptr) {
        cout << "Nothing to print";
    } else {
        cout << "\nPrinting values . . . . .\n";
        while (ptr != nullptr) {
            cout << "\n" << ptr->data;
            ptr = ptr->next;
        }
    }
}

int main() {
    int choice = 0;
    while (choice != 9) {
        cout << "\n\n*********Main Menu*********\n";
        cout << "\nChoose one option from the following list ...\n";
        cout << "\n===============================================\n";
        cout << "\n1.Insert in beginning\n2.Insert at last\n3.Insert at any random location";
        cout << "\n4.Delete from Beginning\n5.Delete from last\n6.Delete node after specified location";
        cout << "\n7.Search for an element\n8.Show\n9.Exit\n";
        cout << "\nEnter your choice?\n";
        cin >> choice;
        switch (choice) {
        case 1:
            beginsert();
            break;
        case 2:
            lastinsert();
            break;
        case 3:
            randominsert();
            break;
        case 4:
            begin_delete();
            break;
        case 5:
            last_delete();
            break;
        case 6:
            random_delete();
            break;
        case 7:
            search();
            break;
        case 8:
            display();
            break;
        case 9:
            exit(0);
            break;
        default:
            cout << "Please enter a valid choice..";
        }
    }
    return 0;
}
