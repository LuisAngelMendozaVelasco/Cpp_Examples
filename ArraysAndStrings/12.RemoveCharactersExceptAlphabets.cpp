//This program takes a string (object) input from the user and removes all characters except alphabets.

#include <iostream>
#include "myFunctions.h"
using namespace std;

int main() {
    string line;
    string temp = "";

    cout << "Enter a string: ";
    getline(cin, line);

    for (int i = 0; i < line.size(); ++i) {
        if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z')) {
            temp += line[i];
        }
    }

    line = temp;
    cout << "\nOutput string: " << line << endl;

    askOS();
    return 0;
}