//We can simply copy string objects in C++ using = assignment operator.

#include <iostream>
#include "myFunctions.h"
using namespace std;

int main() {
    string s1, s2;

    cout << "Enter string s1: ";
    getline (cin, s1);

    s2 = s1;
    cout << "\ns1 = "<< s1 << endl;
    cout << "s2 = "<< s2 << endl;

    askOS();
    return 0;
}