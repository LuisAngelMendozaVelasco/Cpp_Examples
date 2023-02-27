//User input strings

#include <iostream>
#include <string>
#include "../myFunctions.h"
using namespace std;

int main() {
    string fullName;

    cout << "Type your full name: ";
    getline(cin, fullName);
    cout << "Your name is: " << fullName << endl;

    askOS();
    return 0;
}
