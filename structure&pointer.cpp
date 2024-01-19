#include <iostream>

using namespace std;

struct Enrollment
{
    float cpp, pyt, mat, srs, cf;
};

void regular()
{
    int n;
    cout << "Enter the number of Students: ";
    cin >> n;

    Enrollment stu_enr[n];

    for (int i = 0; i < n; i++) {
        cout << "Student Regular Exam Marks " << i + 1 << ":" << endl;

        cout << "C++ : ";
        cin >> stu_enr[i].cpp;

        cout << "Python : ";
        cin >> stu_enr[i].pyt;

        cout << "Maths : ";
        cin >> stu_enr[i].mat;

        cout << "SRS : ";
        cin >> stu_enr[i].srs;

        cout << "Computer Foundation : ";
        cin >> stu_enr[i].cf;
    }

    for (int i = 0; i < n; i++) {
        cout << "Student " << i + 1 << " Marks:" << endl;
        cout << "C++ : " << stu_enr[i].cpp << endl;
        cout << "Python : " << stu_enr[i].pyt << endl;
        cout << "Maths : " << stu_enr[i].mat << endl;
        cout << "SRS : " << stu_enr[i].srs << endl;
        cout << "Computer Foundation : " << stu_enr[i].cf << endl;

        if (stu_enr[i].cpp < 30) cout << "Reexam for C++ is recommended." << endl;
        if (stu_enr[i].pyt < 30) cout << "Reexam for Python is recommended." << endl;
        if (stu_enr[i].mat < 30) cout << "Reexam for Maths is recommended." << endl;
        if (stu_enr[i].srs < 30) cout << "Reexam for SRS is recommended." << endl;
        if (stu_enr[i].cf < 30) cout << "Reexam for Computer Foundation is recommended." << endl;
    }

}
int main()
{
    int cho;
    cout << "1. Enrollment for Exam.\n2. Enter Marks \n:";
    cin >> cho;

    if (cho == 1) {
        regular();
    }
    else{
        regular();
    }

    return 0;
}