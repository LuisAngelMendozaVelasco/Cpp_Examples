/*In this program, a structure(student) is created which contains name, roll and marks as its 
data member. Then, a structure variable(s) is created. Then, data (name, roll and marks) is 
taken from user and stored in data members of structure variable s. Finally, the data entered by user is displayed.*/

#include <iostream>
#include "../myFunctions.h"
using namespace std;

struct student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    student s;

    cout << "Enter information!" << endl;
    cout << "Enter name: ";
    cin >> s.name;
    cout << "Enter roll number: ";
    cin >> s.roll;
    cout << "Enter marks: ";
    cin >> s.marks;

    cout << "\nDisplaying Information!" << endl;
    cout << "Name: " << s.name << endl;
    cout << "Roll: " << s.roll << endl;
    cout << "Marks: " << s.marks << endl;

    askOS();
    return 0;
}