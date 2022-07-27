/*In this program, a structure, student is created.
This structure has three members: name (string), roll (integer) and marks (float).
Then, we created a structure array of size 5 to store information of 5 students.
Using for loop, the program takes the information of 5 students from the user and displays it on the screen.*/

#include <iostream>
#include "../myFunctions.h"
using namespace std;

struct student {
    char name[50];
    int roll;
    float marks;
} s[5];

int main() {
    cout << "Enter information of students: ";

    //Storing information
    for(int i = 0; i < 5; ++i) {
        s[i].roll = i+1;
        cout << "\nRoll number " << s[i].roll << "!" << endl;

        cout << "Enter name: ";
        cin >> s[i].name;

        cout << "Enter marks: ";
        cin >> s[i].marks;
    }

    cout << "\nDisplaying Information: ";

    // Displaying information
    for(int i = 0; i < 5; ++i) {
        cout << "\nRoll number " << s[i].roll << "!" << endl;
        cout << "Name: " << s[i].name << endl;
        cout << "Marks: " << s[i].marks << endl;
    }

    askOS();
    return 0;
}