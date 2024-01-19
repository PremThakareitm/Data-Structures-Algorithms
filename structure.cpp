#include <iostream>
#include <string>
using namespace std;

struct Details
{
    int rollno;
    string name;
    string dob;

    void display()
    {
        cout << "Roll Number: " << rollno << endl;
        cout << "Name: " << name << endl;
        cout << "Date of Birth: " << dob << endl;
    }
};

int main()
{
    int n;
    cout << "ENTER THE NUMBER OF STUDENTS: ";
    cin >> n;
    Details info[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Details for Student " << i + 1 << ":" << endl;

        cout << "Name of the Student: ";
        getline(cin>>ws,info[i].name);

        cout << "Roll Number: ";
        cin >> info[i].rollno;

        cout << "Date of Birth: ";
        cin >> info[i].dob;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "\nDetails for Student " << i + 1 << ":" << endl;
        info[i].display();
    }
    return 0;
}

