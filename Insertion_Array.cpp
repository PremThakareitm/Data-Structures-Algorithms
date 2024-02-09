#include <iostream>
using namespace std;

class Insertion {
public:
    int array[100];
    int n;

    void insertatbeg() {
        int num;

        cout << "\nEnter the element to insert at [0] index:";
        cin >> num;

        for (int i = n; i > 0; i--) {
            array[i] = array[i - 1];
        }

        array[0] = num;
        n++;

        cout << "\nElements after Insertion:" << endl;
        for (int i = 0; i < n; i++) {
            cout << array[i] << " ";
        }
        cout << endl;
    }

    void insertatend() {
        int num;

        cout << "\nEnter the element to insert at [" << n << "] index:";
        cin >> num;

        array[n] = num;
        n++;

        cout << "\nElements after Insertion:" << endl;
        for (int i = 0; i < n; i++) {
            cout << array[i] << " ";
        }
        cout << endl;
    }

    void insertatindex() {
        int pos, num;

        cout << "\nEnter the index: ";
        cin >> pos;

        cout << "\nEnter the element to insert at index " << pos << ": ";
        cin >> num;

        for (int i = n; i > pos; i--) {
            array[i] = array[i - 1];
        }

        array[pos] = num;
        n++;

        cout << "\nElements after Insertion:" << endl;
        for (int i = 0; i < n; i++) {
            cout << array[i] << " ";
        }
        cout << endl;
    }

    void displayy() {
        cout << "\nElements:" << endl;
        for (int i = 0; i < n; i++) {
            cout << array[i] << " ";
        }
        cout << endl;
    }

    void count() {
        cout<< "Number of elements:" << n << endl;
    }

    void valbeg() {
    int valueToInsert, beforeValue;

    cout << "\nEnter the Value to insert before:";
    cin >> beforeValue;

    cout << "\nEnter the Value to insert:";
    cin >> valueToInsert;

    int indexToInsertBefore = -1;

    for (int i = 0; i < n; i++) {
        if (array[i] == beforeValue) {
            indexToInsertBefore = i;
            break;
        }
    }

    if (indexToInsertBefore == -1) {
        cout << "Value not found. Cannot insert before." << endl;
        return;
    }

    for (int i = n++; i > indexToInsertBefore; i--)
        array[i] = array[i - 1];

    array[indexToInsertBefore] = valueToInsert;

    cout << "\nElements after Insertion:" << endl;
    for (int i = 0; i < n; i++)
        cout << array[i] << " ";
    cout << endl;
}

    void valend(){
    int valueToInsert, afterValue;

    cout << "\nEnter the Value to insert after:";
    cin >> afterValue;

    cout << "\nEnter the Value to insert:";
    cin >> valueToInsert;

    int indexToInsertAfter = -1;

    for (int i = 0; i < n; i++) {
        if (array[i] == afterValue) {
            indexToInsertAfter = i;
            break;
        }
    }

    if (indexToInsertAfter == -1) {
        cout << "Value not found. Cannot insert after." << endl;
        return;
    }

    for (int i = n++; i > indexToInsertAfter + 1; i--)
        array[i] = array[i - 1];

    array[indexToInsertAfter + 1] = valueToInsert;

    cout << "\nElements after Insertion:" << endl;
    for (int i = 0; i < n; i++)
        cout << array[i] << " ";
    cout << endl;

}

};

int main() {
    int n;
    cout << "\nEnter the number of elements:";
    cin >> n;

    Insertion intoo;
    intoo.n = n;

    cout << "\nEnter the elements:";

    for (int i = 0; i < n; i++) {
        cout << "\nEnter the " << i << "th element:";
        cin >> intoo.array[i];
    }

    cout << "\nElements:";
    for (int i = 0; i < n; i++) {
        cout << intoo.array[i] << " ";
    }

    int cho;
    char choo;

    do {
        cout << "\nEnter the CHOICE 1.index 2.beg 3.end 4.display 5.count 6.val bef 7.val end: ";
        cin >> cho;

        switch (cho) {
            case 1:
                intoo.insertatindex();
                break;
            case 2:
                intoo.insertatbeg();
                break;
            case 3:
                intoo.insertatend();
                break;
            case 4:
                intoo.displayy();
                break;
            case 5:
                intoo.count();
                break;
            case 6:
                intoo.valbeg();
                break;
            case 7:
                intoo.valend();
                break;
            default:
                cout << "\nInvalid choice. Please enter a valid choice.";
                break;
        }

        cout << "\nPerform the Operations Again(y/n):";
        cin >> choo;
    } while (choo == 'y' || choo == 'Y');

    return 0;
}
